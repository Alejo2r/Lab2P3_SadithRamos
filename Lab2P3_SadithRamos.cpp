#include <iostream>
#include <array>
#include <cmath>
using namespace std;
void printArray(float arreglo[]) {
    for (int indice = 0; indice < 4; indice++){
        cout << "[" << arreglo[indice] << "]" << endl;
    }
}
void descendente(float arreglo[], int size) {
    for (int i = 0; i < size; ++i)
        for (int j = 0; j < size - i - 1; ++j) {
            float tempo = arreglo[j];
            if (tempo < arreglo[j + 1]) {
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = tempo;
            }
        }
    printArray(arreglo);
}
void ranking(float arreglo[], int size) {
    for (int i = 0; i < size; ++i)
        for (int j = 0; j < size - i - 1; ++j) {
            float tempo = arreglo[j];
            if (tempo > arreglo[j + 1]) {
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = tempo;
            }
        }
    for (int indice = 0; indice < 4; indice++) {
        cout << "#" << indice+1 << ".   " << "[" << arreglo[indice] << "]" << endl;
    }
}
void promedio(float arreglo[], int size) {
    float contador = 0;
    for (int indice = 0; indice < size; indice++){
        contador = contador + arreglo[indice];
    }
    contador = contador / 10;
    cout << "El promedio del arreglo es de: " << contador;
}
void mediana(float arreglo[], int size) {
    float mediana = (arreglo[(size / 2) - 1] + arreglo[size / 2])/2;
    cout << "La mediana del arreglo es de: " << mediana;
}
void graficarArreglo(float arreglo[], int size) {
    int numero;
    for (int indice = 0; indice < size; indice++){
        numero = floor(arreglo[indice]);
        switch (numero) {
        case 1:
            cout << "| *  " << arreglo[indice] << endl;
            break;
        case 2: 
            cout << "|  *  " << arreglo[indice] << endl;
            break;
        case 5:
            cout << "|     *  " << arreglo[indice] << endl;
            break;
        case 9:
            cout << "|         *  " << arreglo[indice] << endl;
            break;
        case 10:
            cout << "|          *  " << arreglo[indice] << endl;
            break;
        case 14:
            cout << "|              *  " << arreglo[indice] << endl;
            break;
        case 15:
            cout << "|               *  " << arreglo[indice] << endl;
            break;
        case 20:
            cout << "|                    *  " << arreglo[indice] << endl;
            break;
        case 21:
            cout << "|                     *  " << arreglo[indice] << endl;
            break;
        }
    }
}
int main(){
    int op;
    float temporal = 0;
    do {
        cout << "1. Ejercicio #1" << endl;
        cout << "2. Ejercicio #2" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese la opcion de desee" << endl;
        cin >> op;
        switch (op) {
        case 1:
            int opc;
            do {
                cout << "Bienvenido al sistema de Time Trials" << endl;
                cout << "1. Ingresar tiempos" << endl;
                cout << "2. Tiempos descendentes" << endl;
                cout << "3. Ranking de Tiempos" << endl;
                cout << "4. Salir" << endl;
                cin >> opc;

                switch (opc) {
                    float arreglo[4];
                case 1:
                    for (int indice = 0; indice < 4; indice++){
                        cout << "Ingrese el tiempo: ";
                        cin >> arreglo[indice];
                    }
                    cout << "Tiempos registrados!" << endl;
                    break;
                case 2:
                    if (arreglo == 0) {
                        cout << "Registra tus tiempos antes!" << endl;
                    }
                    else {
                        descendente(arreglo, 4);
                    }
                    break;
                case 3:
                    if (arreglo == 0) {
                        cout << "Registra tus tiempos antes!" << endl;
                    }
                    else {
                        ranking(arreglo, 4);
                    }
                    break;
                }
            } while(opc != 4);
            break;
        case 2:
            cout << endl;
            int num;
            float arreglo[10];
            temporal = 0;
            for (int i = 0; i < 10; i++){
                arreglo[i] = temporal + sqrt(i + 1) + pow(-1,i) * log(i+2);
                temporal = arreglo[i];
            }
            do{
                for (int i = 0; i < 10; i++) {
                    cout << arreglo[i] << endl;
                }
                cout << "Menu Sumatoria" << endl;
                cout << "1. Promedio    " << endl;
                cout << "2. Mediana" << endl;
                cout << "3. Graficar" << endl;
                cout << "4. Salir" << endl;
                cin >> num;

                switch (num) {
                case 1:
                    promedio(arreglo, 10);
                    break;
                case 2:
                    mediana(arreglo, 10);
                    break;
                case 3:
                   graficarArreglo(arreglo, 10);
                    break;
                }
            } while (num!=4);
            break;
        case 3:
            cout << "Gracias por usar el programa";
            break;
        default:
            cout << "Opcion invalida" << endl;
        }
    } while (op != 3);
}


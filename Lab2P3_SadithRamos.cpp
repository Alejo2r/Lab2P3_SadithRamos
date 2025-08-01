#include <iostream>
using namespace std;
#include <array>
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
            int num;
            float arreglo[10];
            for (int i = 0; i < 10; i++){
                arreglo[i] = temporal + sqrt(i + 1) + pow(-1,i) * log(i+2);
                temporal = arreglo[i];
            }
            do{
                for (int i = 0; i < 10; i++) {
                    cout << arreglo[i] << endl;
                }
                cout << "Menu Sumatoria" << endl;
                cout << "1. " << endl;
                cout << "2. Tiempos descendentes" << endl;
                cout << "3. Ranking de Tiempos" << endl;
                cout << "4. Salir" << endl;
                cin >> num;
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


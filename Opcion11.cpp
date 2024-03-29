#include <iostream>
#include <bitset>
using namespace std;

void Opcion11() {
    int numeroDecimal;
    
    // Solicitar al usuario que ingrese un n�mero decimal
    cout << "Ingrese un n�mero decimal: ";
    cin >> numeroDecimal;
    
    // Convertir el n�mero decimal a binario usando std::bitset
    string binario = bitset<8>(numeroDecimal).to_string();
    
    // Eliminar los ceros a la izquierda
    size_t pos = binario.find('1');
    if (pos != string::npos) {
        binario = binario.substr(pos);
    }
    
    // Imprimir el n�mero binario
    cout << "El n�mero binario es: " << binario << endl;

   
}



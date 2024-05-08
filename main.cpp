#include <iostream>
#include <vector>
#include <string>

#include "supermarketfs.hpp"

using namespace std;



int main(){

    cout << "****Supermercado***** \n";
    int cantidad;
    cout << "Ingrese la cantidad de productos: \n";
    cin >> cantidad; 

    string productos[cantidad];
    int precio[cantidad];
    int cantidadProduct[cantidad];
    int subCantidad[cantidad];
    int subTotal[cantidad];
    int total = 0;

    
    for(int i = 0; i < cantidad; i++){
        cout << "Ingrese el nombre de los productos " << i + 1 << "\n";
        cin >> productos[i]; 
        cout << "Ingresa la cantidad: " << productos[i] << "\n";
        cin >> cantidadProduct[i];
        cout << "Ingresa el precio de " << productos[i] << "\n";
        cin >> precio[i];
        subTotal[i] = precio[i] * cantidadProduct[i];
        total += precio[i] * cantidadProduct[i];
        
       
    }

    for(int j = 0; j < cantidad; j++){
        
        cout <<  "Productos: " << productos[j] << " cantidad: " << cantidadProduct[j] << " precio " << precio[j] << " sub-total " << subTotal[j]  <<  "\n";
    }
    cout << "Total: " << total << "\n";


    return 0;
}
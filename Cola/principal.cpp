#include <iostream>
#include "cola.h"
using namespace std;


int main() {
    cola<int> cola1;
    cola1.iniciarCola();
    cola1.insertar(1);
    cola1.insertar(2);
    cola1.insertar(3);
    cola1.mostrarCola();
    cout << "Elemento eliminado: " << cola1.eliminar() << endl;
    cola1.mostrarCola();
    cout<<"---------------------------------"<<endl;
    cola<string> cola2;
    cola2.iniciarCola();
    cola2.insertar("Hola");
    cola2.insertar("Mundo");
    cola2.mostrarCola();
    cout << "Elemento eliminado: " << cola2.eliminar() << endl;
    cola2.mostrarCola();
    cout<<"---------------------------------"<<endl;
    cola<float> cola3;
    cola3.iniciarCola();
    cola3.insertar(1.1);
    cola3.insertar(2.2);
    cola3.mostrarCola();
    cout << "Elemento eliminado: " << cola3.eliminar() << endl;
    cola3.mostrarCola();

    return 0;
}

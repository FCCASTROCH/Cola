#include<iostream>
using namespace std;

const int MAX_COLA = 5;

template<class T>
class cola {
private:
    T coladatos[MAX_COLA];
    int primero;
    int ultimo;

public:
    void iniciarCola();
    bool vacia() const;
    bool llena() const;
    void insertar(const T& insert);
    T eliminar();
    void mostrarCola() const;
};

template<class T>
void cola<T>::iniciarCola() {
    primero = 0;
    ultimo = -1;
}

template<class T>
bool cola<T>::vacia() const {
    return ultimo < primero;
}

template<class T>
bool cola<T>::llena() const {
    return ultimo == MAX_COLA - 1;
}

template<class T>
void cola<T>::insertar(const T& insert) {
    if (llena()) {
        cout << "La cola esta llena" << endl;
    }
    else {
        ultimo++;
        coladatos[ultimo] = insert;
    }
}

template<class T>
T cola<T>::eliminar() {
    T valor = T();
    if (vacia()) {
        cout << "La cola esta vacia" << endl;
    }
    else {
        valor = coladatos[primero];
        for (int i = 0; i < ultimo; i++) {
            coladatos[i] = coladatos[i + 1];
        }
        ultimo--;
    }
    return valor;
}

template<class T>
void cola<T>::mostrarCola() const {
    if (vacia()) {
        cout << "La cola esta vacia." << endl;
    }
    else {
        cout << "Contenido: ";
        for (int i = primero; i <= ultimo; i++) {
            cout << coladatos[i] << " ";
        }
        cout << endl;
    }
}



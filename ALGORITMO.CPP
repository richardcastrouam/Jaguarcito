//Ejercicio #1
// Richard Bernard Castro Fonseca 
//Fecha:08/05/2024
//version 1.0
//Implemente un algoritmo que permita evaluar el valor de verdad de las operaciones lógica 
//AND, OR y NOT para dos valores booleanos introducidos por el usuario.
#include <iostream>
using namespace std;

int main() {
    char b1, b2;
    cout << "Enter first boolean value (t for true, f for false): ";
    cin >> b1;
    cout << "Enter second boolean value (t for true, f for false): ";
    cin >> b2;

    // convert input to lowercase
    b1 = tolower(b1);
    b2 = tolower(b2);

    // convert input to boolean values
    bool bool1 = (b1 == 't');
    bool bool2 = (b2 == 't');

    // evaluate logical operations
    bool andResult = bool1 && bool2;
    bool orResult = bool1 || bool2;
    bool notResult1 = !bool1;
    bool notResult2 = !bool2;

    // print results
    cout << "AND: " << (andResult ? "true" : "false") << endl;
    cout << "OR: " << (orResult ? "true" : "false") << endl;
    cout << "NOT 1: " << (notResult1 ? "true" : "false") << endl;
    cout << "NOT 2: " << (notResult2 ? "true" : "false") << endl;

    return 0;
}
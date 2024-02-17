#include <iostream>
#include <string>
using namespace std;

int main(){
    string nombre = "Jose Vicente Carratalá Sanchis";
    string &referencia = nombre;

    cout << &nombre << "\n";
    
    return 0;
}
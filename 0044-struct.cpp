#include <iostream>
using namespace std;

int main(){
    struct{
        string nombre;
        int telefono;
        string email;
    } registro1,registro2;
    
    registro1.nombre = "Jose Vicente";
    registro1.telefono = 45325345;
    registro1.email = "jv@jocarsa.com";
    
    cout << registro1.nombre << "\n";
    return 0;
}
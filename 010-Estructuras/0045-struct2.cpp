#include <iostream>
using namespace std;

int main(){
    struct registro{
        string nombre;
        int telefono;
        string email;
    };
    
    registro agenda[20];
    agenda[0].nombre = "jose Vicente";
    agenda[0].telefono = 545435324;
    agenda[0].email = "jv@jocarsa.com";
    
    
    cout << agenda[0].nombre << "\n";
    return 0;
}
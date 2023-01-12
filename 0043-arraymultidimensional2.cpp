#include <iostream>
using namespace std;

int main(){
    int longitud = 20;
    string agenda[longitud][3];
    agenda[0][0] = "Jose Vicente";
    agenda[0][1] = "5235235";
    agenda[0][2] = "jv@jocarsa.com";
    
    agenda[1][0] = "Carlos";
    agenda[1][1] = "52353245535235";
    agenda[1][2] = "carlos@jocarsa.com";
    
    agenda[2][0] = "Celia";
    agenda[2][1] = "41234";
    agenda[2][2] = "celia@jocarsa.com";
    
    for(int i = 0;i<longitud;i++){
        cout << "nombre: " << agenda[i][0] << " - teléfono: " << agenda[i][1] << " - email: " << agenda[i][2] << "\n";
    }
    return 0;
}
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int longitud = 20;
    string agenda[longitud];
    agenda[0] = "Carlos";
    agenda[1] = "Camilo";
    agenda[2] = "Calixto";
    agenda[3] = "Cecilia";
    
    for(int i = 0;i<longitud;i++){
            cout << "Elemento en la agenda: " << agenda[i] << "\n";
    }
    return 0;
}
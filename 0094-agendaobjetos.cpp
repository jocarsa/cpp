#include <iostream>
using namespace std;

class Registro{
    private:
        string nombre;
        int telefono;
        string email;
    public:
        Registro(string minombre,int mitelefono,string miemail){
            nombre = minombre;
            telefono = mitelefono;
            email = miemail;
        }
        string getNombre(){
            return nombre;
        }

};

int main(){
     Registro registro1("Jose Vicente",44,"info@josevicentecarratala.com");
    cout << registro1.getNombre();
    
    return 0;
}
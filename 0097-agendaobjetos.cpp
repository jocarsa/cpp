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
        int getTelefono(){
            return telefono;
        }
        string getEmail(){
            return email;
        }
        void setNombre(string nuevonombre){
            nombre = nuevonombre;
        }
        void setTelefono(int nuevotelefono){
            telefono = nuevotelefono;
        }
        void setEmail(string nuevoemail){
            email = nuevoemail;
        }

};

int main(){
     Registro registro1("Jose Vicente",44,"info@josevicentecarratala.com");
    cout << registro1.getNombre();
    registro1.setNombre("Juan");
    cout << registro1.getNombre();   
    
    return 0;
}
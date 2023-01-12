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
        void setDatos(string nuevonombre,int nuevotelefono,string nuevoemail){
            nombre = nuevonombre;
            telefono = nuevotelefono;
            email = nuevoemail;
        }
};

void menu(){
    string eleccion;
    cout << "Agenda Objetos (c) Jose Vicente Carratalá \n";
    cout << "Elige una opción: \n";
    cout << "\t 1.-Listar registros \n";
    cout << "\t 2.-Insertar un registro \n";
    cin >> eleccion;
}

int main(){
    menu();
    return 0;
}
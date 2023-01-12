#include <iostream>
using namespace std;

class Registro{
    private:
        string nombre;
        int telefono;
        string email;
    public:
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
void menu();
Registro agenda[100];
int cursor = 0;
void listarRegistros(){
    cout << "Listado de los registros:\n";
    cout << "Nombre\tTelefono\tEmail\n";
    for(int i = 0;i<cursor;i++){
        cout << agenda[i].getNombre() << "\t" << agenda[i].getTelefono() << "\t" << agenda[i].getEmail() << "\n";
    }
    menu();
}
void insertarRegistros(){
    cout << "Insertamos un nuevo registro:\n";
    string nombre;
    int telefono;
    string email;
    cout << "Introduce el nombre:\n";
    cin >> nombre;
    cout << "Introduce el telefono:\n";
    cin >> telefono;
    cout << "Introduce el email:\n";
    cin >> email;
    agenda[cursor].setDatos(nombre,telefono,email);
    cursor++;
    menu();
}
void menu(){
    string eleccion;
    cout << "Agenda Objetos (c) Jose Vicente Carratalá \n";
    cout << "Elige una opción: \n";
    cout << "\t 1.-Listar registros \n";
    cout << "\t 2.-Insertar un registro \n";
    cin >> eleccion;
    if(eleccion == "1"){
        listarRegistros();
    }
    else if(eleccion == "2"){
        insertarRegistros();
    }
}

int main(){
    menu();
    return 0;
}
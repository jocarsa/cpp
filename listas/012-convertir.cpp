#include <iostream>
using namespace std;

int main(){
    char nombre[] = "Jose Vicente";
	string nombre2 = "";
	for(int i = 0;i<11;i++){
		nombre2 = nombre2 + nombre[i];
	}
	cout << nombre2 << "\n";
    return 0;
    
}
#include <iostream>
using namespace std;

int main(){
    string nombres[10];
    nombres[0] = "Carlos";
    nombres[1] = "Camila";
    string nombres2[20];
    memcpy(nombres2,nombres,sizeof(nombres));
	
	nombres = NULL;
	/*
	string nombres[20];
	
	memcpy(nombres,nombres2,sizeof(nombres));
	
	for(int i = 0;i<20;i++){
		cout << i << "-" << nombres[i] << "\n";
	}
	*/
    return 0;
    
}
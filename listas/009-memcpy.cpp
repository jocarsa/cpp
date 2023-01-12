#include <iostream>
using namespace std;

int main(){
    string nombres[10];
    nombres[0] = "Carlos";
    nombres[1] = "Camila";
    string nombres2[20];
    memcpy(nombres,nombres2,sizeof(nombres));
    return 0;
    
}
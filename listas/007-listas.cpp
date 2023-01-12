#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main(){
    
    list<int> numeros;
    numeros.push_back(2);
    numeros.push_back(3);
    for(int i = 0;i<150;i++){
        numeros.push_back(i);
    }
    list<int>::iterator iterador = numeros.begin();
    int longitudlista = numeros.size();
    for(int i = 0;i<longitudlista;i++){
       advance(iterador, i);
        cout << *iterador << "\n"; 
    }
    return 0;
    
}
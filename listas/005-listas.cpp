#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main(){
    
    list<int> numeros;
    numeros.push_back(2);
    numeros.push_back(3);
    list<int>::iterator iterador = numeros.begin();
    for(int i = 0;i<2;i++){
       advance(iterador, i);
        cout << *iterador << "\n"; 
    }
    return 0;
    
}
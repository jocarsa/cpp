#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main(){
    
    list<int> numeros;
    numeros.push_back(2);
    numeros.push_back(3);
    list<int>::iterator iterador = numeros.begin();
    advance(iterador, 0);
    cout << *iterador;
    return 0;
    
}
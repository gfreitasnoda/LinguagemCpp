/*
Programa para trabalhar com orientação 
a objeto. Usando classe e objetos
*/
#include <iostream>

/* Chamada da biblioteca std*/
using std::cout;
using std::cin;

class Texto{
    public:
    void mensagem1(){
        cout << "\nOlá!\n";
    }
    void mensagem2(){
        cout <<"\nBom dia!\n";
    }

};

int main (){
    Texto txt;
    txt.mensagem1();
    txt.mensagem2();
    return 0; 

}
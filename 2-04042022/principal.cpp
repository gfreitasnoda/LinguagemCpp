#include <iostream>
#include "usuario.h"
#include "operacao.h"

int main(){
    system("clear");
    Usuario us;
    Operacoes op;
    us.nome="Joao";
    us.email="joao@terra.com.br";
    us.senha="123";
    us.nivel="Admin";
    op.cadastro(us.nome,us.senha,us.email,us.nivel);

    return 0;
}

#include <iostream>
using std::cout;

#include "Pessoa.cpp"
#include "Pessoa.h"

#include "Funcionario.cpp"
#include "Funcionario.h"

void printPessoa( const Pessoa & );
int soma( int, int );
int main( )
{
    Funcionario p10("Catarina", "Professor");

    cout << "Imprimindo Funcionario.\n";
    p10.print( );

    cout << "Converteu Funcionario para Pessoa - printPessoa( const Pessoa & ).\n";
    printPessoa( p10 );

    cout << '\n';
    cout << "Converteu para inteiro soma( 3.4, 7.8 ): " << soma( 3.4, 7.8 ) << '\n';

    return 0;
}

void printPessoa( const Pessoa &pessoa )
{
    pessoa.print( );
}

int soma( int x, int y )
{
    return x + y;
}
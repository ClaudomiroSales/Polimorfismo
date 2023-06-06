
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

    printPessoa( p10 );

    cout << soma( 3.4, 7.8 ) << '\n';

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
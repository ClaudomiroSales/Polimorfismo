#include "Funcionario.h"

#include <iostream>
using std::cout;

Funcionario::Funcionario( string name, string cargo )
:Pessoa(name)
{
    this->cargo = cargo;
}
Funcionario::~Funcionario( )
{    
}
void Funcionario::print( ) const
{
    Pessoa::print( );
    cout << "Cargo " << cargo << '\n';
}
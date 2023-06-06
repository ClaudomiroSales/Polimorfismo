#include "Funcionario.h"

#include <iostream>
using std::cout;

Funcionario::Funcionario( string name, string cargo )
:Pessoa(name)
{
    this->name = name;
    this->cargo = cargo;
}
Funcionario::~Funcionario( )
{
    cout << "Destructor de Funcionario.\n";
}
void Funcionario::print( ) const
{
    cout << name << '\n';
    cout << cargo << '\n';
}
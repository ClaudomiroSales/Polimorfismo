#include "Pessoa.h"

#include <iostream>
using std::cout;

Pessoa::Pessoa( string name )
{
    this->name = name;
}
Pessoa::~Pessoa( )
{

}
void Pessoa::print( ) const
{
    cout << name << '\n';
}
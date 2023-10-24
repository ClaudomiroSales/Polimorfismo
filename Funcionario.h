#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "Pessoa.h"

#include <string>
using std::string;

class Funcionario : public Pessoa
{
public:
    Funcionario( string name, string cargo );
    ~Funcionario( );
    void print( ) const;

private:

    string cargo;

};


#endif // FUNCIONARIO_H
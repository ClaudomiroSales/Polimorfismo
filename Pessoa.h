#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using std::string;

class Pessoa 
{
public:
    Pessoa( string name );
    ~Pessoa( );
    void print( ) const;

protected:

    string name;

};


#endif // PESSOA_H
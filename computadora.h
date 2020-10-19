#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <iomanip>
using namespace std;

class computadora
{
    string nombre;
    string sistemaop;
    string marca;
    float memoriaRam;
public:
   computadora();
   computadora(const string &nombre,
                const string &sistemaop,
                const string &marca,
                float memoriaRam);
    void setNombre(const string &v);
    string getNombre();
    void setSistemaop(const string &v);
    string getSistemaop();
    void setMarca(const string &v);
    string getMarca();
    void setMemoriaRam(float v);
    float getMemoriaRam();

    friend ostream& operator<<(ostream &out,const computadora &c)
    {
        out << left;
        out <<setw(13)<<c.nombre;
        out <<setw(12)<<c.sistemaop;
        out <<setw(10)<<c.marca;
        out <<setw(10)<<c.memoriaRam;
        out <<endl;
         return out;
    }

    friend istream& operator>>(istream &in,computadora &c)
    {
        string temp;
        float MemoriaRam;
        cout<<"Nombre de cuenta: "<<endl;
        getline(cin,c.nombre);
        cout<<"sistema Operativo: "<<endl;
        getline(cin,c.sistemaop);
        cout<<"Pc Marca: "<<endl;
        getline(cin,c.marca);
        cout<<"Memoria Ram: "<<endl;
        cin>>c.memoriaRam;
        return in;
    } 

};

#endif
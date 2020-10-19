#include "computadora.h"

computadora::computadora()
{

}
computadora::computadora(const string &nombre,
                const string &sistemaop,
                const string &marca,
                float memoriaRam)
{
    this->nombre=nombre;
    this->sistemaop = sistemaop;
    this->marca = marca;
    this->memoriaRam = memoriaRam;
}

void computadora::setNombre(const string &v)
{
    nombre = v;
}

string computadora::getNombre()
{
    return nombre;
}

void computadora::setSistemaop(const string &v)
{
    sistemaop = v;
}

string computadora::getSistemaop()
{
    return sistemaop;
}

void computadora::setMarca(const string &v)
{
    marca = v;
}

string computadora::getMarca()
{
    return marca;
}

void computadora::setMemoriaRam(float v)
{
    memoriaRam = v;
}

float computadora::getMemoriaRam()
{
    return memoriaRam;
}
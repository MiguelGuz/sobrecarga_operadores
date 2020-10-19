#include "laboratorio.h"

laboratorio::laboratorio()
{
    cont = 0;

}

void laboratorio::agregarcomputadora(const computadora &p)
{
    if (cont < 5){
        arreglo[cont]=p;
        cont++;
    }
    else{
        cout<<"arreglo completo"<<endl;
    }
}

void laboratorio::mostrar()
{
    cout << left;
    cout <<setw(13)<<"nombre.";
    cout <<setw(12)<<"sistemaop.";
    cout <<setw(10)<<"PC marca.";
    cout <<setw(10)<<"MemoriaRam.";
    cout <<endl;
    for(size_t i=0;i<cont;i++){
        computadora &c=arreglo[i];
        cout << c;
        //cout <<"Nombre del Equipo: "<<arreglo[i].getNombre()<<endl;
        //cout <<"Sistema Operativo: "<<arreglo[i].getSistemaop()<<endl;
        //cout <<"Marca del Equipo: "<<arreglo[i].getMarca()<<endl;
        //cout <<"Memoria Ram: "<<arreglo[i].getMemoriaRam()<<"gb"<<endl;
        //cout<<"-------------------------"<<endl;
    }
}
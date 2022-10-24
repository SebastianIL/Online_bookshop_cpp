#include <iostream>
using namespace std;
#include <vector>
#include <string>

class Producto{
    //Defino metodos y constructores
    private:
        string titulo;
        string autor;
        int codigo;
        double precio;
    public:
        Producto();
        Producto(string titulo,string autor,int codigo,double precio);
        string getTitulo();
        string getAutor();
        int getCodigo();
        double getPrecio();
        void setTitulo(string titulo);
        void setAutor(string autor);
        void setCodigo(int codigo);
        void setPrecio(double precio);
        void imprimeProductos();

};
//Constructor por defecto
Producto::Producto(){
    titulo="Sin titulo";
    autor="Sin Autor";
    codigo=0;
    precio=0;

}

Producto::Producto(string titulo,string autor,int codigo,double precio){
    this->titulo=titulo;
    this->autor=autor;
    this->codigo=codigo;
    this->precio=precio;
}
//Definicion de métodos
string Producto::getTitulo(){
    return titulo;
}

string Producto::getAutor(){
    return autor;
}

int Producto::getCodigo(){
    return codigo;
}

double Producto::getPrecio(){
    return precio;
}

void Producto::setTitulo(string titulo){
    this->titulo=titulo;
}

void Producto::setAutor(string autor){
    this->autor=autor;
}

void Producto::setCodigo(int codigo){
    this->codigo=codigo;
}

void Producto::setPrecio(double precio){
    this->precio=precio;
}

void Producto::imprimeProductos(){
    cout<<titulo<<" - "<<autor<<"  ("<<codigo<<")  $"<<precio<<" USD"<<endl;
    cout<<" "<<endl;
}
#include <iostream>
using namespace std;
#include "Producto.h"
#include <vector>
#include <string>

class Categoria{
    //Defino metodos y constructores
    private:
        string nombre;
        vector<Producto> productos;
        
    public:
        Categoria();
        Categoria(string nombre, vector<Producto>productos);
        string getNombre();
        void setProducto(vector<Producto> productos);
        void setnombre(string nombre);
        vector<Producto> getProductos();


};
//Constructor por defecto
Categoria::Categoria(){

    nombre="Sin Categoria";

}

Categoria::Categoria(string nombre,vector<Producto>productos){
    this->nombre=nombre;
    this->productos=productos;

}
//Definicion de métodos
void Categoria::setProducto(vector<Producto> productos){
    this->productos=productos;
}

string Categoria::getNombre(){
    return nombre;
}

void Categoria::setnombre(string nombre){
    this->nombre=nombre;
}


vector<Producto> Categoria::getProductos(){
    return productos;
}


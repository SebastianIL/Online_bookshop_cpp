#include <iostream>
using namespace std;
#include "Categoria.h"
#include <vector>
#include <string>

class Carrito{
    //Defino metodos y constructores
    private:
        vector<Producto> productos;
        int no;
    public:
        Carrito();
        Carrito(int no,vector<Producto>productos);
        void agregarProducto(Producto producto);
        int getNo();
        vector<Producto> getProducto();

        void setNo(int no);
        void setProductos(vector<Producto> productos);
        void imprimeCarrito();

};
//Constructor por defecto
Carrito::Carrito(){
    no=0;
}

Carrito::Carrito(int no,vector<Producto>productos){
    this->no=no;
    this->productos=productos;
}

//Definicion de métodos
int Carrito::getNo(){
    return no;
}

vector<Producto> Carrito::getProducto(){
    return productos;
}

void Carrito::setNo(int no){
    this->no=no;
}

void Carrito::setProductos(vector<Producto> productos){
    this->productos=productos;
}

void Carrito::agregarProducto(Producto producto){
    productos.push_back(producto);
    this->no=no++;
}

void Carrito::imprimeCarrito(){
    for(int i=0;i<productos.size(); i++){
        productos[i].imprimeProductos();

    }
    double sum=0;
    for(int i=0;i<productos.size(); i++){
        sum=sum+productos[i].getPrecio();
    }
    cout<<"El total es: "<<sum<<endl;
}
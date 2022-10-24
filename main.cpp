// Sebastian Inigo A01661179
// Proyecto Integrador
#include<iostream>
using namespace std;
#include "Carrito.h"
#include <vector>
#include <string>

int main(){
    //Defino los vectores de los productos
    vector<Producto> librosmist;
    vector<Producto> libroscienciaf;
    vector<Producto> librosromance;
    vector<Producto> librosterror;
    vector<Producto> librossusp;
    //Abro mi carrito
    Carrito cart;
    //Defino las 5 categorias y les agrego su respectivo vector de productos
    Categoria categoriaMist("Misterio",librosmist);
    Categoria categoriaCienciaf("Ciencia Ficcion",libroscienciaf);
    Categoria categoriaRomance("Romance",librosromance);
    Categoria categoriaTerror("Terror",librosterror);
    Categoria categoriaSusp("Suspenso",librossusp);
    //Acomodo cada libro  dentro de su vector
    librosmist.push_back(Producto("The man who died twice","Richard Osman",0,13.99));
    librosmist.push_back(Producto("Mercy","David Baldacci",1,14.99));
    librosmist.push_back(Producto("Stargazer","Anne Hillerman",2,14.99));
    librosmist.push_back(Producto("The nameless ones","John Connolly",3,12.99));
    librosmist.push_back(Producto("Ocean Prey","John Sandford",4,14.99));

    libroscienciaf.push_back(Producto("Under the whispering door","TJ Klune",0,21.99));
    libroscienciaf.push_back(Producto("Dune","Frank Herbert",1,9.99));
    libroscienciaf.push_back(Producto("Lore Olympus","Rachel Smythe",2,21.49));
    libroscienciaf.push_back(Producto("D (A tale of two worlds)","Michael Faber",3,13.99));
    libroscienciaf.push_back(Producto("Master of poisons","Andrea Hairston",4,14.99));

    librosromance.push_back(Producto("Dear Santa","Debbie Macomber",0,13.99));
    librosromance.push_back(Producto("The matzah ball","Jean Meltzer",1,13.99));
    librosromance.push_back(Producto("The hating game","Sally Thorne",2,8.99));
    librosromance.push_back(Producto("Tweet cute","Emma Lord",3,9.99));
    librosromance.push_back(Producto("One last stop","Casey McQuiston",4,13.99));

    librosterror.push_back(Producto("Billy summers","Stephen king",0,21.00));
    librosterror.push_back(Producto("Mexican gothic","Silvia Moreno-Garcia",1,13.99));
    librosterror.push_back(Producto("Adress unknown","Kathrine Kressmann",2,8.99));
    librosterror.push_back(Producto("Play it as it lays","Joan didion",3,9.99));
    librosterror.push_back(Producto("Misery","Stephen King",4,14.99));

    librossusp.push_back(Producto("False witness","Karin Slaughter",0,12.99));
    librossusp.push_back(Producto("Silverview","John le Carre",1,19.60));
    librossusp.push_back(Producto("The madness of crowds","Louise Penny",2,23.99));
    librossusp.push_back(Producto("The heron's cry","Ann Cleeves",3,14.99));
    librossusp.push_back(Producto("The judge's list","John Grisham",4,20.96));


    

    int respuesta=0;
    //empieza el ciclo para repetir hasta que el usuario desee salir
    do{
        //Pregunta al usuario que desea hacer de inicio
        cout<<"*****Bienvenid@ a Bastian's Bookshop*****"<<endl;
        cout<<" "<<endl;
        cout<<"Que quieres hacer?"<<endl;
        cout<<" "<<endl;
        cout<<"1) Ver Categorias"<<endl;
        cout<<" "<<endl;
        cout<<"2) Ver Carrito"<<endl;
        cout<<" "<<endl;
        cout<<"3) Salir"<<endl;
        cin>>respuesta;
    
        if(respuesta==1){
            // Si el usuario elige ver categoria, el listado de categorias se desplazara
            cout<<"Selecciona la categoria que desees ver sus productos"<<endl;
            cout<<" "<<endl;
            cout<<"Elija la categoria que quiera visitar: "<<endl;
            cout<<" "<<endl;
            cout<<"1.Misterio"<<endl;
            cout<<" "<<endl;
            cout<<"2.Ciencia Ficcion"<<endl;
            cout<<" "<<endl;
            cout<<"3.Romance"<<endl;
            cout<<" "<<endl;
            cout<<"4.Terror"<<endl;
            cout<<" "<<endl;
            cout<<"5.Suspenso"<<endl;
            cout<<" "<<endl;
            cout<<"6.Regresar"<<endl;

            int opcion;
            cin>>opcion;
            int agregar;
            //Switch dependiente de la opcion elegida por el usuario para saber que categoria sacar
            switch(opcion){
                case 1:
                    for(int i=0;i<librosmist.size();i++){
                        librosmist[i].imprimeProductos();
                    }
                    cout<<"Elige el producto que desees agregar a tu carrito"<<endl;
                    cout<<" "<<endl;

                    cin>>agregar;
                    cart.agregarProducto(librosmist[agregar]);
                    break;
                case 2:
                    for(int i=0;i<libroscienciaf.size();i++){
                        libroscienciaf[i].imprimeProductos();

                    }
                    cout<<"Elige el producto que desees agregar a tu carrito"<<endl;
                    cout<<" "<<endl;

                    cin>>agregar;
                    cart.agregarProducto(libroscienciaf[agregar]);
                    break;
                case 3:
                    for(int i=0;i<librosromance.size();i++){
                        librosromance[i].imprimeProductos();

                    }
                    cout<<"Elige el producto que desees agregar a tu carrito"<<endl;
                    cout<<" "<<endl;

                    cin>>agregar;
                    cart.agregarProducto(librosromance[agregar]);
                    break;
                case 4:
                    for(int i=0;i<librosterror.size();i++){
                        librosterror[i].imprimeProductos();
                    }
                    cout<<"Elige el producto que desees agregar a tu carrito"<<endl;
                    cout<<" "<<endl;

                    cin>>agregar;
                    cart.agregarProducto(librosterror[agregar]);
                    break;
                case 5:
                    for(int i=0;i<librossusp.size();i++){
                        librossusp[i].imprimeProductos();
                    }
                    cout<<"Elige el producto que desees agregar a tu carrito"<<endl;
                    cout<<" "<<endl;

                    cin>>agregar;
                    cart.agregarProducto(librossusp[agregar]);
                    break;
                case 6:
                    break;
            }
            


        }

        if(respuesta==2){
            //Se imprime el carrito si es que el usuario lo desea
            cart.imprimeCarrito();
        }


    }while(respuesta!=3);
    //Acaba el ciclo
    return 0;

}   


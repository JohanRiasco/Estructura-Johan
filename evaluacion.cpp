
#include <iostream>
using namespace std;

struct nodo{
    string nombre;
    int documento;
    int destino;
    nodo *sig;
};

nodo *aux, *aux2, *cab;

void registrar(){
aux= (struct nodo*) malloc (sizeof(nodo));
cout<<" Por favor Ingrese el nombre: ";
cin>>aux->nombre;
cout<<"Por favor Ingresar el documento: ";
cin>>aux->documento;
cout<<"Por favor Ingrese su destino final";
cin>>aux->destino;
aux->sig=NULL;


if(!cab){
    aux=cab;
} else {
    aux2=cab;
    while(aux2->sig!=NULL)
    aux2=aux2->sig;
}
}

void mostrar(){
    cab=aux;
    while(aux->sig!=NULL){
        cout<<"Nombre: "<<aux->nombre<<endl;
        aux=aux->sig;
    }
}

int main()
{
    int option;

    
    do{
        cout<<"1.registrar"<<endl<<"2. mostrar"<<endl;
        cin>>option;
        switch(option)
        {
        case 1:
        registrar();
        break;
        case 2:
        mostrar();
        break;
        }
    }while(option!=3);
    

    return 0;
}
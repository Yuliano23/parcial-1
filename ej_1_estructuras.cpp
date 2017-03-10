#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int telefono,mayor,menor;

struct productos{
int c_vendida;
int p_unitario;
int importe;
};

struct proveedores{
char nombre[30];
char telefono[10];
char direccion[30];
char empresa[30];
char producto[20];
productos p_vendidos[3];
};

proveedores persona[3];


int main(){
int proveedor;
 cout<<"ingrese la cantidad de proveedores\n";
 cin>>proveedor;

 for (int i=0; i<proveedor; i++){

cout<<"\ningrese el nombre del proveedor "<<i+1<< endl;
cin>>persona[i].nombre,30;
cin.ignore(256,'\n');

cout<<"\ningrese el numero de telefono\n";
cin.getline (persona[i].telefono,10);
cin.ignore(256,'\n');

cout<<"\ningrese la direccion\n";
cin.getline (persona[i].direccion,30);
cin.ignore(256,'\n');

cout<<"ingrese el nombre de la empresa\n";
cin.getline (persona[i].empresa,30);
cin.ignore(256,'\n');

cout<<"ingrese el nombre del producto\n";
cin>>persona[i].producto,20;
cin.ignore(256,'\n');

cout<<"\ningrese la cantidad vendida\n";
cin>>(persona[i].p_vendidos[i].c_vendida);

cout<<"\ningrese el precio unitario\n";
cin>>(persona[i].p_vendidos[i].p_unitario);

persona[i].p_vendidos[i].importe=persona[i].p_vendidos[i].c_vendida*persona[i].p_vendidos[i].p_unitario;
 }

for (int i=0; i<proveedor; i++){
    cout<<"\n\nlos datos del proveedor "<<i+1<<" son "<<endl;

    cout<<"\nnombre: "<<persona[i].nombre;
    cout<<"\ntelefono: "<<persona[i].telefono;
    cout<<"\ndireccion: "<<persona[i].direccion;
    cout<<"\nempresa: "<<persona[i].empresa;
    cout<<"\nproducto: "<<persona[i].producto;
    cout<<"\ncantidad vendida: "<<persona[i].p_vendidos[i].c_vendida;
    cout<<"\nprecio: "<<persona[i].p_vendidos[i].p_unitario;
    cout<<"\nimporte: "<<persona[i].p_vendidos[i].importe,"\n";
}

mayor=persona[0].p_vendidos[0].p_unitario;
menor=persona[0].p_vendidos[0].p_unitario;
int y,z;
for (int a=0; a<proveedor; a++){
    if (persona[a].p_vendidos[a].p_unitario>=mayor){
        mayor=persona[a].p_vendidos[a].p_unitario;y=a;
    }else{
        if (persona[a].p_vendidos[a].p_unitario<=menor){
        menor=persona[a].p_vendidos[a].p_unitario;z=a;
    }

    }
}

cout<<"\nel proveedor mas costoso es: "<<persona[y].nombre<<" y su costo es "<<mayor;
cout<<"\nel proveedor mas economico es: "<<persona[z].nombre<<" y su costo es "<<menor;

cout<<"\nlos  productos comprados son :\n\n";
for(int i=0;i<proveedor;i++){
cout<<"\nProveedor: "<<persona[i].nombre;
cout<<"\nProducto: "<<persona[i].producto;
}
return 0;
}

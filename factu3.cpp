#include<iostream>
using namespace std;
int main(){

int factura,dinero,precio,unidad,a;
char nombre[25],apellido[25],descripcion[50];

cout<<"Introduzca su Nombre y apellido seguido de un enter";
cout<<" \n";
cin>>nombre>>apellido;
cout<<" \n";

cout<<"Introduzca el numero de factura";
cout<<" \n";
cin>>factura;

cout<<"introduzca la descripcion o nombre del producto";
cout<<" \n";
cin>>descripcion;
cout<<" \n";

cout<<"introduzca la cantidad del producto a comprar";
cout<<" \n";
cin>>unidad;
cout<<" \n";

cout<<"introduzca el precio";
cout<<" \n";
cin>>precio;
cout<<" \n";

a=unidad*precio;
cout<<" \n";

cout<<"Factura Numero";
cout<<factura;
cout<<" \n";

cout<<"Cliente: ";
cout<<" \n";
cout<<nombre<<" "<<apellido;
cout<<" \n";

cout<<"Su compra es:";
cout<<" \n";
cout<<descripcion;
cout<<" \n";

cout<<"Cantidad de producto:";
cout<<" \n";
cout<<unidad;
cout<<" \n";

cout<<"Precio por unidad: ";
cout<<"\n";
cout<<precio;
cout<<" \n";

cout<<"Total a pagar:";
cout<<" \n";
cout<<" \n";
cout<<a;
cout<<" Dolares";

system("pause>null");

}
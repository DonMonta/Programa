#include<iostream>
#include<string.h>

using namespace std;
void ingresararticulos(string articulo[10] );
void ingresarprecio(float precio[10]);
void mostrar(string articulo[10],float precio[10]);
void calpreciototal(float subtotal,float precio[10],float i,float d,float t);
string ar[10];
float p[10],sb,iva=0.12,descuento=0.10,total;
int main(){
	
		cout<<"-----------------------------------------------------"<<endl;
		ingresararticulos(ar);
		ingresarprecio(p);
		mostrar(ar,p);
		calpreciototal(sb,p,iva,descuento,total);
	  
	return 0;
}
void ingresararticulos(string articulo[10] ){
cout<<"Ingrese los nombres de 10 articulos  :"<<endl<<endl;
	cout<<"primer articulo: ";
	cin>>articulo[0];
	cout<<"segundo articulo: ";
	cin>>articulo[1];
	cout<<"tercero articulo: ";
	cin>>articulo[2];
	 cout<<"cuarto articulo: "; 
    cin>>articulo[3];
    cout<<"Quinto articulo: ";
	cin>>articulo[4];
	cout<<"sexto articulo: ";
	cin>>articulo[5];
	cout<<"septimp articulo: ";
	cin>>articulo[6];
	cout<<"octavo articulo: ";
	cin>>articulo[7];
	cout<<"noveno articulo: ";
	cin>>articulo[8];
	cout<<"decimo articulo: ";
	cin>>articulo[9];	
}
void ingresarprecio(float precio[10]){
	cout<<"Ingrese el precio de los 10 articulos ingresados :"<<endl<<endl;
	cout<<"precio del 1er articulo: ";
	cin>>precio[0];
	cout<<"precio del 2do articulo: ";
	cin>>precio[1];
	cout<<"precio del 3er articulo: ";
	cin>>precio[2];	
	cout<<"precio del 4to articulo: ";
	cin>>precio[3];	
	cout<<"precio del 5to articulo: ";
	cin>>precio[4];	
	cout<<"precio del 6to articulo: ";
	cin>>precio[5];	
	cout<<"precio del 7mo articulo: ";
	cin>>precio[6];	
	cout<<"precio del 8vo articulo: ";
	cin>>precio[7];	
	cout<<"precio del 9no articulo: ";
	cin>>precio[8];	
	cout<<"precio del 10mo articulo: ";
	cin>>precio[9];	
}
void mostrar(string articulo[10],float precio[10]){
cout<<"-----------------------------------------------------"<<endl<<endl;
	    cout<<"Articulos"<<"\t"<<"Precios"<<"\t"<<endl<<endl;
	    cout<<articulo[0]<<"\t"<<precio[0]<<"\t"<<endl;
		cout<<articulo[1]<<"\t"<<precio[1]<<"\t"<<endl; 
		cout<<articulo[2]<<"\t"<<precio[2]<<"\t"<<endl;
		cout<<articulo[3]<<"\t"<<precio[3]<<"\t"<<endl;
		cout<<articulo[4]<<"\t"<<precio[4]<<"\t"<<endl;
		cout<<articulo[5]<<"\t"<<precio[5]<<"\t"<<endl;
		cout<<articulo[6]<<"\t"<<precio[6]<<"\t"<<endl;
		cout<<articulo[7]<<"\t"<<precio[7]<<"\t"<<endl;
		cout<<articulo[8]<<"\t"<<precio[8]<<"\t"<<endl;
		cout<<articulo[9]<<"\t"<<precio[9]<<"\t"<<endl;	
}
void calpreciototal(float subtotal,float precio[10],float i,float d,float t){
	subtotal=precio[0]+precio[1]+precio[2]+precio[3]+precio[4]+precio[5]+precio[6]+precio[7]+precio[8]+precio[9];
	cout<<endl<<endl;
	cout<<"Subtotal:  "<<subtotal<<endl<<endl;
	i*=subtotal;
	cout<<endl<<endl;
	cout<<"Iva:       "<<i<<endl;
	d*=subtotal;
	cout<<endl<<endl;
	cout<<"Descuento: "<<d<<endl;
	t=subtotal+i-d;
	cout<<endl<<endl;
	cout<<"Total:     "<<t<<endl;
}

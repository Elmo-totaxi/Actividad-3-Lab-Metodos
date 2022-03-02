//Importar la librería
 $ #include <iostream>


//Se utiliza main para utilizar los c++
 $ int main(){


//Compilación del archivo
 $ g++ Actividad3.cpp -o a.out


//Ejecutar el archivo dinámico
 $ ./a.out


//Importar la librería
#include <iostream>


//Para importar un String
#include <string>


//Se utiliza el estandar
using namespace std; // se puede quitar el acrónimo de la librería estandar


//Se utiliza main para utilizar los c++
int main(){
    std::cout<<"Este es mi primer programa"<<std::endl;  //similar a np.cos()
    int a=4;
    float b=6.0;
    double c=1e-6;
    float k;
    k=1.;
    
//Sirve para imprimir
cout<<"b="<<b<<endl;
    int s;
   cout<<"Ingrese un valor entero: "; cin>>s;

//Se pueden definir variables tipo char, es decir caracteres 
//Puede volver las variables en constantes con const
   const char carac[]="Descontrol ppp";
   cout<<carac<<endl;

//Se inserta un String   
string g="xd";

//Para insertar números binarios y hexadecimales
int v= 0b11;
int w= 0xa;
cout<<"Número binario"<<v<<endl;
cout<<"Número hexadecimal"<<w<<endl;

    return 0;
}



#include <iostream>
#include <string>
using namespace std; // se puede quitar el acrónimo de la librería estandar
int main(){
    std::cout<<"Este es mi primer programa"<<std::endl;  //similar a np.cos()
    int a=4;
    float b=6.0;
    double c=1e-6;
    float k;
    k=1.;
    cout<<"b="<<b<<endl;
    int s;
   cout<<"Ingrese un valor entero: "; cin>>s;
   const char carac[]="Descontrol ppp";
   cout<<carac<<endl;
   string g="xd";
   double d;
   d='a';
   int v= 0b11;
   int w= 0xa;
   cout<<"Número binario"<<v<<endl;
   cout<<"Número hexadecimal"<<w<<endl;
    return 0;		

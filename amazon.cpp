#include<iostream>

using namespace std;

int main(){
    string nombre;
    string apellido;
    string calle;
    string colonia;
    int numCasa;

    int edad;

    int cp;

    double NumeroTarjeta;

    int cvv;

    cout <<"digite su nombre: "; cin>>nombre;
    cout <<"Digite su apellido: ";cin>>apellido;

    cout <<"Digite su edad: ";cin>>edad;



    if (edad >= 18)
    {
    cout <<"nombre: "<<nombre<<endl;
    cout <<"apellido: "<<apellido<<endl;
    cout <<"edad: "<<edad<<endl;

    cout << "Ingresa un numero de tarjeta: "; cin>>NumeroTarjeta;
    cout << "Ingresa tu cvv: "; cin>>cvv;

    cout <<"Digite su codigo postal: ";cin>>cp;
    cout <<"Ingrese una direccion calle: "; cin >>calle;
    cout <<"Ingrese una direccion colonia: "; cin >>colonia;
    cout <<"Ingrese un numero de casa: "; cin >>numCasa;
    
    //datos finales

    cout <<"nombre: "<<nombre<<endl;
    cout <<"apellido: "<<apellido<<endl;
    cout <<"edad: "<<edad<<endl;

    cout <<"Calle: "<<calle<<endl;
    cout <<"Colonia: "<<colonia<<endl;
    cout <<"numero de casa: "<<numCasa<<endl;
    cout <<"postal: "<<cp<<endl;

 
   
    }else
    {
        cout<<"Tienes que ser mayor de edad para usar este servicio";
    }
    

    return 0; 
}

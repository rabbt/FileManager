#include<iostream>

using namespace std;

int main(){
    int edad;
    double alturacm;
    float alturam;
    long anio;

    short turno;

    
    cout<<"Digite su edad ";cin>>edad;
    if(edad == false){
        cout<<"ERROR el dato ingresado no es un numero valido";
    }
    cout<<"Digite su año de nacimiento ";cin>>anio;    
    cout<<"Digite su altura en centimetros ";cin>>alturacm;
    cout<<"Digite su altura en metros ";cin>>alturam;
    cout<<"digie su Edad: ";cin>>edad;
    cout<<"Turno: ";cin>>turno;


    cout<<"Altura en metros "<<alturam<<endl;
    cout<<"Altura en metros "<<alturacm<<endl;
    cout<<"Turno: "<<turno<< endl;
    cout<<"Edad"<<edad<<endl;


    return 0;    
}

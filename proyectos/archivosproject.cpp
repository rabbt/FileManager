#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

void lectura();
void aniadir();

int main(){

    lectura();
    aniadir();

    system("pause");
    return 0;
}

void lectura(){
    ifstream archivo;
    string nombreArchivo,texto;

    cout<<'Digite el nombre o la ubicacion del archivo o fichero';
    getline(cin, nombreArchivo);

    archivo.open(nombreArchivo.c_str(),ios::in); //abrir archivo

    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }

    while(!archivo.eof()){ //meintras no sea el final del archivo
        getline(archivo,texto);
        cout<<texto<<endl;
    }
}

void aniadir(){
    ofstream archivo;
    string texto;

    archivo.open("programacion.txt",ios::app);

    if(archivo.fail()){
        cout<<'no se pudo abrir el archivo';
        exit(1);
    }

    cout<<'Digite el texto que quiere aniadir :';
    getline(cin,texto);

    archivo<<texto<<endl;

    archivo.close();
}
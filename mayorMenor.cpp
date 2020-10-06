#include<iostream>

int min(int, 
            int,    
            int);

int max(int,  
        int,  
        int);

using namespace std;

int main(){
    int num1,num2,num3;
    cout<<"ingrese tres numeros\n";
    cin>>num1>>num2>>num3;
    cout<<"el min es: "<<min(num1,num2,num3)<<endl;
    cout<<"el max es: "<<max(num1,num2,num3)<<endl;
    cin.ignore();return 0;
}
int min(int num1,int num2,int num3){
    if(num1<num2) num2=num1;
    if(num1<num3) num3=num1;
    if(num2<num3) num3=num1;
return num3;
}
int max(int num1,int num2,int num3){
    if(num1>num2) num2=num1;
    if(num1>num3) num3=num1;
    if(num2>num3) num3=num1;
return num3;
}
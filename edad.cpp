#include<iostream>

using namespace std;

int main()
{
    int edad = 0;
    int *apuntador_edad = &edad;

    cout<<"Ingrese su edad: ";
    cin>>*apuntador_edad;
    cout<<endl;

    if (*apuntador_edad>17)
    {
        cout<<"Usted es mayor de edad\n";
        cout<<"Su edad es: "<<*apuntador_edad<<"\n";
    }

    else
    {
        cout<<"Usted es menor de edad\n";
        cout<<"Su edad es: "<<*apuntador_edad<<"\n";
    }

    cout<<"El espacio de memoria es: "<<&apuntador_edad;
    
    return 0;
}
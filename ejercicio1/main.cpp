//Implementar una función reciba un arreglo de enteros y su tamaño y 
//retorne la suma de los elementos de un arreglo.(Iterativa y recursiva).
#include <iostream>

using namespace std;

int suma_arr(int arr[],int t){
    int suma=0;
    for(int i=0;i<t;i++)
        suma+=arr[i];
    return suma;
}
int suma_arrR(int arr[],int t){
    if(t==1)
        return arr[0];
    else
        return arr[t-1] + suma_arrR(arr,--t);
}

int main()
{
    int tam;

    cout<<"Tamanio del arreglo: ";
    cin>>tam;
    int arr[tam];
    cout<<"Numeros: ";
    for(int i=0;i<tam;i++)
        cin >>arr[i];
    cout<<suma_arr(arr,tam)<<endl;
    cout<<suma_arrR(arr,tam);

    return 0;
}

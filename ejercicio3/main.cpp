//Implementar una función que ordene los elementos de un arreglo: ascendente.
#include <iostream>

using namespace std;
void ordenar(int arr[], int t){
    int aux;
    for(int i=0;i<t;i++)
        for(int j=0;j<t-1;j++)
            if(arr[j]>arr[j+1]){
                aux=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=aux;
                /*arr[j]^=arr[j+1];
                arr[j+1]^=arr[i];
                arr[j]^=arr[j+1];*/
            }
}

int main()
{
    int arr[]={5,3,6,2,7};
    int tam=5;
    ordenar(arr,tam);

    for(int i=0;i<tam;i++)
    cout<<arr[i]<<" ";

    return 0;
}

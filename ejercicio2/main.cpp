//Implementar una función que invierta los elementos
// de un arreglo de enteros (Iterativa y recursiva).
#include <iostream>

using namespace std;

void invertir(int arr[],int tam){
    for(int i=0;i<tam/2;i++){
    	//esta forma se utiliza operadores de bits
        arr[i]^=arr[tam-1-i];
        arr[tam-1-i]^=arr[i];
        arr[i]^=arr[tam-1-i];
		//esta forma utilizamos un auxiliar
        /*aux=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=aux;*/
    }
}
int invertirR(int arr[], int f,int i){
	int aux;	
    if(i<=f){
	    aux=arr[f];
	    arr[f]=arr[i];
	    arr[i]=aux;    	
	    invertirR(arr, --f,++i);
    }
}
int main()
{
	int arr[]={1,2,3,4,5,6,7};
    int tam=7;
    for(int i=0;i<tam;i++)
        cout<<arr[i]<<" ";

    invertir(arr,tam);
    cout<<"\n";
    for(int i=0;i<tam;i++)
        cout<<arr[i]<<" ";

	int in=0;
	//la funcion , recibe el arreglo, el indice final y el indice inicial 
    invertirR(arr,tam-1,in);
    cout<<"\n";
    for(int i=0;i<tam;i++)
        cout<<arr[i]<<" ";
    return 0;
}

//Implemente una función que reciba una cadena
// y retorne su tamaño. (Iterativa y recursiva)
#include <iostream>

using namespace std;


int tama(char arr[]){
    int c=0,i=0;

    while (arr[i]!='\0'){
        c++;
        i++;
    }
    return c;
}
int tamaR(char arr[],int i){
    if(arr[i]=='\0')
        return 0;
    else
        return 1+tamaR(arr,++i);
}
int main()
{
    char arr[]={'5','3','6','2','3','2','7','\0'};

    cout<<tama(arr)<<endl;
    cout<<tamaR(arr,0);
    return 0;
}

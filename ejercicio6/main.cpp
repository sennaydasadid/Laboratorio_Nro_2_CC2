//Implemente una función que reciba dos cadenas a y b;
//y copie los elementos de la cadena a para la cadena b.
#include <iostream>

using namespace std;

void copiar(char arrA[], char arrB[]){
    for(int i=0;arrA[i]!='\0';i++){
        arrB[i]=arrA[i];
    }
    for(int i=0;arrB[i]!='\0';i++)
    cout<<arrB[i];
}
int main()
{
    char arrA[]={'d','4','r','2','5','\0'};
    char arrB[]={'c','b','a','1','4','\0'};
    copiar(arrA,arrB);
    return 0;
}

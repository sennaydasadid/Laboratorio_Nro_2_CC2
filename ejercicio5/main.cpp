//Implemente una función que reciba dos cadenas a y b;
 //dicha función debe concatenar la cadena a a la cadena b.
//(asuma que la cadena b tiene el tamaño suficiente para contener los elementos de a).
#include <iostream>

using namespace std;

void copiar(char arrb[],int b,char arra[],int a){
    for(int i=0;i<b;i++){
        arrb[a+i]=arra[i];
    }

    for(int i=0;i<b;i++)
        cout<<arrb[i];
}

int main()
{
    char arrA[]={'d','4','r','2','5'};
    char arrB[10]={'c','b','a','1','4'};
    copiar(arrB,10,arrA,5);
    return 0;
}

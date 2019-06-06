#include <stdio.h>
void main(){
    int soma;
    for(int par = 0; par <= 20; par++){
        if(par%2 == 0){
            soma += par;
        }
    }
    printf("A soma de todos os números impar entre 0 e 20 é: %d\n", soma);
    
} 
#include <stdio.h>
void trocar(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void main(){
    int a = 10;
    int b = 7;
    printf("ANTES DA TROCAR\na = %d\nb = %d\n",a ,b);
    trocar(&a, &b);
    printf("DEPOIS DA TROCAR\na = %d\nb = %d\n",a ,b);
}

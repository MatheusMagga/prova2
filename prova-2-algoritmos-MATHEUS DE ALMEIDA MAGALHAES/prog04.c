#include <stdio.h>
void trocar(char* a[10]){
    for (int i = 0; i < 10; i++){
        if(*a[i] == 'a'){
            *a[i] = 'z';
        }
    }
}
void main(){
    char array[10];
    printf("Insira 10 caracteres!\n");
    for (int i = 0; i < 10; i++){
       scanf("%s", &array[i]);
   } 
    printf("Antes da troca!\n%s\n", array);
    trocar(&array);
    printf("Depois da troca!\n%s\n", array);

}
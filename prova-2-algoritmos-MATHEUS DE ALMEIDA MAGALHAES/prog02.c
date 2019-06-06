#include <stdio.h>
void main(){
    char array[10];
    int cont = 0;
    printf("Insira uma String de 10 letras!\n");
    scanf("%s", &array[0]);
    for (int i = 0; i < 10; i++){
        if(array[i] == 'a' || array[i] == 'A'){
            cont += 1;
        }
    }
    printf("A string tem %d A's.\n", cont);
}
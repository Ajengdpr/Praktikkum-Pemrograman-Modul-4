#include <stdio.h>

int main(){
    int nilai;

    scanf("%d", &nilai);
    if(nilai > 0){
        printf("positif", nilai);
    } else if(nilai < 0){
        printf("negatif", nilai);
    } else if (nilai == 0){
       printf("nol", nilai);
    }
    
}
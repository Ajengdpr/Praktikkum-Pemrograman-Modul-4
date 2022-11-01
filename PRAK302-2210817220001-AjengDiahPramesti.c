#include <stdio.h>
#include <stdlib.h>

int main(){
    float nilai;
    char nilai_huruf;

    scanf("%f", &nilai);
    if(nilai >= 80.00 && nilai <= 100.00){
        printf("A");
        nilai_huruf = 'A';
    } else if(nilai >= 70.00 && nilai < 79){
        printf("B");
        nilai_huruf = 'B';
    } else if(nilai >= 60.00 && nilai < 69){
        printf("C");
        nilai_huruf = 'C';
    } else if(nilai >= 50.00 && nilai < 59){
        printf("D");
        nilai_huruf = 'D';
    } else if(nilai >= 0.00 && nilai < 50){
        printf("E");
        nilai_huruf = 'E';
    }
    
}

#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    if (a > 0 && a < 10) {
        printf("Satuan", a);
    } else if (a >= 10 && a < 20){
        printf("Belasan", a);
    } else if (a >= 20 && a <= 99){
        printf("Puluhan", a);
    } else if (a >= 100 ){
       printf("Anda Menginput Melebihi Limit Bilangan", a); 
    } else if (a == 0 ){
       printf("Nol", a);    
    }
              
}
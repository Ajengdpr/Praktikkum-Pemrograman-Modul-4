#include <stdio.h>

int main(){

int detik, menit, jam, hari, sisadetikA, sisadetikB, detikx;

scanf("%d", &detik);

sisadetikA = detik % 86400;
sisadetikB = detik % 3600;
detikx     = detik % 60;
menit      = sisadetikB / 60;
jam        = sisadetikA / 3600;
hari       = detik / 86400;

if (detik >=1 && detik <60){
    printf("00:00:%.2d\n", detik);
} else if (detik >=60 && detik <3600){
    printf("00:%.2d:%.2d\n", menit, detikx);
} else if (detik >= 3600 && detik <86400){
    printf("%.2d:%.2d:%.2d\n", jam, menit, detikx);
} else {
    printf("%d hari %.2d:%.2d:%.2d\n" , hari, jam, menit, detikx);
}
printf ("\n");
}
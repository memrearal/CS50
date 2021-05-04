#include<stdio.h>
#include<cs50.h>
int main (void){
    int yukseklik, bosluk, kare;
    do{
        yukseklik = get_int("Yukseklik: ");
    }while(yukseklik < 1 || yukseklik > 8); 
    for(int i = 1; i <= yukseklik; i++){
        for(bosluk = (height - i); bosluk > 0; bosluk--){
            printf(" ");
        }
        for (kare = 1; kare <= (i); kare++){
            printf("#");    
        }
        printf("\n");
    }
    return 0;
}

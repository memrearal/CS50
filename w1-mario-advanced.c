#include <cs50.h>
#include <stdio.h>
int main(void){
    int yukseklik;
    do{
        yukseklik = get_int("Yukselik: ");
    }while (yukseklik <1  || yukseklik > 8);
    for(int i = 1; i <= yukseklik; i++){
        for(int j = 1; j <= yukseklik-i; j++){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("#");
        }
        printf("  ");
        for(int j = 1; j <= i; j++){
            printf("#");
        }
        printf("\n");
    }
}
#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void){
    long kartNo = get_long("Kredi karti numarasini girin: ");
    int hane = 0, s = 0;
    long y = kartNo;
    while(y != 0){
        int scift = 0, stek = 0;
        int rem = y % 10;
        hane++;
        if(hane % 2 == 0){
            int katla = rem * 2;
            if(katla == 0){
                scift += katla;
            }else{  
                while(katla != 0){
                    scift += katla % 10;
                    katla /= 10;
                }
            }
        }else{
            stek += rem;
        }
        y /= 10;
        s += scift + stek;
    }
    if(hane != 13 && hane != 15 && hane != 16){
        printf("INVALID\n");
    }else if(s % 10 == 0){
        if(hane == 16){
            if(kartNo / 100000000000000 >= 51 && kartNo / 100000000000000 <= 55){
                printf("MASTERCARD\n");
            }else if (kartNo / 1000000000000000 == 4){
                printf("VISA\n");
            }else{
                printf("INVALID\n");
            }
        }else if(hane == 15){
            if(kartNo / 10000000000000 == 34 || kartNo / 10000000000000 == 37){
                printf("AMEX\n");
            }else{
                printf("INVALID\n");
            }
        }else  if(hane == 13){
            if(kartNo / 1000000000000 == 4){
                printf("VISA\n");
            }else{
                printf("INVALID\n");
            }
        }
    }else{
        printf("INVALID\n");
    }
}
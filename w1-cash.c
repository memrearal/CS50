#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void) {
    printf("Ne kadar para ustu verilecek? ");
    double paraUstu = GetFloat();
    while(paraUstu < 0) {
        printf("Ne kadar para ustu verilecek? ");
        paraUstu = GetFloat();
    }
    int s = round((paraUstu - (int)paraUstu) * 100);
    int bozukluk = 0;
    while(s >= 25) {
        s -= 25;
        bozukluk++;
    }
    while(s >= 10) {
        s -= 10;
        bozukluk++;
    }
    while(s >= 5) {
        s -= 5;
        bozukluk++;
    }
    while(s >= 1) {
        s -= 1;
        bozukluk++;
    }
    printf("%i\n", bozukluk + ((int)paraUstu * 4));
}
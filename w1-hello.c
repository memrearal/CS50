#include <stdio.h>
#include <cs50.h>
int main(void){
    string adi = get_string("Adın ne? ");
    printf("Merhaba, %s\n", adi);
}
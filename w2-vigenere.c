#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, string argv[]){
    int uzunluk;
    if(argc != 2){
        printf("error");
        return 1;
    }else{
        uzunluk = strlen(argv[1]);
        for(int h = 0; h < uzunluk; h++){
            if(!isalpha(argv[1][h])){
                printf("error");
                return 1;
            }
        }
    }
    char key[uzunluk];
    for(int g = 0; g < uzunluk; g++){
        key[g] = argv[1][g];
    }
    printf("plain:");
    string plain = get_string();
    char cipher[strlen(plain)];
    int plainLen = strlen(plain);
    for(int i = 0, j = 0; i < plainLen; i++){
        if(isalpha(plain[i])){
            if(isupper(key[j % uzunluk])){
                if(isupper(plain[i])){
                    cipher[i] = ((((plain[i] - 65) + (key[j % uzunluk] - 65)) % 26) + 65);
                }else{
                    cipher[i] = ((((plain[i] - 97) + (key[j % uzunluk] - 65)) % 26) + 97);
                }
            }else{
                if(isupper(plain[i])){
                    cipher[i] = ((((plain[i] - 65) + (key[j % uzunluk] - 97)) % 26) + 65);
                }else{
                    cipher[i] = ((((plain[i] - 97) + (key[j % uzunluk] - 97)) % 26) + 97);
                }
            }
            j++;
        }else{
            cipher[i] = plain[i];
        }
    }
    printf("ciphertext: ");
    for(int k = 0; k < plainLen; k++){
        printf("%c",cipher[k]);
    }
    printf("\n");
    return 0;
}
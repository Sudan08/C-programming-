// Online C compiler to run C program online
#include <stdio.h>

void upperToLower(char);

int main() {
    // Write C code here
    char c;
    printf("Enter a alphabet(A-Z) : ");
    scanf("%c",&c);
    upperToLower(c);

    return 0;
}

void upperToLower(char c){
    if((int)c >= 97 && (int)c <=122){
        printf("Already lowercase: %c",c);
    }else{
     printf("To lowercase : %c",(char)((int)c+32));
    }
}

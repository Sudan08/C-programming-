// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i;
    int j;
    for (i=65;i<70;++i){
        for (j=65;j<=i;++j){
            printf("%c",(char)i);
        }
        printf("\n");
    }

    return 0;
}

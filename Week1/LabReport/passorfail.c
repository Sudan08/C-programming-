// Online C compiler to run C program online
#include <stdio.h>

void result(float);

int main() {
    // Write C code here
    float a;
    printf("Enter your marks :");
    scanf("%f",&a);
    result(a);
    
    return 0;
}

void result(float a){
    if (a >= 80){
        printf("Distinction");
    }else if(a>=60 && a<80){
        printf("First Division");
    }else if(a>=50 && a<60){
        printf("Second Division");        
    }else if(a>=40 && a<50){
        printf("Third Division");
    }else{
        printf("Fail");
    }
}

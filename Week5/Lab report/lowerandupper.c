#include <stdio.h>

struct Numbers{
    int lower;
    int upper;
};

void display(struct Numbers userInput){
    int lower, upper;
    lower = userInput.lower;
    upper = userInput.upper;
    int i;
    printf("The numbers between %d and %d are : " ,lower,upper );
    for(i=lower+1;i<upper;i++){
        printf("%d ",i);
    };
};

void main(){
    struct Numbers userInput;
    printf("Enter lower number");
    scanf("%d",&userInput.lower);
    printf("Enter upper number");
    scanf("%d",&userInput.upper);
    display(userInput);
}

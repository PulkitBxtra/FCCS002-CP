#include <stdio.h> 

int main(){
    float F_Val,Sec_Val;
    printf("enter first number: ");
    scanf("%f",&F_Val);
    printf("enter second number: ");
    scanf("%f",&Sec_Val);
    if(Sec_Val==0){
        printf("cant divide by 0");
    }
    else{
        printf("quotient is: %.5f",F_Val/Sec_Val);
    }

    return 0;
}

#include <stdio.h>
#include "NumClass.h"


int main()
{
    int num1=0;
    int num2 =0;
    printf("Please enter two integers: ");
    scanf("%d %d", &num1,&num2);
    
    for(int i=num1;i<=num2;i++){
        if(isPrime(i)){
            printf("%d " ,i);
        }
    }
    printf("\n");

    for(int i=num1;i<=num2;i++){
        if(isArmstrong(i)){
            printf("%d ",i);
        }
    }
    printf("\n");

    for(int i=num1;i<=num2;i++){
        if(isStrong(i)){
            printf("%d ",i);
        }
    }
    printf("\n");
    
    for(int i=num1;i<=num2;i++){
        if(isPalindrome(i)){
            printf("%d ",i);
        }
    }
    printf("\n");

}


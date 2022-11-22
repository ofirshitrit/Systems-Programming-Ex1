#include <stdio.h>
#include "NumClass.h"


int main(int argc,char *argv[])
{
    int info;
    int first = -1;
    int second = -1; 
    
    while (scanf("%d",&info) == 1)
    {
        if (first == -1)
        {
            first = info;
        }else{
            second = info;
        }
        
    }

    
    
    
    printf("The Armstrong numbers are: ");
    for(int i=first;i<=second;i++){
        if(isArmstrong(i)){
            printf("%d ",i);
        }
    }
    printf("\n");

    printf("The Palimdromes are: ");
     for(int i=first;i<=second;i++){
        if(isPalindrome(i)){
            printf("%d ",i);
        }
    }
    printf("\n");


    printf("The Prime numbers are: ");
    for(int i=first;i<=second;i++){
        if(isPrime(i)){
            printf("%d " ,i);
        }
    }
    printf("\n");

    
    printf("The Strong numbers are: ");
    for(int i=first;i<=second;i++){
        if(isStrong(i)){
            printf("%d ",i);
        }
    }
    printf("\n");
    
   

}


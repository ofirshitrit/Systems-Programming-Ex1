#include <stdio.h>
#include "NumClass.h"


int main(){
    int num = 2;

    int result = isPalindrome(num);
    if(result == TRUE){
        printf("%d isPalindrom: TRUE\n", num);
    }else{
       printf("%d isPalindrom: FALSE\n", num); 
    }
    return 1;
}
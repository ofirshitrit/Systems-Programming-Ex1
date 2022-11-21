#include <stdio.h>
#include "NumClass.h"


int main(){
    int num = 3;

    int result = isPalindrome(num);
    if(result == TRUE){
        printf("%d isPalindrom: TRUE\n", num);
    }else{
       printf("s%d isPalindrom: FALSE\n", num); 
    }
    printf("test main done");
    return 1;
}
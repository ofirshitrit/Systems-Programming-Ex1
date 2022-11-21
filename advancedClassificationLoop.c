#include <stdio.h>
#include "NumClass.h"

int isPalindrome(int num){
    int originalnum = num;
    int reversedNum = 0;
    while (num>0)
    {
        int lastDigit = num%10;
        reversedNum = reversedNum*10 + lastDigit; 
        num/=10;
    }
    
    if(reversedNum==originalnum){
        return TRUE;
    } 
    return FALSE;
}

int lengthNum(int num){
    int counter=0;
    if(num==0){
        return 1;
    }
    while(num>0){
        counter++;
        num/=10;
    }
    return counter;
}
int power(int base , int exp){
    int ans=1;
    for(int i=0; i<exp; i++){
         ans*=base;
    }
    return ans;
}

int isArmstrong(int num){
    int sum=0;
    int originalNum =num;
    int length = lengthNum(num);
    while(num>0){
        int digit= num%10;
        sum+=power(digit, length);
        num/=10;
    }
    if(sum==originalNum){
        return TRUE;
    }
    return FALSE;
}
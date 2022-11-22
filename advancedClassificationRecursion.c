#include<stdio.h>
#include "NumClass.h"

int reverseNum(int num,int reverseSoFar){
    if(num==0)return reverseSoFar;
    return reverseNum(num/10,reverseSoFar*10+num%10);
}


int isPalindrome(int num)
{
    if(num == reverseNum(num,0))
    {
        return TRUE;
    }
    return FALSE;
}

int power(int base , int power){
    int ans=1;
    for(int i=0; i<power; i++){
         ans*=base;
    }
    return ans;
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

int sumOfPowerOfDigits(int num, int exp){
    if(num==0) {
        return 0;
    }
    return sumOfPowerOfDigits(num/10, exp) + power(num%10,exp) ; 
}


int isArmstrong(int num){
    return num == sumOfPowerOfDigits(num, lengthNum(num));
}
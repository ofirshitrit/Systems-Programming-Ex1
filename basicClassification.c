#include<stdio.h>
#include "NumClass.h"

int isPrime(int num){
    if (num==1 || num==2)
        return TRUE;
    int ans = TRUE;
    for(int i=2 ; i< num ;i++){
        if(num%i==0)
            ans=FALSE;
    }
    return ans;
}


int factorial(int num){
    int ans=1;
    for(int i=1; i<=num; i++){
        ans*=i; 
    }
    return ans;
}




int isStrong(int num){
    int sum=0;
    int originalNum =num;
    while(num>0){
        int digit= num%10;
        int factNum = factorial(digit); 
        sum+=factNum;
        num/=10;
    }
    if(sum==originalNum){
        return TRUE;
    }
    return FALSE;
}

// #include<stdio.h>
// #include "NumClass.h"

// void main(){
//     int x = 71;
//     int y = 145;
//     if(isStrong(y)==1){
//         printf("%d ,strong",y);
//     }else{
//         printf("%d ,not strong",y);
//     }
// }
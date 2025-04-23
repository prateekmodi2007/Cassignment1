#include <stdio.h>
#include"lazy.h"
int main() {
    int num;
    scanf("%d",&num);
    if(palindrome(num)){
        printf("its a palindrome number");
    }
    else{
        printf("its not a palindrome number");
    }

}
#include <stdio.h>
#include"lazy.h"
int main(){
    int num;
    scanf("%d",&num);
    if(armstrong(num)){
        printf("its a armstrong number");
    }
    else{
        printf("its not a armstrong number");
    }

}
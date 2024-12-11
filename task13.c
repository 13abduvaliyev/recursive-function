#include <stdio.h>

int factorial(int f){

    if(f == 1){
       return 1;
    }

    return f * factorial(f - 1);
}

int main(){
     
    int a;

    scanf("%d", &a);

    printf("%d\n ", factorial(a));

    return 0;
}
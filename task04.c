#include <stdio.h>

void func(int n){
    
    if(n != 1)
        func(n - 1);
    if(n % 2 == 1)  
        printf("%d ", n);

}

int main(){

    int a;
    printf("Son kiriting: "); scanf("%d", &a);

    func(a);

    return 0;
}
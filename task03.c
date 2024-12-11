#include <stdio.h>

void func(int n){
    
    if(n % 2 == 0)
        printf("%d ", n);

    if(n != 1)
        func(n - 1);

}

int main(){

    int a;
    scanf("%d", &a);

    func(a);

    return 0;
}
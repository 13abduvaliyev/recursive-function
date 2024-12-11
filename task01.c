#include <stdio.h>

void func(int n){

    printf("%d ", n);

    if(n != 1)
        func(n - 1);
}

int main(){ 

    func(5);

    return 0;
}

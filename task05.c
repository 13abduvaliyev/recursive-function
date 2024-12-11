#include <stdio.h>

void func(int n, int m){

    printf("%d ", n);
    
    if(n != m){
        if(n < m)
            func(n + 1, m);
        else
            func(n - 1, m);
    } 
}


int main(){ 

    func(5, 1);

    return 0;
}

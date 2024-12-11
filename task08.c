#include <stdio.h>

int func(int n){
    if(n != 1){
        func(n - 1);
    }
    return printf("Hello world\n");
}
int main(){

    func(4);

    return 0;
}
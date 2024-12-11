#include <stdio.h>

void total(int n){
    
    int qoldiq = n % 10;
    
    if(n != 1){
        total(qoldiq - 1);    
    }
    
    printf("%d ", qoldiq);

}

int main(){

    total(1234);
    
    return 0;
}
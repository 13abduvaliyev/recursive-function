#include <stdio.h>

void func(int n){
    
    if(n != 2)
        if(n % 2 == 0){ 
            func(n - 2); // Juft son kiritganimizda bu ishlaydi
            printf("%d ", n);
        }else{ 
            func(n - 1); // Toq son kiritganimizda esa bu
        }
}

int main(){
 
    int a;
    scanf("%d", &a);

    func(a);

    return 0;
}
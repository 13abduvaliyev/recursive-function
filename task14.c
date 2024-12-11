#include <stdio.h>

void karra(int n, int m){
    
    if(m != 1){
        karra(n, m - 1);
    }
    
    int result = n * m;
    printf("%d x %d = %d\n", n, m, result); 
    
}

int main(){

    int a;
    int b;

    printf("Qaysi sonning karra jadvali kerak: ");
    scanf("%d", &a);

    printf("Nechigacha bolgan karrajadvali kerak");
    scanf("%d", &b);

    
    karra(a, b);

    
}
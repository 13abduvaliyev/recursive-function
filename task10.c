#include <stdio.h>

int degree(int n, int m){ // Darajani hisoblash funcksiya

    if(m == 0){
        return 1; // Har qanday sonning 0 chi darajasi 1ga teng
    }
    return  n * degree(n, m - 1); // n * n ning (m-1) darajasi
}

int main(){
    
    int n, m;
    printf("soni kiriting = "); scanf("%d", &n);
    printf("darajasini kiriting = "); scanf("%d", &m);

    printf("%d ^ %d = %d\n", n, m, degree(n, m));

    return 0;
}
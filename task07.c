#include <stdio.h>

int EKUB(int a, int b){ // EKUB topish function
    if(a < b){ 
        if(b % a == 0){  
            return a; // Agar a b ga qoldiqsiz bolinsa demak a EKUB boladi
        }else{
            return EKUB(a, b % a); // Agar b ni a ga bolganda qoldiq 0 bolsa unda a EKUBi boladi
        }
    }else{
        if(a % b == 0){  
            return b; // b a ga qoldiqsiz bolinganda esa b EKUBi boladi
        }else{
            return EKUB(a % b, b); // Agar a ni b ga bolganda qoldiq 0 bolsa unda b EKUBi boladi
        }
    }
}

int EKUK(int a, int b){ // EKUK topish function
    return (a * b) / EKUB(a, b); // EKUKni topish formulasi
}

int main(){
    
    printf("EKUK = %d ", EKUK(6, 8));

    return 0;
}

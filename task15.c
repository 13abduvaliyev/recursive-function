#include <stdio.h>

int func(char s[], int i){ // Sozni teskari qilib beradigan funksiya

    if(s[i] == '\0'){
        return 0;
    }

    func(s, i + 1); // Belgilarni teskari tartibda chiqarish uchun    
    printf("%c", s[i]); // Barcha belgilarni chiqardik
}

int main(){


    char s[] = "Salom";
    
    func(s, 0);

    return 0;
}
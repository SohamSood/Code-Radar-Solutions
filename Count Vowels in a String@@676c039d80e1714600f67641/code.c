#include <stdio.h>
#include <ctype.h>
int check(char a,*int j){
    char vowels[10]={'a','e','i','o','u','A','I','O','U','E'};
    for (int k = 0;k<10;k++) {
        if(a == vowels[k]) {
            j++;
        }
    }
}

int main() {
    char a[100];
    scanf("%s",&a);
    int j = 0;
    for (int i = 0;i<sizeof(a);i++) {
        check(a[i],&j);
    }
    printf("%d",j);
}
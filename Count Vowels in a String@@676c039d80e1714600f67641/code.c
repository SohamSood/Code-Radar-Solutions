#include <stdio.h>
#include <ctype.h>
int main() {
    char a[100];
    scanf("%s",&a);
    int j = 0;
    for (int i = 0;i<sizeof(a);i++) {
        char vowels[10]={'a','e','i','o','u','A','I','O','U','E'};
        for(int j = 0;j<10;j++) {
            if(vowels[j] == a[i]) {
                j++;
            }
        }
    }
    printf("%d",j);
}
#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    scanf("%s",&a);
    int j = 0;
    for (int i = 0;i<strlen(a);i++) {
        char vowels[10]={'a','e','i','o','u','A','I','O','U','E'};
        for(int u = 0;u<10;u++) {
            if(vowels[u] == a[i]) {
                j++;
                }
            }
        }
    printf("%d",j);
}
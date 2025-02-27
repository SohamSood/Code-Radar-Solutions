#include <stdio.h>
#include <ctype.h>
int main() {
    char a[100];
    scanf("%s",&a);
    int j = 0;
    char vowels[10]={'a','e','i','o','u','A','I','O','U','E'};
    for (int i = 0;i<sizeof(a);i++) {
        for(int u = 0;u<10;u++) {
            if(vowels[u] == a[i]) {
                j++;
            }
        }q
    printf("%d",j);
}
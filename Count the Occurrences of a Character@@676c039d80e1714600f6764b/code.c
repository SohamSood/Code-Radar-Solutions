#include <stdio.h>
int main() {
    char a[100];
    char b;
    int k = 0;

    scanf("%s",a);
    scanf("%c",&b);
    for(int e=0;e<100;e++) {
        if(a[e] == b) {
            k++;
        }
    }
    printf("%d",k);
}
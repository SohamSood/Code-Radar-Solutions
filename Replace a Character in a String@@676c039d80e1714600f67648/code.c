#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    scanf("%s",&a);
    int b;
    char c;
    scanf("%d",&b);
    scanf("%c",&c);
    for(int i = 0;i<100;i++) {
        if(i != b) {
            printf("%c",a[i]);
        } else {
            printf("%c",c);
        }
    }
}
#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a &b &c);
    a = a*a;
    b = b*b;
    c = c*c;
    if (a==b+c) {
        printf("Valid");
    } else if (b == a+c) {
        printf("Valid");
    } else if (c == a+b) {
        printf("Valid");
    } else {
        printf("Invalid");
    }
    }
}
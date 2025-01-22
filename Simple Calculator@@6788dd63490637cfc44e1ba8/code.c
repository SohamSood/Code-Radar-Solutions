#include <stdio.h>

int main() {
    float a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if( c == '+') {
        printf("%d",a+b);
    } else if (c == "-") {
        printf("%d",a-b);
    } else if(c == '*') {
        int(c)=(int)a;
        int(d)=(int)b;

        printf("%d",c*d);
    } else {
        int(c)=(int)a;
        int(d)=(int)b;
        printf("%d",c/d);
    }
}
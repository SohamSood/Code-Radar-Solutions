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
        float c = a*b;
        int(d)=(int)c;
        printf("%d",d);
    } else {
        float c = a/b; 
        int d = (int)c;   
        printf("%d",d);
    }
}
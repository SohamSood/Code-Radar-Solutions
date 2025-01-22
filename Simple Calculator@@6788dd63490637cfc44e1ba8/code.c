#include <stdio.h>

int main() {
    float a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if( c == '+') {
        float d = a+b;
        int(e)=(int)d;
        printf("%d",d);
    } else if (c == "-") {
        float d = a-b;
        int(e)=(int)d;
        printf("%d",d);
    } else if(c == '*') {
        float e = a*b;
        int(d)=(int)e;
        printf("%d",d);
    } else {
        float e = a/b; 
        int d = (int)e;   
        printf("%d",d);
    }
}
#include <stdio.h>

int main() {
    float a,b;
    char c;
    int o,j;
    scanf("%d %d %c",&a,&b,&c);
    o=(int)a;
    j =(int)b;
    if( c == '+') {
        printf("%d",o+j);
    } else if (c == "-") {
         printf("%d",o-j);
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
#include <stdio.h>

int main() {
    float a,b;
    int o,j;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    int(o)=(int)a;
    int(j)=(int)b;
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
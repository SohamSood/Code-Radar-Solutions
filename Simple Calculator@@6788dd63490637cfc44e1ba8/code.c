#include <stdio.h>

int main() {
    float a,b;
    char c;
    int o,j;
    scanf("%d %d %c",&a,&b,&c);
    if( c == '+') {
        float u = a+b;
        printf("%f",u);
    } else if (c == '-') {
        int u = a-b;
         printf("%d",u);
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
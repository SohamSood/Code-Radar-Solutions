#include <stdio.h>

int main() {
    float a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if( c == '+') {
        int u = a+b
        printf("%d",u);
    } else if (c == '-') {
        int u =(int)a-b;
        printf("%d",u);
    } else if(c == '*') {
        float e = a*b;
        int(d)=(int)e;
        printf("%d",d);
    } else if(c == '/'){
        float e = a/b; 
        int d = (int)e;   
        printf("%d",d);
    }
}
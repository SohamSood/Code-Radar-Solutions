#include <stdio.h>

int main() {
    float a,b;
    char c;
    scanf("%f %f %c",&a,&b,&c);
    if( c == '+') {
        int u = a+b;
        printf("%d",u);
    } else if (c == '-') {
        int u =a-b;
        printf("%d",u);
    } else if(c == '*') {
        int e = a*b;

        printf("%d",e);
    } else if(c == '/'){
        if (b == 0){
            printf("error");
        } else {
            float e = a/b; 
            int d = (int)e;   
            printf("%d",d);
        }
    }
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int *myarr = malloc(a * (sizeof(int)));
    for (int u= 0;u <a;u++ ){
        scanf("%d",&myarr[u]);
    }
    if(a>b) {
        int c = a;
    } else {
        int c = b;
    }

    for (int i = 0;i<c;i++) {
        if(a!=b) {
            if((a == myarr[i]) || (b == myarr[i])){
                e = e+1;
            }      
        }
    }
}
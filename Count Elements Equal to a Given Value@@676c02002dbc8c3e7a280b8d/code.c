#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int *myarr = malloc(a * (sizeof(int)));
    for (int u= 0;u <a;u++ ){
        scanf("%d",&myarr[u]);
    }
    int s = 0;
    for(int i = 0;i<a;i++) {
        if(myarr[i] == b) {
                s = s+1;
        }
    }
    printf("%d",s);
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d %d",&a,&b);
    int *myarr = malloc(a*(sizeof(int)));
    for(int p = 0;p<a;p++) {
        scanf("%d",&myarr[p]);
    }
    int count = 0;
    for(int i = 0;i<a;i++) {
        if(myarr[i]>b) {
            count++;
        }
    }
    printf("%d",count);
}
#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    for(int p = 0;p<a;p++) {
        scanf("%d",&myarr[p]);
    }
    for(int i = 0;i<a-1;i++) {
        if(myarr[i]>myarr[i+1]) {
            printf("%d ",myarr[i]);
        }
    }
}
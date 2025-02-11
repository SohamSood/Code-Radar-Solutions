#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    for(int p = 0;p<a;p++) {
        scanf("%d",&myarr[p]);
    }
    int e = 0;
    for(int i = 0;i<a;i++) {
        if(myarr[i] != 0) {
            printf("%d ",myarr[i]);
            e++;
        }
    }
    for(int j = e;j<p;j++) {
        printf(" 0");
    }

}
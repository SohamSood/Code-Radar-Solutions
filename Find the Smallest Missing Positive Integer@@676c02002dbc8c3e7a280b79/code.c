#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*4);
    for(int p = 0;p<a;p++) {
        scanf("%d",&myarr[p]);
    }
    int min=myarr[0];
    for(int i =0;i<a;i++) {
        if(min<myarr[i]) {
            min = myarr[i];
        }
    }
    printf("%d",min);
}
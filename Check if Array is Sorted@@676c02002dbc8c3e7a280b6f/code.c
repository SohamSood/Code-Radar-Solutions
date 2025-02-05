#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a * (sizeof(int)));
    for(int i = 0;i<a;i++) {
        if(myarr[i]>myarr[i+1]) {
            printf("%d",myarr[1]);
        }
    }
}
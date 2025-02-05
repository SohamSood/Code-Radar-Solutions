#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    int e = 0;
    scanf("%d",&a);
    int *myarr = malloc(a * (sizeof(int)));
    for(int i = 0;i<a;i++) {
        if(myarr[i]>myarr[i+1]) {
            e = e+1;
        }
    }
}
#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    int e = 0;
    int f = 0;
    scanf("%d",&a);
    int *myarr = malloc(a * (sizeof(int)));
    for(int i = 0;i<a-1;i++) {
        if(myarr[i] <= myarr[i+1]) {
            f++;
        } 
    }
    if(f == 0) {
        printf("Sorted");

    } else {
        printf("Not Sorted");
    }
}
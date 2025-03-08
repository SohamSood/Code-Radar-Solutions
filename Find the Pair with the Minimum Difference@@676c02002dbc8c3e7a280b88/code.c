#include <stdio.h>
#include <limits.h>

#include <stdlib.h>


int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a *(sizeof(int)));
    for (int l = 0;l<a;l++) {
        scanf("%d",&myarr[l]);
    }
    for(int i = 0;i<a;i++) {
        for(int j =0;j<a;j++) {
            if(myarr[i]<myarr[j]) {
                int temp = myarr[i];
                myarr[i] = myarr[j];
                myarr[j] = temp;
            }
        }
    }
    for(int i =0;i<a;i++) {
        printf("%d ",myarr[i]);
    }
}

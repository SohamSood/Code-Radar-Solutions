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
    int max = INT_MAX;
    int index1 = 0;
    int index2 = 0;
    for(int i = 0;i<a;i++) {
        for(int j = 0;j<a;j++) {
            if((abs(myarr[i]-myarr[j])<max) && i!=j) {
                max = (myarr[i]-myarr[j]);
                index1 = myarr[i];
                index2 = myarr[j];
            }
        }
    }
    if (a==1) {
        printf("-1");
    } else {
    printf("%d %d",index1,index2);

    }
}

#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    int *myarr2 = malloc(a*(sizeof(int)));
    for(int p =0;p<;p++) {
        scanf("%d",&myarr[p]);
    }
    
    for(int i = 0;i<a;i++) {
        int count = 0;
        for(int j = 0;j<a;j++) {
            if(myarr[i] == myarr[j]) {
                count++;
            }
        }
        myarr2[i] = count;
    }
    for(int j = 0;j<a;j++) {
        printf("%d ",myarr2[i]);
    }
}
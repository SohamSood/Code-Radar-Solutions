#include <stdio.h>
#include <stdlib.h>

int main()  {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*4);
    for(int i =0;i<a;i++) {
        for(int j = 0;j<a;j++) {
            if(myarr[i]>myarr[j]) {
                int temp = myarr[i];
                myarr[i] = myarr[j];
                myarr[j] = temp;
            }
        }
    }
    for(int i =0;i<a;i++ ) {
        printf("%d ",myarr[i]);
    }
}
#include <stdio.h>
#include <stdlib.h>

int rotate (int *myarr,int a) {
    // 
    printf("hithere \n");
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*4);
    for(int i = 0;i<a;i++) {
        scanf("%d",&myarr[i]);
    }
    int c;
    scanf("%d",&c);
    for(int j = 0;j<c;j++) {
        rotate(myarr,a);
    }
    for(int i =0;i<a;i++) {
        printf("%d ",myarr[i]);
    }
}
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
    int f = 0;
    int g = 0;
    int h = 0;
    for(int i = 0;i<a;i++) {
        if(myarr[i]>=myarr[j]) {
            e++;
        } else {
            f++;
        }
    }
    for (int j = 0;j<a;j++) {
        if(myarr[i]<=myarr[j]) {
            g++;
        } else {
            h++;
        }
    }
    if(e!=0 && f == 0){
        printf("YES");
    }
}
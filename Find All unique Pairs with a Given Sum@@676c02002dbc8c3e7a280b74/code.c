#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    for(int p=0;p<a;p++) {
        scanf("%d",&myarr[p]);
    }
    scanf("%d",&b);
    int e = 0;
    for(int i = 0;i<a;i++) {
        for(int j = i+1;j<a;j++) {
            if(myarr[i] +myarr [j] == b){
                if(myarr[i]!= myarr[j]) {
                printf("%d %d",myarr[i],myarr[j]);
                printf("\n");
                } else if(e == 0) {
                    printf("%d %d",myarr[i],myarr[j]);
                    printf("\n");
                    e++;
                }
            } 
        }
    }
    
}
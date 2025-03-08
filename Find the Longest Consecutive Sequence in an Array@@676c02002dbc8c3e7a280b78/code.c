// Your code here...
#include stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*4);
    for(int p =0;p<a;p++) {
        scanf("%d",&myarr[p]);
    }
    int streak = 0;
    for(int i = 0;i<a-1;i++) {
        int count = 0;
        if(a[i]>a[i+1]) {
            count++;
        } 
        if(count>streak) {
            streak = count;
        }
    }
    printf("%d",count);
}
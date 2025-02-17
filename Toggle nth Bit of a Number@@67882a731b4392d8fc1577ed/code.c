// Your code here...// Your code here...
#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int k = (1<<b);
    printf("%d",a^k);

}
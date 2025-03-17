// Your code here...
#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    printf("%d",__builtin_clz(a));
}
// Your code here...
#include <stdio.h>
#include <stdlib.h>
struct student {
    int a;
    char name[100];
    float b;
}
int main() {
    int c;
    scanf("%d",&c);
    struct student *students = (struct student *)malloc(c* sizeof(student));
}
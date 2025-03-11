// Your code here...
#include <stdio.h>
#include <stdlib.h>
struct student {
    int rollno;
    char name[100];
    float marks;
}
int main() {
    int a;
    scanf("%d",&a);
    struct student *students = (struct student*)malloc(a*sizeof(struct student));
}
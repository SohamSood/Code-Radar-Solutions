// Your code here...
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student {
    int rollno;
    char name[100];
    float marks;
};
int main() {
    int a;
    scanf("%d",&a);
    struct student *students = (struct student*)malloc(a*sizeof(struct student));
    for(int i = 0;i<a;i++) {
        scanf("%d %s %f",&students[i].rollno,students[i].name,&students[i].marks);
    }
    for(int i =0;i<a;i++) {
        char grade = "A";
        printf("Roll No: %d, Name: %s, Grade: %c",students[i].rollno,students[i].name,grade);
    }
}
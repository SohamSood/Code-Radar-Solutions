// Your code here...
// Your code here...
#include <stdio.h>
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
    for(int i = 0;i<a;i++) {
        for(int j = 0;j<a;j++) {
            if(students[i].marks > students[j]marks) {
                int swapp = students[i].rollno;
                char swappn[100] = student[i].name;
                float swappp = student[i].marks;
                students[i].rollno = students[j].rollno;
                students[i].name = students[i].name;
                students[i].marks = students[i].marks;
                students[j].rollno = swapp;
                students[j].name = swapp;
                students[i].marks = swappp;
            }
        }
    }
    for(int i = 0;i<a;i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f",students[i],rollno,students[i].name,students[i].marks);
    }   
}
/*
1 - Write a C Program to store the n number of student information to structure

Input
Read a n value and 'n' number  of student information of students
Output
Store all the student information in the structure and print it.

Sample execution
Test case 1
Sample input
Enter the number of students : 1
Please enter the 1 student information :
Enter the name : indexack
Enter the roll no : 23
Enter the mark : 34.5

Sample output
Displaying information 
Student 1 information is :
Name : indexack
Roll number : 23
Marks : 34.5

Test case 2
Sample input
Enter the number of students : 2
Please enter the 1 student information :
Enter the name : Steve
Enter the roll no : 01
Enter the mark : 45.5
Please enter the 2 student information :
Enter the name : Billy
Enter the roll no : 03
Enter the mark : 40.5

Sample output
Displaying information
Student 1 information is :
Name : Steve
Roll number : 01
Marks : 45.5
Student 2 information is :
Name : Billy
Roll number : 03
Marks : 40.5
*/
struct Student{
char name[50];
int roll_no;
float mark;
};

#include<stdio.h>
int main(void)
{
int num, index = 1;
printf("Enter the number of students : \n");
scanf("%d",&num);
struct Student s1[num];
for (int i = 0; i < num; i++)
{
printf("Please enter the %d student information :\n",index);
printf("Enter the name : \n");
scanf("%s",s1[i].name);
printf("Enter the roll no : \n");
scanf("%d",&s1[i].roll_no);
printf("Enter the mark : \n");
scanf("%f",&s1[i].mark);
index++;
}
index = 1;
printf("\nDisplaying information :\n\n");
for (int i = 0; i < num; i++)
{
printf("Student %d information is : \n",index);
printf("Name : %s\n",s1[i].name);
printf("Roll number : %d\n",s1[i].roll_no);
printf("Mark : %f\n",s1[i].mark);
printf("\n");
index++;
}
    return 0;
}
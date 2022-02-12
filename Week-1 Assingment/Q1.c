#include<stdio.h>
void main() {
    char name[50],branch[50],hobbies[50];
    int regd;
   
    printf("Enter your name : ");
    gets(name);
    
    printf("\n Enter your branch : ");
    gets(branch);
    
    printf("\n Enter you hobbies : ");
    gets(hobbies);

    printf("\n Enter your Regd. no : ");
    scanf("%d",&regd);
    
    printf("Details \n Name : %s \n Branch : %s \n Regd. No. : %d \n Hobbies : %s ",name,branch,regd,hobbies);
}
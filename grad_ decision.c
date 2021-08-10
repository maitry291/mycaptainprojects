 /*"program to find out grade of a student" */

#include <stdio.h>
int main()
{
  int marks;
  printf("enter marks of a student:\n");
  scanf("%d",&marks);

  if(marks>=85)
  {
   printf("student's grade is A");
  }
  else
  {
    if(marks>=70)
    {
    printf("student's grade is B");
    }
    else
    {
        if(marks>=55)
     {
      printf("student's grade is C");
     }
     else
     {
         if(marksr>=40)
     {
      printf("student's grade is D");
     }
     else
     {
         printf("student's grade is F");
     }
    }
  }
 }
}

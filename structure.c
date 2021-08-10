#include <stdio.h>

struct employee
{
    char s[100];
    double empno;
    char a[100];
    float salary;
    
}e1,e2,e3,e4,e5,e6,e7,e8,e9,e10,e11,e12,e13,e14,e15,e16,e17,e18,e19,e20;

int main()
{
   struct employee e1={"rohit",9876348329,"software",50000},e2={"shubham",8746354632,"IT",45000},e3={"parth",7725462637,"CSE",70000},
                  e4={"kian",9864584768,"mechanics",25000},e5={"daksh",9875877029,"software",54000},e6={"ishan",8375635675,"IT",42000},
                  e7={"simar",7753467458,"CSE",75000},e8={"laksh",9294756464,"mechanics",22000},e9={"aryan",9875687657,"software",48000},
                  e10={"ivan",6793475757,"IT",36000},e11={"yash",7776547646,"CSE",72000},e12={"nehal",9487863464,"mechanics",28000},
                  e13={"neel",9378656629,"software",56000},e14={"sasank",8287465552,"IT",47000},e15={"zian",7748574637,"CSE",78000},
                  e16={"riansh",9062846555,"mechanics",32000},e17={"satyam",9274387677,"software",44000},
                  e18={"mukilan",8934743562,"IT",45000},e19={"roshan",7083465665,"CSE",60000},e20={"ayush",9734845688,"mechanics",37000};
    
    
    printf("employee's details:\n\n");
    
    printf("name\t phone number\t department name\t salary \n\n\n");
    
    
    printf("%s\t %10.0lf\t %s\t\t %.2f\n",e1.s,e1.empno,e1.a,e1.salary);
    printf("%s\t %10.0lf\t %s\t\t\t %.2f\n",e2.s,e2.empno,e2.a,e2.salary);
    printf("%s\t %10.0lf\t %s\t\t\t %.2f\n",e3.s,e3.empno,e3.a,e3.salary);
    printf("%s\t %10.0lf\t %s\t\t %.2f\n",e4.s,e4.empno,e4.a,e4.salary);    
    printf("%s\t %10.0lf\t %s\t\t %.2f\n",e5.s,e5.empno,e5.a,e5.salary);    
    printf("%s\t %10.0lf\t %s\t\t\t %.2f\n",e6.s,e6.empno,e6.a,e6.salary);
        
    printf("%s\t %10.0lf\t %s\t\t\t %.2f\n",e7.s,e7.empno,e7.a,e7.salary);
    printf("%s\t %10.0lf\t %s\t\t %.2f\n",e8.s,e8.empno,e8.a,e8.salary);
    printf("%s\t %10.0lf\t %s\t\t %.2f\n",e9.s,e9.empno,e9.a,e9.salary);
    printf("%s\t %10.0lf\t %s\t\t\t %.2f\n",e10.s,e10.empno,e10.a,e10.salary);    
    printf("%s\t %10.0lf\t %s\t\t\t %.2f\n",e11.s,e11.empno,e11.a,e11.salary);    
    printf("%s\t %10.0lf\t %s\t\t %.2f\n",e12.s,e12.empno,e12.a,e12.salary);
        
    printf("%s\t %10.0lf\t %s\t\t %.2f\n",e13.s,e13.empno,e13.a,e13.salary);
    printf("%s\t %10.0lf\t %s\t\t\t %.2f\n",e14.s,e14.empno,e14.a,e14.salary);
    printf("%s\t %10.0lf\t %s\t\t\t %.2f\n",e15.s,e15.empno,e15.a,e15.salary);
    printf("%s\t %10.0lf\t %s\t\t %.2f\n",e16.s,e16.empno,e16.a,e16.salary);    
    printf("%s\t %10.0lf\t %s\t\t %.2f\n",e17.s,e17.empno,e17.a,e17.salary);    
    printf("%s\t %10.0lf\t %s\t\t\t %.2f\n",e18.s,e18.empno,e18.a,e18.salary);
        
    printf("%s\t %10.0lf\t %s\t\t\t %.2f\n",e19.s,e19.empno,e19.a,e19.salary);
    printf("%s\t %10.0lf\t %s\t\t %.2f\n",e20.s,e20.empno,e20.a,e20.salary);
    
    return 0;
}

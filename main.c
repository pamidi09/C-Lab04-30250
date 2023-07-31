#include <stdio.h>
#include <stdlib.h>

int main()
{



// 04
    float r,d,c,a;

    printf("enter radius value of a circle:\n");
    scanf("%f",&r);

    printf("Diameter is %.2f \n",r*2.0);
    printf("Circumference is %.2f \n",r*2.0*3.14159);
    printf("area is %.2f \n",r*r*3.14159);



    // 03

    char name[50];
    float bs,inc,ns;

    printf("Enter employee name:\n");
    scanf("%s",&name);

    printf("Enter basic salary:\n");
    scanf("%f",&bs);

    if(5000>bs)
        inc=bs*0.05;
    else if(bs>5000&&10000>=bs)
        inc=bs*0.1;
    else
        inc=bs*0.15;

    ns=bs+inc;

    printf("Employee name is %s\n",name);
    printf("New salary is %f\n",ns);




    // 02
    int num_1,num_2,num_3,max=0,min=100;

    printf("Enter first value:\n");
    scanf("%d",&num_1);

    printf("Enter second value:\n");
    scanf("%d",&num_2);

    printf("Enter third value:\n");
    scanf("%d",&num_3);

    if(num_1>num_2)
    {
        if(num_1>num_3)
            max=num_1;
        else
            max=num_3;
    }

   else if(num_2>num_3)
    max=num_2;
   else
    max=num_3;


   if(num_1<num_2)
   {
       if(num_1<num_3)
        min=num_1;
       else
        min=num_3;

   }
   else if(num_2<num_3)
    min= num_1;
   else
    min=num_3;

   printf("The highest value is %d\n",max);
   printf("The smallest value is %d\n",min);



    // 01
    int num_1,num_2,max;

    printf("Enter first number:\n");
    scanf("%d",&num_1);

    printf("Enter second number:\n");
    scanf("%d",&num_2);



    if(num_1<num_2)
        max=num_2;
    else
        max=num_1;

    printf("The highest value is %d",max);




    return 0;
}

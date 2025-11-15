//*program to read all data types by reading values from the user*//
#include <stdio.h>
main()
{
     int a;
     float b;
     double c;
     char d;
     printf("enter a\n");
     scanf("%d",&a);
     printf("enter b\n");
     scanf("%f",&b);
     printf("enter c\n");
     scanf("%lf",&c);
     printf("enter d\n");
     scanf("%c",&d);
     printf("%d\n",a);
     printf("%.2f\n",b);
     printf("%10lf\n",c);
     printf("%c\n",d);
}

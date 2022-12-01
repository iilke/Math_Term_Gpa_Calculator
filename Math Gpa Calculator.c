//Ilke D. 01/12/2022
//first midterm grade weight: 30%
//second midterm grade weight: 30%
//final grade weight: 40%


#include <stdio.h>
float average(float mid1, float mid2,float fin)
{
  float m1=(mid1*30)/100;
  float m2=(mid2*30)/100;
  float f=(fin*40)/100;
  float avg=(m1+m2+f);
  return avg;
}


int main()
{
float m1=0, m2=0,f=0, a=0;
int con=0;


do
{

printf("\nEnter your midterm grade: ");
scanf("%f",&m1);

printf("\nEnter your second midterm grade: ");
scanf("%f",&m2);

printf("\nEnter your final grade:");
scanf("%f",&f);

a=average(m1,m2,f);
printf("\nAverage is %.2f\n",a);

printf("\nDo you want to continue? (press 1 for yes, press 0 for no)");
scanf("%d",&con);

}
while(con!=0 && con==1);

printf("\nExiting this calculator.....\n");
return 0;
}
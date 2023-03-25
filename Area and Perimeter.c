//Program to find out the area and perimeter of user desired shape 
#include<stdio.h>
#define pi 3.14
int main()
{
 int ip,s,l,b,base,h,s1,s2,r;
 float ar,S,per,cir;
  printf("\n1.Square \t2.Rectangle \n3.Triangle \t4.Circle");
  printf("\nSelect the 2-D shape:"); /*This will take the input from the user to know for what shape the area and perimeter need to be calculated*/
  scanf("%d",&ip);
  if(ip==1)/*User input is Square*/
  {
    printf("\n Side length: ");
    scanf("%d",&s);
    ar=s*s;
    per=4*s;
    printf("\n Area of the Square =%.0f",ar);
    printf("\n Perimeter of the Square =%.0f",per);
  }
  else if(ip==2)/*User input is Rectangle*/
  {
    printf("\n Length of the Rectangle:");
    scanf("%d",&l);
    printf("\n Bredth of the Rectangle:");
    scanf("%d",&b);
    ar=l*b;
    per=2*(l+b);
    printf("\n Area of the Rectangle =%.0f",ar);
    printf("\n Perimeter of the Rectangle=%.0f",per);
    
  }
  else if(ip==3)/*User input is Triangle*/
  {
    printf("\n Base Length of the Triangle:");
    scanf("%d",&base);
    printf("\n Length of one side:");
    scanf("%d",&s1);
    printf("\n Length of one side:");
    scanf("%d",&s2);
    per= base+s1+s2;
    S= per/2;
    ar= sqrt(S*(S-s1)*(S-s2)*(S-base)); /*To calculate the area of the Triangle*/
    h= (2*ar)/base;
    printf("\n Area of the Triangle =%.2f",ar);
    printf("\n Perimeter of the Triangle =%.2f",per);
    if(s1==s2&& s2==base)/*To find the Type of Triangle*/
    {
      printf("\n > Given Triangle is Equivalent Triangle");
    }
    else if(s1==s2||s2==base||s1==base)
    {
      printf("\n > Given Triangle is Isoceles Triangle");
    }
    else
    {
      printf("\n > Given Triangle is Scalene Triangle");
    }
    if(s1*s1==(s2*s2)+(base*base)||s2*s2==(s1*s1)+(base*base)||base*base==(s1*s1)+(s2*s2))
    {
      printf("\n > Given Triangle is Right Angled Triangle");
    }
    
  }
  else if(ip==4)/*User input is Circle*/
  {
    printf("\n Radius of the Circle:");
    scanf("%d",&r);
    ar=pi*r*r;
    cir=2*pi*r;
    printf("\n Area of the Circle =%f",ar);
    printf("\n Circumference of the Circle =%f",cir);
  }
  
  
}
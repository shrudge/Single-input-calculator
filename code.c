// created by shrudge

#include <stdio.h>
int main()
{

  double n1, n2, ans;
  char c;
  printf("Enter equation: " ); 
  scanf("%lf %c %lf", &n1, &c, &n2); 
  switch(c)
    {
        case '+':
           ans = n1+n2;
            break;

        case '-':
            ans = n1-n2; 
            break;

        case '*':
            ans = n1*n2;
            break;
            
        case '/':
            ans = n1/n2;
            break;
            
       case '&':
            ans = (int)n1 & (int)n2; // type conversion
           break;
           
       default:
            printf("invalid");
    }
  printf("%.2lf", ans); // output can be modified upto maximum digits after the decimal

  return 0;
}
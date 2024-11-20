#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    /* Initialising variables*/
    float a, b;
    int N;
    a = 0, b = 60,N = 12; /* Initial value is zero and the end value is b = PI/3 = 180/3 = 60 */
    float B_radians =(b*M_PI)/180;
    float sum = 0, res = 0 ;
    
    /* Calculating the values of tan(0)+tan(PI/3)*/
    sum = tan(a)+tan(B_radians);
    
    /*Looping on equal intervals between 0 and PI/3*/
 printf(" before loop integral off(x) =tan(x)from 0→π/3: %f\n",sum);
    int i;
    for(i = 5; i < b; i = i+5)
    {
        
        sum += 2 * tan(i * M_PI /180);
        printf(" angles %f %d\n",sum,i);
    }

    res = ((B_radians - a)/(2*N))*(sum);
    printf(" integral off(x) =tan(x)from 0→π/3: %f\n",res);
    printf("Actual value is: %f\n",logf(2));
    
    /*Calculating the absolute difference*/
    float abs_diff = fabs(res - log(2));
    float rel_diff = fabs(1 - (res/log(2)));
    printf("absoloute difference = %f\n relative difference = %f\n", abs_diff,rel_diff);
    return 0;
    
}
#include<stdio.h>
#include<math.h>
//Defining N as constant so as to use it in defining and declaring the array
#define N 12

//Declaring and defining the array
float tan_ary[N+1];

//Declaring the traprule and degtorad functions
float trap();
float deg_to_rad(float degree);

//Implementing the main function
int main(void) {

	float tan_area;
	int i;
	//Assigning tan(x) values to tan_array and printing it.
	for(i=0; i<=N; i++){
		tan_ary[i] = tan(deg_to_rad(i*5));
		printf("tan_array[%d] = %f\n",i,tan_ary[i]);
	}
	
	//Calling the traprule function to calculate the area using trapezoidal rule which is approxiamated value 
	tan_area = trap();
	float abs_diff = fabs(tan_area - log(2));
	printf("The trapezoidal result is %f\n",tan_area);
	//Actual result
	//Integral of tan() is ln(2)
	printf("The actual value is %f\n",logf(2));
	printf("absoloute difference = %f\n", abs_diff);

	return(0);
}

//Implementing the degtorad function
float deg_to_rad(float deg){

	float rad;
	rad = M_PI * deg /(float) 180 ;

	return rad;
}

//Implementing the traprule function
float trap(){

	int i;
	float a,b,sum;

	sum = 0.0;
	a = 0;
    b = M_PI * 60 / (float) 180;

	sum += tan_ary[0]+tan_ary[N];
	for (i=1; i<12; i+=1) {
                sum += 2*tan_ary[i];
        }

	sum *= (b-a)/(2*(float)N);

	return sum;
}
		

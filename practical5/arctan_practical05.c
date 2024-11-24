	
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Declaring fuctions
double artan_01(double x1, double delta1);
double artan_02(double x2, double delta2);


int main(void) 
{
	//Declaring and defining variables
	double delta,x;
	int i;
	double tan01[200], tan02[200];
	//Taking delta as input
	printf("Enter the delta value: ");
	scanf("%lf",&delta);
	x = -0.9;
	//Calculating desired values and assigning to arrays
	for(i=0;i<181;i++){

		tan01[i] = artan_01(x,delta);
		tan02[i] = artan_02(x,delta);
		x = x+0.01;
	}

	x = -0.9;
	//Printing the values
	for(i=0;i<181;i++){
		printf("\nRelative Difference of tan1 and tan2 at %.2lf is: %.10lf\n",x,fabs(tan01[i]-tan02[i])/tan02[i]);
		x  += 0.01;

	}

	return 0;
}

//Defining the artanh1 function
double artan_01(double x1, double delta1){
	
	double val,sum=0;
	int i=0;
        do{
	
		val=pow(x1,2*i+1)/(2*i+1);
		sum += val;
		i++;
	}while (fabs(val) >= delta1);
	return sum;
}

//Defining the artanh1 function
double artan_02(double x2, double delta2){

        double a;
	a =(log(1+x2)-log(1-x2))/2;
	return a;
}



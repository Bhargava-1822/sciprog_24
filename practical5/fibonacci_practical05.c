#include <stdio.h>
#include <math.h>

// Declaring the function with pointers as parameters
void fibnci(int *a, int *b);

int main(void){

	//Declaring the variables
	int N, i; 
    int a, b;
	
	printf("Enter n value : ");
	//Taking input
	scanf("%d", &N);
	//Verifying n value is greater than or equal to 1
	if(N<1){
		printf("Enter a value less than 1");
		return 0;
	}
	a = 0;
	b = 1;
	//Calculating and printing  fibonacci series
	printf("fibonacci series: ");
	for(i=0;i<N;i++){
		printf("%d ",a);
		fibnci(&a,&b);
	}

	return 0;
}

//Defining the function
void fibnci(int *a,int *b){
	
	long int temp;
	temp = *b;
	*b = *b+*a;
	*a = temp;

	/*return*/;
}


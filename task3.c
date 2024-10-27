#include <stdio.h>

	int main (){
	int city , i, pop, max,min;
	float sum=0;	
	printf("Enter the number of cities: ");
	scanf("%d",&city);

	for (i=1;i<=city;i++){

	printf("Enter the population of city %d: ",i);
	scanf(" %d",&pop);

	sum = pop + sum;

	if ( i == 1 )
    	{

        max = pop;
        min = pop;
    	}
    	else if ( max < pop )
    	{
    	    max = pop;
    	}
    	else if ( pop < min )
    	{
            min = pop;
    	}

	}
	float mean = sum /4;
	printf("Mean population: %.2f\n",mean);
	printf("Maximum population:%d\n",max);
	printf("Minimum population:%d\n",min);

	return 0;
}







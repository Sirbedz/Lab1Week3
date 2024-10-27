#include <stdio.h>

int main() {
    int N;

  
    printf("Enter a positive integer N: ");
    scanf("%d", &N);

  
    printf("Numbers from %d to 0 in descending order:\n", N);
    for (int i = N; i >= 0; i--) 
    
    {
        printf("%d ", i);
    }
    printf("\n");
    // Parrt 2
  
    printf("Numbers from 1 to %d following pattern B:\n", N);
    for (int i = 1; i <= N; i++)
   
    {
        if (i%10==4 || i%10 ==7)
           continue;
	       	printf("%d ", i);
       
    }
    printf("\n");

   
    float inc;
    printf("Enter an increment value less than 1: ");
    scanf("%f", &inc);
    
    if (inc >= 1) {
        printf("Error: Increment must be less than 1 \n");
    } else 
   	 {
       	    printf("Numbers from 0 to %d with an increment of %.2f:\n", N, inc);
        for (float i = 0; i <= N; i += inc)
	{
            printf("%.2f ", i);
        }
        printf("\n");
    }

    return 0;
}

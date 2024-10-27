#include <stdio.h>

int main(){
	int N,a=0,e=0,ii=0,o=0,u=0,l=0;
	char character;
	printf("Enter the number of characters N ");
	scanf(" %d",&N);
	
	for(int i = 0; i<N;i++){
	printf("Enter the character %d:",i);
	scanf(" %c",&character);

	if(character == 'A' || character == 'a'){
	a++;
	}
	else if(character == 'E' || character == 'e'){
	e++;
	}
	else if(character == 'I' || character == 'i'){
	ii++;
	}
	else if(character == 'O' || character == 'o'){
	o++;
	}
	else if(character == 'U' || character == 'u'){
	u++;
	}
	
	else{
	l++;
	}
	}
	printf("Frequency of a = %d\n Frequency of e = %d\n Frequency of i = %d\n Frequency of o = %d\n Frequency of u = %d\n Frequency of others = %d\n",a,e,ii,o,u,l);	
	return 0;
}

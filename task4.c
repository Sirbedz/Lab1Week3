#include <stdio.h>

	int main(){
	int x,y;
	char direction;
	
	
	printf("Enter initial position: ");
	scanf("%d %d",&x,&y);
	
	printf("which the player will move: ");
	scanf(" %c",&direction);
	
	while(x<4 && x>1 && y<4 && y>1){
	
	if(direction == 'R'){
	x++;
	}

	else if(direction == 'D')
	{
	y++;
	}

	else if(direction == 'U')
	{
	y--;
	}

	else if(direction == 'L')
	{
	x--;
	}


	else 
	printf("Invild direction");
	}
	printf("The player has reached the boundary at (%d,%d)\n",x,y);
	return 0;

}

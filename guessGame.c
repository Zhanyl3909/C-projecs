#include<stdio.h>

int main(){
	int a = 6;
	int i;
	int b;
	//Greeting
	printf("     ===Welcome to the <GUESS> game===     \n");
	printf("     ===Hope YOU would have a fun===     \n\n\n\n");
	
	for(i=3; i>=0; i--){
		if(i==0) {
			printf("Game Over!\n"); 
			break;
		}
		printf("Inter number to guess: ");
		scanf("%d", &b);
		if(a==b){
		printf("\n\n   ====BINGO====\n\n");
		break;
	}
		else{
				printf("You have %d chances to guess\n",i-1);
		}
	
		
	}
	
	return 0;
}

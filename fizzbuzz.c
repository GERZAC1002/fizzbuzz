#include <stdio.h>

int main(){
	for(int i=1;i<=100;i++){
		if(!(i%3) || !(i%5)){
			if(!(i%3)){
				printf("Fizz");
			}
			if(!(i%5)){
				printf("Buzz");
			}
			printf("\n");
		}else{
			printf("%i\n",i);
		}
	}
	return 0;
}


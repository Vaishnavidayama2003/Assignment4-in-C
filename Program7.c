
#include <stdio.h>
void main(){
	int num;
	int count=0;
	printf("Enter number : ");
	scanf("%d",&num);

	for(int i=2;i<=10;i++){
		if(num%i == 0)
			count++;		
	}

	printf("Divisors of %d between 2 and 10 = %d\n",num,count);
}

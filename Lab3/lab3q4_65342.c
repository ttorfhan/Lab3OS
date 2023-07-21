#include <stdio.h>
int main(){
	int a,sum;
	int count = 0;
	float avg;
	while(a>0){
	printf("enter a number : ");
	scanf("%d",&a);
	if(a<=0){
	 break;
	}
	count++;
	sum = sum+a;
	avg = (float)sum/count;
	}
	printf("summation = %d\n",sum);
	printf("average = %.2f\n",avg);
	return 0;
}

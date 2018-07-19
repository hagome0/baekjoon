#include <stdio.h>

//1110

int main() {
	int n;
	int put;
	int ten, one;
	int temp;
	int cnt=0;
	
	scanf("%d", &n);
	
	put = n;

	while(1){
		cnt++;
		ten = n / 10;
		one = n % 10;
				
		n = ten + one;
			
		n = one*10 + n%10;
		if(n == put)
			break;
		//printf("temp : %d, ten : %d, one : %d\n", n, ten, one);



	}	
	
	printf("%d", cnt);
	
	return 0;
}

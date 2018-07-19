#include <stdio.h>


//10817
int main() {
	int a[3];
	
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	
	if(a[0] > a[1]){
		int temp = a[0];
		a[0] = a[1];
		a[1] =temp;
	}

	if(a[1] > a[2]){
		int temp = a[1];
		a[1] = a[2];
		a[2] =temp;
	}

	if(a[0] > a[1]){
		int temp = a[0];
		a[0] = a[1];
		a[1] =temp;
	}

	printf("%d", a[1]);
	return 0;
}

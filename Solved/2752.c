#include <stdio.h>

//2752
int main() {
	int a[3];
	int temp;
		
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	
	if(a[0] > a[1]) {
		temp = a[0];
		a[0] = a[1];
		a[1] = temp;
	}
	
	if(a[1] > a[2]) {
		temp = a[2];
		a[2] = a[1];
		a[1] = temp;
	}

	if(a[0] > a[1]) {
		temp = a[0];
		a[0] = a[1];
		a[1] = temp;
	}
		
	printf("%d %d %d", a[0], a[1], a[2]);	
	
	return 0;
}

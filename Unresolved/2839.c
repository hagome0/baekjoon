#include <stdio.h>

//2839
int main() {
	int n;
	int cnt = 0;
	
	scanf("%d", &n);
	
	
	while(n>=5){
		n = n-5;
		cnt++;
	}
	while(n>=3){
		n = n-3;
		cnt++;
	}
	
	if(n!=0){
		cnt = -1;
	}
	
	printf("%d", cnt);
	
	return 0;
}

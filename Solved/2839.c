#include <stdio.h>

//2839
int main() {
	int n;
	int cnt = 0;
	
	scanf("%d", &n);
	
	if(n==1 || n==2 || n==4 || n==7)
		cnt = -1;
		
	else {
		cnt = n/5;
		switch(n%5) {
			case 0 : {
				break;
			}
			case 1 : {
				cnt++;
				break;
			}
			case 2 : {
				cnt = cnt + 2;
				break;
			}
			case 3 : {
				cnt++;
				break;
			}
			case 4 : {
				cnt = cnt + 2;
				break;
			}			
				
		}	
	}

	
	printf("%d", cnt);
	
	return 0;
}

#include <stdio.h>

//2490
int main(){
  int a[4];
  char result[5] = {'D','C','B','A','E'};
  int sum = 0;
  
  scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
  sum = a[0] + a[1] + a[2] + a[3];

  printf("%c\n", result[sum]);
  
  scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
  sum = a[0] + a[1] + a[2] + a[3];

  printf("%c\n", result[sum]);
  
  scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
  sum = a[0] + a[1] + a[2] + a[3];

  printf("%c\n", result[sum]);

	return 0;
}


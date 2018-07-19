#include <stdio.h>

//1152
int main(){
  char s[1000001];
  int index = 0;
  int cnt = 0;
  char pch;
  
  scanf("%[^\n]", s);
  
  while(1){
	if(s[index] == NULL){
		if(s[index-1] == ' ')
			cnt--;
		break;
	}
		  	
	index++;
	
	if(s[index] == ' '){
		cnt++;
	}
	

  }
  
  printf("%d", cnt + 1);
  
  return 0;  
}

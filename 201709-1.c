#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",n/50*7+(n%50)/30*4+((n%50)%30)/10);
	return 0;
}

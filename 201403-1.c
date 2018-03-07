#include <stdio.h>
int a[501];
int main(){
	int n,i,j,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i] == -(a[j])){
				c++;
				break;
			}
		}
	}
	printf("%d",c);
	return 0;
}

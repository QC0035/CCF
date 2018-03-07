#include <stdio.h>
int a[1001];
int main(){
	int n,i,j,h,max=0,tmp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(j==i)
				h=a[j];
			h=(a[j]<h?a[j]:h);
			tmp=(j-i+1)*h;
			max=(max<tmp?tmp:max);
		}
	}
	printf("%d",max);
	return 0;
}

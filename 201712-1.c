#include <stdio.h>
#include <math.h>
int a[1000];
int main(){
	int i,j,n,min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(i==0 && j==1){
				min=abs(a[i]-a[j]);
				continue;
			}
			else if(abs(a[i]-a[j])<min){
				min=abs(a[i]-a[j]);
			}
		}
	}
	printf("%d\n",min);
	return 0;
}

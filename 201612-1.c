#include <stdio.h>
int a[1001];
int main(){
	int n,i,j,l,g;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		l=0;g=0;
		for(j=0;j<n;j++){
			if(a[i]>a[j])
				l++;
			else if(a[i]<a[j])
				g++;
		}
		if(l==g){
			printf("%d",a[i]);
			return 0;
		}	
	}
	printf("-1");
	return 0;
}

#include <stdio.h>
int a[10001];
int main(){
	int n,i,tmp;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&tmp);
		a[tmp]++;
	}
	tmp=0;
	for(i=0;i<10001;i++){
		if(a[i]>tmp)
			tmp=a[i];
	}
	for(i=0;i<10001;i++){
		if(tmp == a[i]){
			printf("%d",i);
			return 0;
		}
	}
	return 0;
}

#include <stdio.h>
int main(){
	int n,k,i,c,tmp,r;
	scanf("%d%d",&n,&k);
	tmp=0;r=0;
	for(i=0;i<n;i++){
		scanf("%d",&c);
		if(tmp == 0)
			r++;
		tmp+=c;
		if(tmp>=k){
			tmp=0;
		}
	}
	printf("%d",r);
	return 0;
}

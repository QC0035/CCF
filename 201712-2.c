#include <stdio.h>
int a[1001];
int main(){
	int n,k,p,i,cnt;
	scanf("%d%d",&n,&k);
	cnt=n;
	i=1;
	p=1;
	while(cnt>1){
		if(a[p]!=0){
			p++;
			continue;
		}
		else if(i%k==0 || i%10==k){
			a[p]=1;
			cnt--;
			p++;
		}
		else
			p++;
		if(p>n)
			p=1;
		i++;	
	}
	for(i=1;i<=n;i++){
		if(a[i]==0)
			break;
	}
	printf("%d",i);
	return 0;
}

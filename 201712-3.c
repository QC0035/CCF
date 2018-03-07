#include <stdio.h>
#include <string.h>
struct cron{
	char time[13];
	char event[20];
} crontab[10000],tmp;

void cmp(int a,int b){
	return atoi(crontab[b].time)-atoi(crontab[a].time]);
}

int main(){
	int n,i;
	char c;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		getchar();
		while(c!='\n'){
			
		}
	}
}

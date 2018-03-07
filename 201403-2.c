#include <stdio.h>
typedef struct win{
	int x1,y1;
	int x2,y2;
	int flag;
}window;

window windows[11],tmp;
int search(int a,int b){
	int i;
	for(i=1;i<=10;i++){
		if (windows[i].flag == 0){
			return 0;
		}
		else if(a<=windows[i].x2 && a>=windows[i].x1 &&
		        b<=windows[i].y2 && b>=windows[i].y1)
		   return i;
	}
	return 0;
}
void cover(window *a, window *b){
	a->x1=b->x1;
	a->x2=b->x2;
	a->y1=b->y1;
	a->y2=b->y2;
	a->flag=b->flag;
}
void top(int i){
	int j;
	if(i==0)
		return ;
	cover(&tmp,&windows[i]);
	for(j=i;j>1;j--)
		cover(&windows[j],&windows[j-1]);
	cover(&windows[1],&tmp);
}
int main(){
	int n,m,i,x,y,r;
	scanf("%d%d",&n,&m);
	for(i=n;i>0;i--){
		scanf("%d%d%d%d",&windows[i].x1,&windows[i].y1,&windows[i].x2,&windows[i].y2);
		windows[i].flag=n-i+1;
	}
	for(i=0;i<m;i++){
		scanf("%d%d",&x,&y);
		r=search(x,y);
		if(r == 0)
			printf("IGNORED\n");
		else{
			top(r);
			printf("%d\n",windows[1].flag);
		}
	}
	return 0;
}


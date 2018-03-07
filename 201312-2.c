#include <stdio.h>
#include <math.h>
char a[14];
int main(){
	int i=-1,n=0,f=1;
	char c;
	while((c=getchar())!='\n'){
		i++;
		a[i]=c;
		if(i == 1 || i == 5 ||i == 11 || i == 12)
			continue;
		else{
			n+=(c-48)*f;
			f++;
		}	
	}
	if(a[12]=='X'){
		if(n%11 == 10)
			printf("Right");
		else
			printf("%.12s%d",a,n%11);	
	}
	else{
		if(n%11 == a[12]-48)
			printf("Right");
		else if(n%11!=10)
			printf("%.12s%d",a,n%11);
		else 
			printf("%.12sX",a);
	}
	return 0;
}

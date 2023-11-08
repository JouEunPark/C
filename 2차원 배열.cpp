#include <stdio.h>
int main()
{
	int n,m,b=1;
	scanf("%d %d",&n,&m);
	int a[n][m],i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			a[i][j]=b;
		b++;
		}
	}
		for(i=n;i>=1;i--){
			for(j=m;j>=1;j--){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		return 0;
 } 


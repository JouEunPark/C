#include <stdio.h>
int main()
{
	int n,m,i,j,sum=1;
	scanf("%d %d", &n, &m);
	int a[n][m];
	for(i=m-1;i>=0;i--){
		for(j=0;j<n;j++){
			a[j][i]= sum;
			sum++;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
 } 

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	double mas[50],n,zn;
	
	printf("\nVvedite n: ");
	scanf("%lf", &n);
	for(i=0,n=50;zn<n;zn=zn+2,i++){
 mas[i] = zn;
		printf("\t mas[%d] = %.1lf\n", i, zn);
	}
	return 0;
}

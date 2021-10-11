#include <stdio.h>
int main(){
	int n;
	int p;
	int g;
	printf("Wpisz liczbę całkowitą: ");
	scanf("%d", &n);
	p = n;
	g = 0;
	for (int i=0; i<n; i++){
 		p--;
		for (int j=0; j<p; j++){
			printf(" ");
		}
		for (int k=0; k<(2*g)+1; k++){
			printf("*");
		}
		for (int l=0; l<p; l++){
			printf(" ");
		}
		printf("\n");
		g++;
	}
	return 0;
}

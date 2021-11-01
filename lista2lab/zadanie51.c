#include <stdio.h>

int NWD(int a, int b){
    int pom;
    
    while (b!=0){
        pom = b;
        b = a % b;
        a = pom;
    }

    return a;
}

int main()
{
    for (int n=1; n<=1000; n++){
        float c = 0;
        float x = 0.0;
            for (int i = 1; i<=n; i++){
                for (int j = 1; j<=n; j++){
                    if (NWD(i,j)==1){
                        c++;
                    }
                }
            }
        x = c/(n*n);
        printf("%d; %f\n",n,x);
    }

    return 0;
}

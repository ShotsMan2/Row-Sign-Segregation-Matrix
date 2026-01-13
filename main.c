#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
           int i,j,a,n;

    printf("n i girin ");
    scanf("%d",&n);

    int matris[n][n];
    int yer[n][n];
    a=1;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            matris[i][j]=a++;
            printf("%3d",matris[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            yer[j][i]=matris[i][j];
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%3d",yer[i][j]);
        }
        printf("\n");
    }
}

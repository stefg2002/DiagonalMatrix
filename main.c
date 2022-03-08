#include <stdio.h>

void main(){

    int n,r,c;
    int i,j;

    scanf("%i",&n);
    scanf("%i",&n);

    int matsqr[n][n];

    for(i=0;i<n;i++){

        for(j=0;j<n;j++){

            scanf("%i",&matsqr[i][j]);


        }

    }
    printf("\n\n");
    for(i=0;i<n;i++){

        for(j=0;j<n;j++){

            if(i==j){

                printf("%i ",matsqr[i][j]);

            }


        }

    }
    printf("\n");
    for(i=0;i<n;i++){

        for(j=0;j<n;j++){

            if(i+j==(n-1)){

                printf("%i ",matsqr[i][j]);

            }


        }

    }
    printf("\n\n");

    scanf("%i",&r);
    scanf("%i",&c);

    int mat[r][c];

    for(i=0;i<r;i++){

        for(j=0;j<c;j++){

            scanf("%i",&mat[i][j]);


        }

    }
    printf("\n\n");
    for(i=0;i<r;i++){

        for(j=0;j<c;j++){

            if(i==j){

                printf("%i ",mat[i][j]);

            }


        }

    }
    printf("\n");
    for(i=0;i<r;i++){

        for(j=0;j<c;j++){

            if(i+j==(c-1)){

                printf("%i ",mat[i][j]);

            }


        }

    }
    printf("\n");


}
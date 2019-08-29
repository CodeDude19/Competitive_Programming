#include <stdio.h>


void main() {

    int A[100][100], B[100][100], i, m, n, j;
    printf("Enter m:\n");
    scanf("%d", &m);
    printf("Enter n:\n");
    scanf("%d", &n);

    printf("Please enter the elements for %d x %d matrix below:\n",m,n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }

    }
    printf("The Matrix you entered above in row major form is :\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d", A[i][j]);
            printf("\t");
        }
        printf("\n");

    }
    printf("The Sparse of the Matrix is :\n");
    B[0][0] = m;
    B[0][1] = n;
    int k = 1;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (A[i][j] != 0) {
                B[k][0] = i + 1;
                B[k][1] = j + 1;
                B[k][2] = A[i][j];
                k = k + 1;
            }
        }
    }
    k = k - 1;
    B[0][2] = k;

    for (i = 0; i <= k; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d", B[i][j]);
            printf("\t");
        }
        printf("\n");

    }

    int D[100][100]={0},x,y;
    printf("Lets now make the transpose matrix from sparse matrix:\n");

    printf("\n");
    for (i = 1; i <= k; i++) {
        for (j = 0; j < 3; j++) {
            if(j==0)
                y=B[i][j];
            else if(j==1)
                x=B[i][j];
        }
        D[(x-1)][(y-1)]=B[i][2];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {

            printf("%d",D[i][j]);
            printf("\t");
        }

        printf("\n");
    }

     int E[100][100];
     printf("The compact form of the Transpose of the Matrix is:\n");
     E[0][0] = m;
     E[0][1] = n;
     int U = 1;
     for (i = 0; i < m; i++) {
         for (j = 0; j < n; j++) {
             if (D[i][j] != 0) {
                 E[U][0] = i + 1;
                 E[U][1] = j + 1;
                 E[U][2] = D[i][j];
                 U = U + 1;
             }
         }
     }
     U = U - 1;
     E[0][2] = U;

     for (i = 0; i <= U; i++) {
         for (j = 0; j < 3; j++) {
             printf("%d", E[i][j]);
             printf("\t");
         }
         printf("\n");

     }


}

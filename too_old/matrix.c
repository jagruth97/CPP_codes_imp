#include <stdio.h>

main()
{
    int m, n, p, q;
    printf("m n p q:");
    scanf("%d %d %d %d", &m, &n, &p, &q);

    if (n == p)
    {
        int mat1[m][n], mat2[p][q], mat[m][q]; // matrix structure are pre created

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("value of mat1[%d][%d]", i, j);
                scanf("%d", &mat1[i][j]);
            }
        }

        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("value of mat2[%d][%d]", i, j);
                scanf("%d", &mat2[i][j]);
            }
        }

        // multiplication

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                // mat[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    mat[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }

        for (int i = 0; i < m; i++)
        {
            printf("\n");
            for (int j = 0; j < n; j++)
            {
                printf(" %d ", mat1[i][j]);
            }
        }
        printf("\n");
        for (int i = 0; i < p; i++)
        {
            printf("\n");
            for (int j = 0; j < q; j++)
            {
                printf(" %d ", mat2[i][j]);
            }
        }
        printf("\n");
        for (int i = 0; i < m; i++)
        {
            printf("\n");
            for (int j = 0; j < q; j++)
            {
                printf(" %d ", mat[i][j]);
            }
        }
    }
    else
    {
        printf("invalid input");
    }
}
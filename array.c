#include <stdio.h>

int main() {
    int a[100], n, i, pos, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter position and element to insert: ");
    scanf("%d %d", &pos, &x);

    for(i = n; i >= pos; i--)
        a[i] = a[i-1];

    a[pos-1] = x;
    n++;

    printf("Updated array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;
    printf("Enter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nThe 3x3 matrix is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
//DYNAMIC MATRIX/MEMORY ALLOCATION
#include <stdio.h>

int main() {
    int a[10][10], transpose[10][10];
    int rows, cols, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    printf("\nTranspose of the matrix:\n");
    for(i = 0; i < cols; i++) {
        for(j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    int matrix[4][4], arr[16];
    int i, j, k = 0, temp;

    // Input matrix
    printf("Enter elements of 4x4 matrix:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &matrix[i][j]);
            arr[k++] = matrix[i][j];  
        }
    }
    for(i = 0; i < 15; i++) {
        for(j = 0; j < 15 - i; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    k = 0;
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            matrix[i][j] = arr[k++];
        }
    }
    printf("\nSorted Matrix:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
int main() 
    struct student
    {
        int regno;
        char name[50];
        float cgpa;
    };
    int main()
    {
        struct studentvs;
        printf("enter name of the student: ");
        scanf("%s",s.name);
        printf("enter regno number: ");
        scanf("%d",&s.regno);
        printf("enter cgpa of the student: ");
        scanf("%d",&s.cgpa);
        printf("the details of the student are as follows : \n");
        printf("Name : %s\n",s.name);
        printf("Registration Number : %d\n",s.regno);
        printf("CGPA : %f",s.cgpa);
    return 0;
    }

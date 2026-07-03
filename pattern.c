
#include <stdio.h> 
int main() {
    int n,i,j;
    printf("Enter value of n: ");
    scanf("%d", &n);
    for (i=1;i<=n; i++) {
        for (j = 1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
int main() {
    int n,i,j;
    printf("Enter value of n: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++) {
        for(j=i ; j>=1; j--) {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
int main() {
    int n,i,j;
    printf("Enter value of n: ");
    scanf("%d",&n);
     for(i=1;i<=n;i++) {
        for( int k=1;k<=n-i;k++)
        printf(" ");
    for(j=i;j>=1;j--)
    printf("%d",j);
    printf("\n");
     }
     return 0;
}
#include <stdio.h>
int main() {
    int n,i,j,l,k;
    printf("enter no. of lines: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++)
        printf(" ");
    for (k=1;k<=i;k++)
        printf("%d",k);
    for(l=i-1;l>=1;l--)
        printf("%d",l);
    printf("\n");
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int i,j,k,l,n;
    printf("enter numnber of lines ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("%d",k);
        for(l=i-1;l>=1;l--)
            printf("%d",l);
        printf("\n");
    }
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=i;j++)
            printf(" ");
        for(k=1;k<=n-i;k++)
            printf("%d",k);
        for(l=n-i-1;l>=1;l--)
            printf("%d",l);
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int i,j,k,l,n;
    printf("enter numnber of lines ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
            printf("%d",j);
        for(k=1;k<=i-1;k++)
            printf(" ");
        if(i==1)
            l=n-i;
        else
            l=n-i+1;
        for(;l>=1;l--)
            printf("%d",l);
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
int fibonacci(int n)
{
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int i;

    printf("First 25 Fibonacci numbers:\n");

    for(i = 0; i < 25; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}


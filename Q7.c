//1
//A B
//1 2 3
//A B C D
//1 2 3 4 5
#include<stdio.h>
int main(){
    int n,a;
    printf("Enter your rows:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        a=65;
        for (int j = 1; j <=i; j++) 
        {
            if (i%2!=0)
            {
                printf("%d ",j);
            }
            else{
                printf("%c ",a);
            }
            a=a+1;
        }
        printf("\n");
    }
    return 0;
}
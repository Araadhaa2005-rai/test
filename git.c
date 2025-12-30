#include<stdio.h>
#include<math.h>
// odd = 0 ;
// even number = 1 ;
int main()
{
    int x;
    printf("enter number");
    scanf("%d\n",& x);
    printf("%d\n", x % 2 == 0);
    return 0 ;

}
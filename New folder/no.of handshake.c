#include<stdio.h>
#include<math.h>
int main()
{
    int people,handshake;
    printf("enter number of people");
    scanf("%d",&people);
    handshake=((people*people)-people)/2;
    printf("handshake=%d",handshake);
    return 0;
}

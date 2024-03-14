#include<stdio.h>
#include<math.h>
int main()
{
    int people,handshake;
    printf("enter number of people");
    scanf("%d",&people);
    handshake=((people*people)-people)/2;
    printf("handshake=%d",handshake);
    if(handshake>=20)
    {
        printf("yes no. of handshake is atleast 20 ");
    }
    return 0;
}

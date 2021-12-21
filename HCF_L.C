#include <stdio.h>

int hcf(int x , int y)
{
    int hcf,i;
    for(i=1 ;i<=x && i<=y;i++)
    {
        if(x%i==0 && y%i==0)
            hcf=i;
    }
    return hcf;
}

int main()
{
    int N1,N2,HCF,LCM;

    printf ("Enter 1st number :");
    scanf("%d",&N1);
    printf("Enter 2nd number :");
    scanf("%d",&N2);

    HCF=hcf(N1,N2);
    LCM=(N1*N2)/HCF;

    printf("LCM of given numbers : %d\n",LCM);
    printf("HCF of given numbers : %d\n",HCF);
    printf("The Difference betw HCF and LCM is %d", LCM-HCF);

}

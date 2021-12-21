#include<stdio.h>

int hcf(int x , int y)
{
    int hcf,i;
    for(i=1 ;i<=x && i<=y ;i++)
    {
        if(x%i==0 && y%i==0)
            hcf=i;
    }
    return hcf;
}

int main()
{
    int N1,N2,HCF,LCM;
    printf ("Enter the the two numbers\n");

    scanf("\n%d \n%d",&N1,&N2);

    HCF=hcf(N1,N2);
    LCM=(N1*N2)/HCF;

    printf("LCM of given numbers :%d\n",LCM);
    printf("HCF of given numbers : %d\n",HCF);
    printf("The difference between HCF and LCM is %d", LCM-HCF);

}

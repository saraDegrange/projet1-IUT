#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    char fil;
    char r = 'r';
    char n = 'n';
    char d = 'd';
    char b = 'b';
    int diode1;
    int diode2;
    int numserie;
    int nbbatterie;
    int portp;
    int C;
    int S;
    int P;
    int B;
    int couperfil;

    scanf("%c",&fil);
	scanf("%d",&diode1);
	scanf("%d",&diode2);
	scanf("%d",&numserie);
	scanf("%d",&nbbatterie);
	scanf("%d",&portp);

    C = (((fil!=r)&&(fil!=n)&&(diode1==0)&&(diode2==0))||((fil==r)&&(diode1==1)&&(diode2==0))||((fil!=r)&&(fil!=n)&&(diode1==1)&&(diode2==0)));

    S = (numserie%2==0)&&(((fil==r)&&(diode1==0)&&(diode2==0))||((fil==d)&&(diode1==0)&&(diode2==0))||((fil==n)&&(diode1==0)&&(diode2==0))||((fil==d)&&(diode1==0)&&(diode2==1)));

    P = (portp==1)&&(((fil==n)&(diode1==1)&&(diode2==1))||((fil==n)&&(diode1==0)&&(diode2==1))||((fil==d)&&(diode1=1)&&(diode2==0)));

    B = (nbbatterie>=2)&&(((fil==r)&&(diode1=0)&&(diode2==1))||((fil==r)&&(diode1==1)&&(diode2==1))||((fil==b)&&(diode1==1)&&(diode2==1)));

    couperfil = ( C || S || P || B );
    printf("%d\n", couperfil);
    return 0;
}

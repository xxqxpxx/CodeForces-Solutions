#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std; 


int main()
{
    FILE *in=stdin;//fopen("times.in","r");
    int c,c2;
    int hh,mm;
    fscanf(in,"%d:%d",&hh,&mm);
    int loops=2000;
    while (loops--)
    {
        mm++;
        if (mm==60){hh++;mm=0;}
        if (hh==24)hh=0;
        if ((hh%10 == ((mm/10)%10)) && ((hh/10)%10 == mm%10))break;
    }
    printf("%.2d:%.2d\n",hh,mm);
//    system("pause");
    return 0;
    
}
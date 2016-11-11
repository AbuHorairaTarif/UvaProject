#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    long int l,i,j,k,dec,count,hex;
    char n[1000],h[100];
    while(1)
    {
        gets(n);
        l=strlen(n);
        if(n[0]=='0' && n[1]=='x')
        {
            dec=0;
            for(i=2;i<l;i++)
            {
                if(n[i]=='A')
                    dec=dec*16+10;
                else if(n[i]=='B')
                    dec=dec*16+11;
                else if(n[i]=='C')
                    dec=dec*16+12;
                else if(n[i]=='D')
                    dec=dec*16+13;
                else if(n[i]=='E')
                    dec=dec*16+14;
                else if(n[i]=='F')
                    dec=dec*16+15;
                else
                    dec=dec*16+n[i]-'0';
            }
            printf("%ld\n",dec);
        }
        else
        {
            count=0;
            dec=atoi(n);
            if(dec<0) break;
            for(i=0;i!=-1;i++)
            {
                hex=dec%16;
                dec/=16;
                if(hex==10)
                    h[i]='A';
                else if(hex==11)
                    h[i]='B';
                else if(hex==12)
                    h[i]='C';
                else if(hex==13)
                    h[i]='D';
                else if(hex==14)
                    h[i]='E';
                else if(hex==15)
                    h[i]='F';
                else
                    h[i]=hex+'0';
                count=count+1;
                if(dec<=0) break;
            }
            printf("0x");
            for(i=count-1;i>=0;i--)
            printf("%c",h[i]);
            printf("\n");
        }
    }
return 0;
}

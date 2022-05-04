// Program treba zamjenit svaku rijec u stringu koristeci pointere.

#include <stdio.h>
#include <conio.h>
#include<string.h>

int main()
{
        char str[50];
        int len,i,j,sp=0,pocetak,kraj;
        char *s;

        printf("Unesi neki string: ");
        gets(str);

        s=str;

    printf("\nNakon zamjene svake rijeci u stringu [ %s ] : \n",s);

        len=strlen(s);
        kraj=len-1;
        for(i=len-1;i>=0;i--)
        {
                if(s[i]==32 || i==0)
                {
                        if(i==0)
                                pocetak=0;
                        else
                                pocetak=i+1;
                        for(j=pocetak;j<=kraj;j++)
                                printf("%c",s[j]);
                        kraj=i-1;
                        printf(" ");
                }
        }

        printf("\n");

        return 0;
}

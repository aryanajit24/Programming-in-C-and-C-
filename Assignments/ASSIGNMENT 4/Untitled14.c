#include <stdio.h>

int count_consonants(char str[]);

int count_consonants(char str[])
{
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='e' ||str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' ||
           str[i]=='O' || str[i]=='U' || str[i]==" ")
           {
               continue;
           }
        else
        {
            count++;
        }
    }

    return count;
}

int main()
{

    char str1[]="H d";
    int count=count_consonants(str1);
    printf("Number of consonants: %d",count);

    return 0;
}


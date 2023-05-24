#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int length=0;
    gets(str);
    length=strlen(str);
    printf("Length : %d",length);
    return 0;
}
1.1
#include<stdio.h>

int main()
{
    char str[100];
    int length=0;
    gets(str);
    int i=0;
    while(str[i]!='\0')
    {
        length++;
        i++;
    }
    printf("Length : %d",length);

    return 0;
}
2
#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    printf("First string :\n");
    gets(str1);
    printf("Second string \n");
    gets(str2);
    int i=0,j=0;
    while(str1[i]!='\0')
        i++;
    while(str2[j]!='\0')
    {
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';

    puts(str1);
    return 0;
}
3
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Give a fuck :\n");
    gets(str);
    int length=0,c=0;
    length=strlen(str);
    for(int i=0 ; i<length ; i++)
    {
        if(str[i]=='a' ||str[i]=='A' ||str[i]=='e' ||str[i]=='E' ||str[i]=='i' ||str[i]=='I' ||str[i]=='o' ||str[i]=='O' ||str[i]=='u' ||str[i]=='U')
            c++;
    }
    printf("Number of vowel : %d",c);
    return 0;
}
4
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Give a fuck: \n");
    gets(str);

    int i=0,c=1; // for null c=1;

    while(str[i]!='\0')
    {
        if(str[i]==' ' ||str[i]=='\n' || str[i]=='\t'|| str[i]=='\0' )
        {
            c++;
        }
        i++;

    }
    printf("%d",c);
    return 0;
}
5
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Give a fuck\n");
    gets(str);
    int length=0,t=0;
    length=strlen(str);
    int end=length-1;
     for(int i=0 ; i<length/2 ; i++)
     {
        t=str[i];
        str[i]=str[end];
        str[end]=t;
        end--;
     }
    puts(str);
    return 0;
}
6
#include <stdio.h>
#include <ctype.h>

int main () {
   int i = 0;
   char str[100];
   gets(str);

   while(str[i]) {
      putchar (tolower(str[i]));
      i++;
   }

   return(0);
}
7
#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	printf("Give a fuck:\n");
	gets(str);
	for(int i=0 ; i<strlen(str) ; i++)
	{
		if(str[i]>='A'&& str[i]<='Z')
			str[i]=str[i]+32;
		else if(str[i]>='a'&& str[i]<='z')
			str[i]=str[i]-32;
	}
	puts(str);
	return 0;
}
8
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Give a fuck: \n");
    gets(str);

    for(int i=0,t=0; i<strlen(str); i++)
    {
        for(int j=0 ; j<strlen(str); j++)
        {
            if(str[i]<str[j])
            {
                t=str[i];
                str[i]=str[j];
                str[j]=t;
            }
        }

    }
    printf("%s",str);
    return 0;
}
9
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Give a fuck:\n");
    gets(str);
    char ch;
    printf("Give an another fuck:\n");
    scanf("%c",&ch);
    int position=0;
    for(int i=0 ; i<strlen(str); i++)
    {
        if(toupper(str[i])==toupper(ch))
        {
            position++;
        }
    }
    printf("Number of position is : %d\n",position);


    return 0;
}
10
#include<stdio.h>
int main()
{
    char str[100];
    printf("Give a fuck :\n");
    gets(str);
    int end=strlen(str)-1;
    int flag=0;
    for(int i=0 ; i<strlen(str) ; i++,end--)
    {
        if(str[i]!=str[end])
        {
            flag=1;
        }
    }
    if(flag==0)
        printf("palindrome");
    else
        printf("Not  palindrome");

    return 0;
}
11
#include<stdio.h>
int main()
{
    char str[100];
    printf("Give a fuck:\n");
    gets(str);
    int sum=0;
    for(int i=0 ; i<strlen(str) ; i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            sum+=str[i]-'0'; // 2 ascii 50
                             // sum=50-48 which is 2;
        }
    }

    printf("Sum= %d",sum);


    return 0;
}
12
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100],str2[100];
	printf("Give a fuck: \n");
	gets(str1);
	printf("Give an another fuck: \n");
	gets(str2);
	int length1=strlen(str1),length2=strlen(str2);
	int count=0,num=0;
	for(int i=0 ; i<length1 ; i++)
	{
		if(str1[i]==str2[0])
		{
			for(int j=0 ; j<length2 ; j++)
			{
				if(str1[i+j]==str2[j])
				{
					count++; //I liked the story about the sad giant
				} //It is what it is
			}
			if(count==length2)
			{
				num++;
			}
			count=0;
		}
	}
	printf("Word [ %s ] repeated [ %d ] times",str2,num);
	return 0;
}
13
#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	printf("Give a fuck: \n");
	gets(str);
	int n=strlen(str);
	int k,j,i;

	for(i=0 ; i<n ; i++)
	{
		for(j=i+1 ; j<n ; j++)
		{
			if(str[i]==str[j])
				{
					for(k=j+1 ; i<n ; k++)
					{
						str[j]=str[k];
					}
				}
				str[k]='\0';
		}
	}
	printf("%s ",str);
	return 0;
}
14
#include<stdio.h>
#include<string.h>

int main()
{
char str[100];
    gets(str);

    for(int i=0 ; i<strlen(str) ; i++)
    {
        for(int j=i+1 ; j<strlen(str) ; j++ )
        {
            if(str[i]==str[j])
            {
            	int k = j+1;
                for(; k<strlen(str); k++) {
					str[j] = str[k];
					j = j + 1;
                }
                str[k] = '\0';
				j -= 1;

            }
        }
    }
puts(str);
    return 0;
}
15




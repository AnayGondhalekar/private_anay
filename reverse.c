#include <stdio.h>

char reverse(char *str,int length)
  {
	char *temp;
	int l,i;
	
	if(length % 2 == 0)
	{
	l=length / 2;
	}
	else
	{
	l=(length - 1) / 2;
	}
	
	for(i=0;i<l;i++)
	{
		temp=*(str + i);
		*(str + i) =*(str + length - i - 1);
		*(str + length - i - 1) = temp;
	}

	return 0;

}

void main()
{
	char name[]="Anay";
	char p;
	printf("%d",p);
	printf("\n");
	p=reverse(&name[0],4);
	
	for(int i=0;i<4;i++)
	{
		printf("%c",name[i]);
	}
	printf("\n");

	char str1[]="This is a string.";
	p=reverse(&str1[0],17);
	for(int i=0;i<17;i++)
	{
		printf("%c",str1[i]);
		
	}
	printf("\n");
	
	char str2[]="Some NUMmbers12345";
	p=reverse(&str2[0],18);
	for(int i=0;i<18;i++)
	{
		printf("%c",str2[i]);
	
	}
	printf("\n");


	char str3[]="Does it reverse \n\0\t correctly?";
	p=reverse(&str2[0],30);
	for(int i=0;i<30;i++)
	{
		printf("%c",str3[i]);
	}
	printf("\n");

		
}

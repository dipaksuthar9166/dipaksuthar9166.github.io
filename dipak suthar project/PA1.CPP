#include<stdio.h>
#include<conio.h>
#include<string.h>
void length(char[]);
void copy(char[]);
void compare(char[],char[]);
void concat(char[], char[]);

void main() {
	clrscr();
	char s1[50], s2[30],ch;
	printf("\nEnter String 1 :");
	gets(s1);

	printf("\nEnter String 2 :");
	gets(s2);
	do{
	printf("\n  ----String operation----- :");
	printf("\n 1.string length :");
	printf("\n 2.String copy :");
	printf("\n 3.String compare :");
	printf("\n 4.String concat :");
	printf("\n 5.exit :");

	printf("\n\nEnter your choicesss   :");
	scanf("%d",&ch);

	switch(ch)
	{
	case 1:
		length(s1);
		break;
	case 2:
		copy(s1);
		break;
	case 3:
		compare(s1,s2);
		break;
	case 4:
		concat(s1,s2);
		break;
	case 5:
		break;
	default:
		printf("wrong choicess");
		break;
	 }
	 }while(ch!=5);
	 getch();
 }
void length(char s1[])
{
	int i=0;
	while(s1[i] != '\0')
	{
	 i++;
	 }
	printf("length is : %d",i);
}
void copy(char s1[])
{
	int i;
	char s3[50];
	for (i = 0; s1[i] != '\0'; ++i)
	{
	s3[i] = s1[i];
	}

    s3[i] = '\0';
    printf("String s1 copy in s3: %s", s3);
}
void compare(char s1[],char s2[])
{
	int count1=0,count2=0,flag=0,i;
	while (s1[count1]!='\0')
	count1++;

	while (s2[count2]!='\0')
	count2++;
	i=0;

	while ( (i < count1) && (i < count2))
	{
		if (s1[i] == s2[i])
		{
			i++;
			continue;
		}
		if (s1[i]<s2[i])
		{
			flag = -1;
			break;
		}
		if (s1[i] > s2[i])
		{
			flag = 1;
			break;
		}
	}
	if (flag==0)
		printf("\n Both strings are equal\n");
	if (flag==1)
		printf("\n String1 %s is greater than string2 %s\n ", s1, s2);
	if (flag == -1)
		printf("\n String1 %s is less than string2 %s\n ", s1, s2);

}
void concat(char s1[], char s2[]) {
	int i, j;
	i = strlen(s1);
	for (j = 0; s2[j] != '\0'; i++, j++)
	{
		s1[i] = s2[j];
	}
	s1[i] = '\0';
	printf("\n \n String after concate %s",s1);

}


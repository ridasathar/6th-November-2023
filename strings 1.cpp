 #include<stdio.h>
 int main()
 {
 	int i,c=0,l=0;
 	char str[]= "lotus";
 	for(i=0;c==0;i++)
 	{
	 if (str[i]=='\0')
 	{l+=1;
 	c=1;}
 	else
 	l+=1;
    }
 	printf("Length is %d", l-1);
 	
 }

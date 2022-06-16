#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#define max 12
using namespace std;
void print_lcs(char b[max][max],char x[10],int i,int j)
{
	if(i==0 || j==0)
	{
		return;
	}
	if(b[i][j]=='\\')
	{
		print_lcs(b,x,i-1,j-1);
		cout<<x[i-1];
	}
	else if(b[i][j]=='|')
	{
		print_lcs(b,x,i-1,j);
	}
	else
	{
		print_lcs(b,x,i,j-1);
	}
}
void lcs_len(char x[10],char y[10],int m,int n)
{
	int i,j;
	int c[max][max];
	char b[max][max];
	for(i=0;i<max;i++)
	{
		for(j=0;j<max;j++)
		{
			b[i][j]='0';
		}
	}
	for(i=1;i<=m;i++)
	{
		c[i][0]=0;
	}
	for(j=0;j<=n;j++)
	{
		c[0][j]=0;
	}
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(x[i]==y[j])
			{
				c[i+1][j+1]=c[i][j]+1;
				b[i+1][j+1]='\\';
			}
			else if(c[i][j+1]>=c[i+1][j])
			{
				c[i+1][j+1]=c[i+1][j];
				b[i+1][j+1]='|';
			}
			else
			{
				c[i+1][j+1]=c[i+1][j];
				b[i+1][j+1]='-';
			}
		}
	}
	cout<<"The length of longest subsequence is "<<c[m][n]<<endl;
	cout<<"The longest sequence is :";
	print_lcs(b,x,m,n);
}
int  main()
{

	char x[10],y[10];
	int i,j;
	cout<<"Enter first sequence:";
	gets(x);
	cout<<"Enter second sequence:";
	gets(y);
	i=strlen(x);
	j=strlen(y);
	lcs_len(x,y,i,j);
	getch();
}



/*MADE BY SHOURYA SHASHANK
   ALL RIGHTS RESERVED
   COPYRIGHT (c) by Shourya Shashank*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char a[3][3];
int n,m;
cout<<"                                     Tic-Tac-Toe\n";
cout<<"_______________________________________________________________________________\n" ;
cout<<"\n1 2 3\n4 5 6 \n7 8 9\nENTER ANY OF THESE NUMBERS TO ENTER'x'or'o' IN RESPECTIVE BLOCK.";
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
a[i][j]=' ';
}}
for(int s=0;s<5;s++)
{ 
cout<<"\nPLAYER  '1'";
cin>>n;

if(n==1)
a[0][0]='x';
else if(n==2)
a[0][1]='x';
else if(n==3)
a[0][2]='x';
else if(n==4)
a[1][0]='x';
else if(n==5)
a[1][1]='x';
else if(n==6)
a[1][2]='x';
else if(n==7)
a[2][0]='x';
else if(n==8)
a[2][1]='x';
else if(n==9)
a[2][2]='x';

for(int i=0;i<3;i++)
{cout<<"\n-------\n";
for(int j=0;j<3;j++)
{
cout<<a[i][j]<<"|";
}}

if((a[0][0]=='x'&&a[0][1]=='x'&&a[0][2]=='x')||(a[1][0]=='x'&&a[1][1]=='x'&&a[1][2]=='x')||(a[2][0]=='x'&&a[2][1]=='x'&&a[2][2]=='x')||(a[0][0]=='x'&&a[1][0]=='x'&&a[2][0]=='x')||(a[0][1]=='x'&&a[1][1]=='x'&&a[2][1]=='x')||(a[0][2]=='x'&&a[1][2]=='x'&&a[2][2]=='x')||(a[0][0]=='x'&&a[1][1]=='x'&&a[2][2]=='x')||(a[0][2]=='x'&&a[1][1]=='x'&&a[2][0]=='x'))
{cout<<"\n                                   PLAYER '1' WINS\n";
cout<<"                                   GAME    OVER                    ";
break;  }

if(a[0][0]!=' '&&a[0][1]!=' '&&a[0][2]!=' '&&a[1][0]!=' '&&a[1][1]!=' '&&a[1][2]!=' '&&a[2][0]!=' '&&a[2][1]!=' '&&a[2][2]!=' ')
{
cout<<"tie";
break;
}
 {

cout<<"\nPLAYER '2'";
cin>>m;
if(m==1)
a[0][0]='o';
else if(m==2)
a[0][1]='o';
else if(m==3)
a[0][2]='o';
else if(m==4)
a[1][0]='o';
else if(m==5)
a[1][1]='o';
else if(m==6)
a[1][2]='o';
else if(m==7)
a[2][0]='o';
else if(m==8)
a[2][1]='o';
else if(m==9)
a[2][2]='o';
for(int i=0;i<3;i++)
{cout<<"\n------\n";
for(int j=0;j<3;j++)
{
cout<<a[i][j]<<"|";
}}}
if((a[0][0]=='o'&&a[0][1]=='o'&&a[0][2]=='o')||(a[1][0]=='o'&&a[1][1]=='o'&&a[1][2]=='o')||(a[2][0]=='o'&&a[2][1]=='o'&&a[2][2]=='o')||(a[0][0]=='o'&&a[1][0]=='o'&&a[2][0]=='o')||(a[0][1]=='o'&&a[1][1]=='o'&&a[2][1]=='o')||(a[0][2]=='o'&&a[1][2]=='o'&&a[2][2]=='o')||(a[0][0]=='o'&&a[1][1]=='o'&&a[2][2]=='o')||(a[0][2]=='o'&&a[1][1]=='o'&&a[2][0]=='o'))
{cout<<"\n                                PLAYER '2' WINS\n";
cout<<"                                   GAME    OVER                    ";
break;
}











      }




getch();
}

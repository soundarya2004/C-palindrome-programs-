#include<iostream.h>
#include<conio.h>
int main()
{
register int n,num,rem,rev= 0;
clrscr();
cout<<"\nEnter a positive number:";
cin>>num;
n = num;
do
{
rem=num % 10;
rev=(rev*10)+rem;
num=num/10;
} while(num!=0);
cout<<"\nThe reverse of the number is:"<<rev<<endl;
if(n==rev)
{
cout<<"\nThe number is a palindrome.";
}
else
{
cout<<"\nThe number is not a palindrome.";
}
getch();
return 0;
}

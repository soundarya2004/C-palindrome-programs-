#include<iostream>
using namespace std;
string palindrome(string a)
{
std::string b=a;
reverse(b.begin(),b.end());
if(a==b)
{
cout<<"\nThe given string is palindrome.";
}
else
{
cout<<"\nThe given string is not palindrome";
}
}
int main()
{
register string s;
cout<<"Enter string:"<<endl;
cin>>s;
cout<<palindrome(s);
return 0;
}

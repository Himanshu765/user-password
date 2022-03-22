#include <iostream.h>
#include<conio.h>
class operation
{
int a,b,add,sub,mul;
float div;
public:
void get();
void sum();
void difference();
void product();
void division();
};
inline void operation::get()
{
cout<<" enter first value:";
cin >>a;
cout<<" enter second value:";
cin >>b;
}
inline void operation::sum()
{
add=a+b;
cout<<" Addition of two number:" <<a+b<<"\n";
}
 inline void operation::difference()
{
sub=a-b;
cout<<" Difference of two number:" <<a-b<<"\n";
}
inline void operation::product()
{
mul=a*b;
cout<<" product of two number:" <<a*b<<"\n";
}
inline void operation::division()
{
div=a/b;
cout<<" Addition of two number:" <<a/b<<"\n";
}
void main()
{
clrscr();
cout<<" programing  using inline function \n";
operation s;
s.get();
s.sum();
s.difference();
s.product();
s.division();
getch();



}




#include<cstdio>
using namespace std;

int gcd(int x,int y)
{
	if(x%y==0) return y;
	else return (gcd(y,x%y));
} 

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("���Լ��Ϊ %d\n",gcd(a,b));
	return 0;
}

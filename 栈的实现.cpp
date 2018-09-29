#include<bits/stdc++.h>
using namespace std;
#define MAXN 5000 + 10
int main()
{
//	std::ios::sync_with_stdio(false);
	int a,x,stack[101],n,top=0;;
	
	freopen("testin.in","r",stdin);
	while(scanf("%d",&a)!=EOF)
	stack[++top] = a; 	// push ,依次输入1－9 
	
	//cout<<stack[0];
	n=top;
	for(int i=0;i<n;i++)
	{
	x = stack[top--];	// pop ，依次输出9－1 
	printf("%d,",x);
	}
	
//	cout<<a<<","<<x;	
	return 0;
}

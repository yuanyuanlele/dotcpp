#include<bits/stdc++.h>
using namespace std;
int val(string& );//调用函数将字符串化为数字
int count1=0;
int main()
{
	int a,b;//ab为数字
	char c;//表示加或减
	string res;//最后的数字或?
	while(cin>>a)
	{
		scanf("%c%d=",&c,&b);
		cin>>res;
		int r=val(res);
		int note=(c=='+')?1:-1;
		if(a+note*b==r)
		count1++;
	}
	cout<<count1;
	return 0;
} 
int val(string& n)//调用函数将字符串化为数字
{
	if(n=="?")
	return -1000;else
	{
		int s=0;
		for(int i=0;i<n.size();i++)
		{
			s=s*10+n[i]-'0';
		}
		return s;
	}
}

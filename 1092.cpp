#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;                              //定义n为现有空瓶子数
    while (scanf("%d", &n) != EOF && n) //循环输入n
        printf("%d\n", n / 2);          //输出可以喝到的汽水瓶数
    return 0;
}

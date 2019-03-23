/* 实验.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//Author:longyile
//Date:2019-01-19
//用来计算1分之1+2分之1+...+n分之1，n为何数时超过输入的整数
*/

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int b;
	double a, x;
	a = 0;
	x = 1;
	cout << "请输入一个整数：" << endl;
	cin >> b;
	while (a < b)
	{
		a = a + 1 / x;
		x++;
	}
	cout << "n的值为："<<x-1;
}

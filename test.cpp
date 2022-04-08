#include "pch.h"

#include<iostream>  
#include<windows.h>  
using namespace std;

void way1(int a, int y);                         //交通灯的函数
void way2(int b);

int green1, green2;                             //定义交通灯的红，黄，绿灯的变量和赋初值
int yellow1, yellow2;
int red1, red2;
int green[2] = { 31,61 };
int yellow = 4;
int red[3] = { 34,64 };

int main()
{
	int car1, car2, car3, car4;                       //车辆数变量
	int i = 0, j;
	char d;
	cout << endl << "***开始模拟智能交通灯系统***" << endl << endl;
	while (1)
	{
		cout << "请设置东车道车辆数：";                         //设置车辆数
		cin >> car1;
		cout << "请设置西车道车辆数：";
		cin >> car2;
		cout << "请设置北车道车辆数：";
		cin >> car3;
		cout << "请设置南车道车辆数：";
		cin >> car4;
		cout << endl << endl;
		cout << "******开始模拟******" << endl;
		if ((car1 + car2) - (car3 + car4) > 10)                             //根据车辆数来选择交通灯计时函数
		{
			j = i + 1;
			way1(j, i);
		}
		else if (((car1 + car2) - (car3 + car4) >= 0) && ((car1 + car2) - (car3 + car4) <= 10))
		{
			way2(i);
		}
		else
		{
			j = i + 1;
			way1(i, j);
		}
		cout << "若想重新设置车辆数请按Y，若退出请按N。";
		cin >> d;
		if (d == 'Y' || d == 'y')
		{
			cout << endl;
			continue;
		}
		else if (d == 'N' || d == 'n')
			break;
	}

	return 0;
}

void way1(int a, int y)
{
	green1 = green[a];                                      //先给交通灯赋初值
	green2 = 0;
	yellow1 = yellow2 = 0;
	red1 = 0;
	red2 = red[a];
	int c;
	char d;
	while (1)                                              //东西车道的交通灯
	{
		for (c = 99; c > 0; c--)
		{
			cout << endl << "------东西车道------" << endl;
			if (green1 > 0)
			{
				if (green1 == green[a])
				{
					green1--;
				}
				else
				{
					cout << "   >>> 绿灯 <<< " << green1 << " 秒\n";
					green1--;
				}
				if (green1 == 0)
					yellow1 = yellow;
			}
			if (yellow1 > 0)
			{
				if (yellow1 == 4)
					yellow1--;
				else
				{
					cout << "   >>> 黄灯 <<< " << yellow1 << " 秒\n";
					yellow1--;
				}
				if (yellow1 == 0)
				{
					red1 = red[y];
				}
			}
			if (red1 > 0)
			{
				if (red1 == red[y])
					red1--;
				else
				{
					cout << "   >>> 红灯 <<< " << red1 << " 秒\n";
					red1--;
				}
				if (red1 == 0)
				{
					green1 = green[a];
				}
			}
			/***********************************************************************************/
			cout << endl << "------南北车道------" << endl;                   //南北车道的交通灯
			if (red2 > 0)
			{
				if (red2 == red[a])
				{
					red2--;
				}
				else
				{
					cout << "   >>> 红灯 <<< " << red2 << " 秒\n";
					red2--;
				}
				if (red2 == 0)
					green2 = green[y];
			}
			if (green2 > 0)
			{
				if (green2 == green[y])
					green2--;
				else
				{
					cout << "   >>> 绿灯 <<< " << green2 << " 秒\n";
					green2--;
				}
				if (green2 == 0)
				{
					yellow2 = yellow;
				}
			}
			if (yellow2 > 0)
			{
				if (yellow2 == 4)
					yellow2--;
				else
				{
					cout << "   >>> 黄灯 <<< " << yellow2 << " 秒\n";
					yellow2--;
				}
				if (yellow2 == 0)
				{
					red2 = red[a];
				}
			}


			Sleep(1000);
			system("cls");

		}
		cout << "若想继续请按C，若想返回上一级请按R。";
		cin >> d;
		if (d == 'C' || d == 'c')
		{
			cout << endl;
			continue;
		}
		else if (d == 'R' || d == 'r')
		{
			cout << endl << endl;
			break;
		}
	}
}


void way2(int b)
{
	green1 = green[b];
	green2 = 0;
	yellow1 = yellow2 = 0;
	red1 = 0;
	red2 = red[b];
	int c;
	char d;
	while (1)
	{
		for (c = 69; c > 0; c--)
		{
			cout << endl << "------东西车道------" << endl;
			if (green1 > 0)
			{
				if (green1 == green[b])
				{
					green1--;
				}
				else
				{
					cout << "   >>> 绿灯 <<< " << green1 << " 秒" << endl;
					green1--;
				}
				if (green1 == 0)
					yellow1 = yellow;
			}
			if (yellow1 > 0)
			{
				if (yellow1 == 4)
					yellow1--;
				else
				{
					cout << "   >>> 黄灯 <<< " << yellow1 << " 秒" << endl;
					yellow1--;
				}
				if (yellow1 == 0)
				{
					red1 = red[b];
				}
			}
			if (red1 > 0)
			{
				if (red1 == red[b])
					red1--;
				else
				{
					cout << "   >>> 红灯 <<< " << red1 << " 秒" << endl;
					red1--;
				}
				if (red1 == 0)
				{
					green1 = green[b];
				}
			}
			/***********************************************************************************/
			cout << endl << "------南北车道------" << endl;
			if (red2 > 0)
			{
				if (red2 == red[b])
				{
					red2--;
				}
				else
				{
					cout << "   >>> 红灯 <<< " << red2 << " 秒" << endl;
					red2--;
				}
				if (red2 == 0)
					green2 = green[b];
			}
			if (green2 > 0)
			{
				if (green2 == green[b])
					green2--;
				else
				{
					cout << "   >>> 绿灯 <<< " << green2 << " 秒" << endl;
					green2--;
				}
				if (green2 == 0)
				{
					yellow2 = yellow;
				}
			}
			if (yellow2 > 0)
			{
				if (yellow2 == 4)
					yellow2--;
				else
				{
					cout << "   >>> 黄灯 <<< " << yellow2 << " 秒" << endl;
					yellow2--;
				}
				if (yellow2 == 0)
				{
					red2 = red[b];
				}
			}


			Sleep(1000);
			system("cls");

		}
		cout << "若想继续请按C，若想返回上一级请按R。";
		cin >> d;
		if (d == 'C' || d == 'c')
		{
			cout << endl;
			continue;
		}
		else if (d == 'R' || d == 'r')
		{
			cout << endl << endl;
			break;
		}
	}
}


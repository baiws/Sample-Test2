#include "pch.h"

#include<iostream>  
#include<windows.h>  
using namespace std;

void way1(int a, int y);                         //��ͨ�Ƶĺ���
void way2(int b);

int green1, green2;                             //���彻ͨ�Ƶĺ죬�ƣ��̵Ƶı����͸���ֵ
int yellow1, yellow2;
int red1, red2;
int green[2] = { 31,61 };
int yellow = 4;
int red[3] = { 34,64 };

int main()
{
	int car1, car2, car3, car4;                       //����������
	int i = 0, j;
	char d;
	cout << endl << "***��ʼģ�����ܽ�ͨ��ϵͳ***" << endl << endl;
	while (1)
	{
		cout << "�����ö�������������";                         //���ó�����
		cin >> car1;
		cout << "��������������������";
		cin >> car2;
		cout << "�����ñ�������������";
		cin >> car3;
		cout << "�������ϳ�����������";
		cin >> car4;
		cout << endl << endl;
		cout << "******��ʼģ��******" << endl;
		if ((car1 + car2) - (car3 + car4) > 10)                             //���ݳ�������ѡ��ͨ�Ƽ�ʱ����
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
		cout << "�����������ó������밴Y�����˳��밴N��";
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
	green1 = green[a];                                      //�ȸ���ͨ�Ƹ���ֵ
	green2 = 0;
	yellow1 = yellow2 = 0;
	red1 = 0;
	red2 = red[a];
	int c;
	char d;
	while (1)                                              //���������Ľ�ͨ��
	{
		for (c = 99; c > 0; c--)
		{
			cout << endl << "------��������------" << endl;
			if (green1 > 0)
			{
				if (green1 == green[a])
				{
					green1--;
				}
				else
				{
					cout << "   >>> �̵� <<< " << green1 << " ��\n";
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
					cout << "   >>> �Ƶ� <<< " << yellow1 << " ��\n";
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
					cout << "   >>> ��� <<< " << red1 << " ��\n";
					red1--;
				}
				if (red1 == 0)
				{
					green1 = green[a];
				}
			}
			/***********************************************************************************/
			cout << endl << "------�ϱ�����------" << endl;                   //�ϱ������Ľ�ͨ��
			if (red2 > 0)
			{
				if (red2 == red[a])
				{
					red2--;
				}
				else
				{
					cout << "   >>> ��� <<< " << red2 << " ��\n";
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
					cout << "   >>> �̵� <<< " << green2 << " ��\n";
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
					cout << "   >>> �Ƶ� <<< " << yellow2 << " ��\n";
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
		cout << "��������밴C�����뷵����һ���밴R��";
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
			cout << endl << "------��������------" << endl;
			if (green1 > 0)
			{
				if (green1 == green[b])
				{
					green1--;
				}
				else
				{
					cout << "   >>> �̵� <<< " << green1 << " ��" << endl;
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
					cout << "   >>> �Ƶ� <<< " << yellow1 << " ��" << endl;
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
					cout << "   >>> ��� <<< " << red1 << " ��" << endl;
					red1--;
				}
				if (red1 == 0)
				{
					green1 = green[b];
				}
			}
			/***********************************************************************************/
			cout << endl << "------�ϱ�����------" << endl;
			if (red2 > 0)
			{
				if (red2 == red[b])
				{
					red2--;
				}
				else
				{
					cout << "   >>> ��� <<< " << red2 << " ��" << endl;
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
					cout << "   >>> �̵� <<< " << green2 << " ��" << endl;
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
					cout << "   >>> �Ƶ� <<< " << yellow2 << " ��" << endl;
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
		cout << "��������밴C�����뷵����һ���밴R��";
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


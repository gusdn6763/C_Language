#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern void ClearLineFromReadBuffer();    //�ܺο� �Լ��� ���� �� ���ǵ�

#include "1-0�� ����.c"
#include "3-0�� ������ ������.c"
#include "4-0�� ������ ǥ�����.c"
#include "5-0�� ���� �Ǽ� �ڷ���.c"
#include "5-1�� �ڷ��� ��ȯ.c"
#include "5-2�� �ƽ�Ű �ڵ�.c"
#include "5-3�� ���.c"
#include "6�� scanf�Լ��� printf�Լ�.c"
#include "7-0�� while��.c"
#include "7-1�� do while��.c"
#include "7-2�� for��.c"
#include "8-0�� if��.c"
#include "8-1�� continue�� break��.c"
#include "8-2�� switch��.c"
#include "9-0�� �Լ� �����Լ�.c"
#include "9-1�� �����Լ� static�Լ�.c"
#include "9-2�� ����Լ�.c"
#include "10�� ���� ���α׷���2.c"
#include "11-0�� �迭.c"
#include "11-1�� ���ڿ�.c"
#include "12�� ������.c"
#include "13-0�� �����Ϳ� �迭.c"
#include "13-1�� �����Ϳ� ���ڿ�.c"
#include "13-2�� �����͹迭.c"
#include "14-0�� �����Ϳ� �Լ�.c"
#include "15�� ���� ���α׷���.c"
#include "16�� ������ �迭.c"
#include "17�� �������� ������.c"
#include "18�� ������ �迭�� ������.c"
#include "19�� �Լ� �����Ϳ� void������.c"
#include "20�� ���� ���α׷���3.c"
#include "21-0�� ���� ���� ����� ���Լ�.c"
#include "21-1�� ���ڿ� ���� ����� �Լ�.c"
#include "21-2�� ����� ����.c"
#include "21-3�� ���ڿ� �����Լ�.c"
#include "22-0�� ����ü.c"
#include "22-1�� ����ü �迭.c"
#include "22-2�� ����ü ������.c"
#include "23-0�� ����ü�� typedef ����.c"
#include "23-1�� ����ü �Լ�.c"
#include "23-2�� ����ü.c"
#include "23-3�� ����ü ������.c"
#include "23-4�� ������.c"
#include "24-0�� ���� �����.c"
#include "26-0�� ��ũ�ο� ����ó����.c"
#include "26-1�� ���Ǻ� ������.c"
#include "26-2�� ��ũ���� �Ű����� ġȯ.c"


int main()
{


	int num1=0, num3;
	printf("���Է�:");
	scanf_s("%d", &num1);
	if (num1 == 1)
	{
		main1();
	}
	else if (num1 == 3)
	{
		main3();
	}
	else if (num1 == 4)
	{
		main4();
	}
	else if (num1 == 5)
	{
		printf("���Է�:");
		scanf_s("%d", &num3);
		if (num3 == 0)
		{
			main5();
		}
		if (num3 == 1)
		{
			main51();
		}
		if (num3 == 2)
		{
			main52();
		}
		if (num3 == 3)
		{
			main53();
		}
	}
	else if (num1 == 6)
	{
			main6();
	}
	else if (num1 == 7)
	{
		printf("���Է�:");
		scanf_s("%d", &num3);
		if (num3 == 0)
		{
			main7();
		}
		if (num3 == 1)
		{
			main71();
		}
		if (num3 == 2)
		{
			main72();
		}
	}
	else if (num1 == 8)
	{
		printf("���Է�:");
		scanf_s("%d", &num3);
		if (num3 == 0)
		{
			main8();
		}
		if (num3 == 1)
		{
			main81();
		}
		if (num3 == 2)
		{
			main82();
		}
	}
	else if (num1 == 9)
	{
		printf("���Է�:");
		scanf_s("%d", &num3);
		if (num3 == 0)
		{
			main9();
		}
		if (num3 == 1)
		{
			main91();
		}
		if (num3 == 2)
		{
			main92();
		}
	}
	else if (num1 == 10)
	{
		printf("���Է�:");
		scanf_s("%d", &num3);
		if (num3 == 2)
		{
			test2();
		}
		if (num3 == 3)
		{
			test3();
		}
		if (num3 == 4)
		{
			test4();
		}
		if (num3 == 5)
		{
			test5();
		}
		if (num3 == 6)
		{
			test6();
		}
		if (num3 == 8)
		{
			test8();
		}
	}
	else if (num1 == 11)
	{
	printf("���Է�:");
	scanf_s("%d", &num3);
	if (num3 == 0)
	{
		main11();
	}
	if (num3 == 1)
	{
		main111();
	}
	}
	else if (num1 == 12)
	{
	main12();
	}
	else if (num1 == 13)
	{
		printf("���Է�:");
		scanf_s("%d", &num3);
		if (num3 == 0)
		{
			main13();
		}
		if (num3 == 1)
		{
			main131();
		}
		if (num3 == 2)
		{
			main132();
		}
	}

	else if (num1 == 14)
	{
		main14();
	}

	else if (num1 == 15)
	{
	main15();
	}

	else if (num1 == 16)
	{
	main16();
	}

	else if (num1 == 17)
	{
	main17();
	}

	else if (num1 == 18)
	{
	main18();
	}
	else if (num1 == 19)
	{
	main19();
	}
	else if (num1 == 20)
	{
		printf("���Է�:");
		scanf_s("%d", &num3);
		if (num3 == 1)
		{
			test31();
		}
		if (num3 == 2)
		{
			test32();
		}
		if (num3 == 4)
		{
			test34();
		}
		if (num3 == 5)
		{
			test35();
		}
	}
	else if (num1 == 21)
	{
		printf("���Է�:");
		scanf_s("%d", &num3);
		if (num3 == 0)
		{
			main21();
		}
		if (num3 == 1)
		{
			main211();
		}
		if (num3 == 2)
		{
			main212();
		}
		if (num3 == 3)
		{
			main213();
		}
	}
	else if (num1 == 22)
	{
		printf("���Է�:");
		scanf_s("%d", &num3);
		if (num3 == 0)
		{
			main22();
		}
		if (num3 == 1)
		{
			main221();
		}
		if (num3 == 2)
		{
			main222();
		}
	}
	else if (num1 == 23)
	{
		printf("���Է�:");
		scanf_s("%d", &num3);
		if (num3 == 0)
		{
			main23();
		}
		if (num3 == 1)
		{
			main231();
		}
		if (num3 == 2)
		{
			main232();
		}

		if (num3 == 3)
		{
			main233();
		}
	}
	else if (num1 == 24)
	{
	main24();
	}
}
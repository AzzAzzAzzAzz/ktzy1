#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
	int num1, num2, result, score = 0;
	srand(time(0));
	for (int i = 0; i < 20; i++)
	{
		num1 = rand() % 101;
		if (num1 % 2 == 0)
		{
			num2 = 100 - num1;
			if (num2 > 0)
			{
				num2 = rand() % (num2 + 1);
			}
			cout << num1 << "+" << num2 << "=";
			cin >> result;
			if (num1 + num2 == result)
			{
				cout << "��ȷ" << endl;
				score += 5;
			}
			else
			{
				cout << "������ȷ���ǣ�" << num1 + num2 << endl;
			}
		}
		else
		{
			if (num1 == 0)
			{
				num2 == 0;
			}
			else
			{
				num2 = rand() % (num1 + 1);
			}
			cout << num1 << "-" << num2 << "=";
			cin >> result;
			if (result == num1 - num2)
			{
				cout << "��ȷ" << endl;
				score += 5;
			}
			else
			{
				cout << "������ȷ���ǣ�" << num1 - num2 << endl;
			}
		}
	}
	cout << "�����ܳɼ���" << score << endl;
	return 0;

}
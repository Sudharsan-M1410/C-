#include<iostream>

using namespace std;

int checkArmstrong(int num)
{
	int count = 0, temp, sum = 0, num1;
	num1 = num;
	while (num1 > 0)
	{
		num1 = num1 / 10;
		count++;
	}
	while (num > 0)
	{
		temp = num % 10;
		sum = sum + (int)pow(temp, count);
		num = num / 10;
		cout << sum << endl;
	}
	return sum;
}
int main()
{
	int num, res;
	cout << "Enter the Number: ";
	cin >> num;
	res = checkArmstrong(num);
	cout << res << endl;
	if (res == num)
	{
		cout << "It is an Armstrong Number";
	}
	else
	{
		cout << "It is not an Armstrong Number";
	}
}
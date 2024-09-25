#include <iostream>

int main()
{
	int sumNum, num, evenNum = 0, oddNum = 0;


	do
	{
		std::cout << "num = ";
		std::cin >> num;
		if (num % 2 == 0)
		{
			evenNum += num;
		}
		else
		{
			oddNum += num;
		}
		sumNum += num;

	} while (num != 0);
	
	std::cout << "Even: " << evenNum << "\nOdd: " << oddNum;

	return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

//TASK 18
//int main()
//{

//	int a;
//	int min = 2147483647;
//	int max = -2147483648;
//	bool isExit = true;
//	while (isExit)
//	{
//		cin >> a;
//		if (a != 0)
//		{
//			if (a < min)
//			{
//				min = a;
//			}
//			else if (a > max)
//			{
//				max = a;
//			}
//		}
//		else if (a == 0)
//		{
//			cout << min << " " << max;
//			isExit = false;
//		}
//	}
//}

//TASK27
//int main() {

//	for (int i = 1; i <= 1000; i++)
//	{
//		if (i % 5 == 0 && i % 2 != 0)
//		{
//			cout << i << endl;
//		}
//	}
//}

//TASK9
int main() {
	int a, b, c;

	cin >> a >> b >> c;

	double plus = -b / a;
	double multiply = c / a;

	double result1 = plus + sqrt(plus * plus - 4 * multiply) / 2;
	double result2 = plus - sqrt(plus * plus - 4 * multiply) / 2;

	cout << result1 << " " << result2 << endl;
}

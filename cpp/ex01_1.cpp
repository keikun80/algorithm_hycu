#include <iostream>

int sum(int n)
{
	int sum =0;
	for (int idx=0; idx<=n; idx++)
	{ 
		sum = sum+idx;
	} 
	return sum;
}
int main()
{
	std::cout << sum(10) << "\n";  
	std::cout << sum(55) << "\n";  
	std::cout << sum(100) << "\n";  
	std::getchar();
	return 0;
}
//int main()
//{
//	int i=10; 
//	int sum =0;
//	for (int idx=0; idx<=i; idx++)
//	{ 
//		sum = sum+idx;
//	} 
//	std::cout << sum << "\n";  
//	std::getchar();
//	return 0;
//}

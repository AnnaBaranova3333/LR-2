#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str[] = "hheeelllooyy";
	int count = 1;
	cout << str << endl; //вывод строки;
	int n = strlen(str);
	for (int i = 0; i < n; i++)
		if (str[i] == str[i + 1]) { count++; }
		else {
			cout << str[i] << count;
			count = 1;
		}
	return 0;
}
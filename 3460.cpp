#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int t,n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		int num = 0;
		while(n > 0)
		{
			if(n % 2 == 1) cout << num << ' ';
			n /= 2;
			num++;
		}
	}
	return 0;
}

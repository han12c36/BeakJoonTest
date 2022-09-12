#include <iostream>
#define MAX 101
using namespace std;

int n,m;
int arr[MAX];

int main(void)
{
	int sum,max = 0;
	cin >> n >> m;
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			for(int k = j + 1; k < n; k++){
				sum = arr[i] + arr[j] + arr[k];
				if(sum <= m && sum > max) max = sum;
			}
		}
	}
	cout << max;
	
	return 0;
}

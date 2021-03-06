// Sansa and XOR.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int xorSubset(vector<int>&arr) {
	int res = 0;
	if (arr.size() % 2 == 0) return 0;
	else {
		for (int i = 0; i < arr.size(); i += 2) res ^= arr[i];
	}
	return res;
}


int main()
{
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		cout << xorSubset(arr) << endl;
	}

    return 0;
}


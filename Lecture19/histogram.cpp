#include <iostream>
#include <stack>

using namespace std;
int histogram(int*arr, int n) {
	stack<int> indexes;
	indexes.push(1);
	int max_area = 0;
	for (int i = 2; i < n; ++i)
	{
		if (indexes.empty() || arr[indexes.top()] <= arr[i]) {
			indexes.push(i);
			continue;
		} else {
			while (!indexes.empty() && arr[i] < arr[indexes.top()]) {
				int topEle =  arr[indexes.top()];
				indexes.pop();
				int left, right;
				if (indexes.empty()) {
					left = 0;
				} else {
					left = indexes.top();
				}
				right = i - 1;
				int width = right - left;
				max_area = max(max_area, width * topEle);

			}
			indexes.push(i);
		}
	}
	while (!indexes.empty()) {
		int topEle =  arr[indexes.top()];
		indexes.pop();
		int left, right;
		if (indexes.empty()) {
			left = 0;
		} else {
			left = indexes.top();
		}
		right = n - 1;
		int width = right - left;
		max_area = max(max_area, width * topEle);
	}
	return max_area;
}
int main(int argc, char const *argv[])
{
	int arr[9] = {0,100, 3, 2, 5, 6, 4, 5, 7};
	int max_Area = histogram(arr, 9);
	cout << max_Area << endl;
	return 0;
}




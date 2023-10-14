#include <iostream>
using namespace std;
int floorSqrt(int x)
{
	// Base cases
	if (x == 0 || x == 1)
		return x;

	// Do Binary Search for floor(sqrt(x))
	int start = 1, end = x / 2, ans;
	while (start <= end) {
		int mid = (start + end) / 2;

		// If x is a perfect square
		int sqr = mid * mid;
		if (sqr == x)
			return mid;

		if (sqr <= x) {
			start = mid + 1;
			ans = mid;
		}
		else // If mid*mid is greater than x
			end = mid - 1;
	}
	return ans;
}

// Driver program
int main()
{
	cout << "Enter the number " << endl;
    int x;
    cin >> x;
	cout << floorSqrt(x) << endl;
	return 0;
}

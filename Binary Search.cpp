#include<iostream>
using namespace std;
//
//void heapSort(int* arr)
//{
//
//}

int BS(int* arr, int l, int r, int x) {
	if (l > r) return -1;

	int mid = l + (r - l) / 2;

	if (arr[mid] == x)return mid;
	if (arr[mid] > x) {
		return BS(arr, l, mid - 1, x);
	}
	else return BS(arr, mid + 1, r, x);
}

int main()
{
	int size = 10;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int x;
	cin >> x;
	cout << BS(arr, 0, size - 1, x);


}
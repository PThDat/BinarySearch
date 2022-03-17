template <size_t N>
int BinarySearch(int (&arr)[N], int target)
{
	int left = 0;
	int right = N - 1;

	while (right >= left)
	{
		int mid = (right + left) / 2;

		if (arr[mid] == target)
			return mid;

		if (arr[mid] > target)
			right = mid - 1;
		else if (arr[mid] < target)
			left = mid + 1;
	}

	return -1;
}

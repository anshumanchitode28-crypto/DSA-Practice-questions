/*lOGIC In this we apply the search on array to find the target by using binary search instead of
 linear search by optimizing the time complexity to O(logn) .
 In this we find the mid of the array then divide the work in two part to find the target in specific limit*/

#include <iostream>
using namespace std;
#include <vector>

int binarySearch(vector<int> arr, int target)
{
    int st = 0, end = arr.size() - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] > target)
        { // left side
            end = mid - 1;
        }
        else if (arr[mid] < target)
        { // right side
            st = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main() {
 vector<int> arr = {1,3,4,5,7,8,9};
 int target = 7 ;
 cout<< binarySearch(arr , target);

 return 0;
}


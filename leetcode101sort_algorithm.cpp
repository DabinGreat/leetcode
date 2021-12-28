#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


// 快排
// void quick_sort(vector<int>& nums, int l, int r) {
//     if(l+1 >= r) return;
//     int first = l, last = r-1, key = nums[first];
//     while(first < last) {
//         while(first < last && nums[last] > key) {
//             last--;
//         }
//         nums[first] = nums[last];
//         while(first < last && nums[first] < key) {
//             first++;
//         }
//         nums[last] = nums[first];
//     }
//     nums[first] = key;
//     quick_sort(nums, l, first);
//     quick_sort(nums, first+1, r);
// }

// int main() {
//     vector<int> nums{1,34,3452,23,52};
//     quick_sort(nums, 0, 5);
//     for(int i=0; i<nums.size(); ++i) {
//         cout << nums[i] << endl;
//     }
//     return -1;
// }

// 归并
// void merge_sort(vector<int>& nums, int l, int r, vector<int>& temp) {
//     if(l+1 >= r) return;
//     int m = l + (r-l) / 2;
//     merge_sort(nums, l, m, temp);
//     merge_sort(nums, m, r, temp);
//     int p = l, q = m, i = l;
//     while(p < m || q < r) {
//         if(q >= r || (p < m && nums[p] <= nums[q])) {
//             temp[i++] = nums[p++];
//         } else {
//             temp[i++] = nums[q++];
//         }
//     }
//     for(i=l; i<r; ++i) {
//         nums[i] = temp[i];
//     }
// }

// int main() {
//     vector<int> nums{1,34,3452,23,52};
//     vector<int> temp(5, 0);
//     merge_sort(nums, 0, 5, temp);
//     for(int i=0; i<nums.size(); ++i) {
//         cout << nums[i] << endl;
//     }
//     return -1;
// }

// 插入
// void insert_sort(vector<int>& nums) {
//     for(int i=0; i<nums.size(); ++i) {
//         for(int j=i; j>0 && nums[j] < nums[j-1]; j--) {
//             swap(nums[j], nums[j-1]);
//         }
//     }
// }
 
// int main() {
//     vector<int> nums{1,34,3452,23,52};
//     insert_sort(nums);
//     for(int i=0; i<nums.size(); ++i) {
//         cout << nums[i] << endl;
//     }
//     return -1;
// }

// void bubble_sort(vector<int>& nums, int n) {
//     bool swapped;
//     for (int i=0; i<n-1; ++i) {
//         swapped = false;
//         for (int j=1; j<n-i; ++j) {
//             if(nums[j] < nums[j-1]) {
//                 swap(nums[j], nums[j-1]);
//                 swapped = true;
//             }
//         }
//         if (!swapped) {
//             break;
//         }
//     }
// }

// int main() {
//     vector<int> nums{1,5,3};
//     int n = 3;
//     bubble_sort(nums, n);
//     for(int i=0; i<n; ++i) {
//         cout << nums[i] << endl;
//     }
//     return -1;
// }

// void select_sort(vector<int>& nums, int n) {
//     for(int i=0; i<n-1; ++i) {
//         int mid = i;
//         for(int j=i+1; j<n; ++j) {
//             if(nums[j] < nums[mid]) {
//                 mid = j;
//             }
//         }
//         swap(nums[i], nums[mid]);
//     }
// }

// 215. Kth Largest Element in an Array

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// 69. Sqrt(x) (Easy)
// int mySqrt(int a) {
//     if(a==0) return a;
//     int l=1, r=a, mid, sqrt;
//     while(l <= r) {
//         mid = l + (r - l) / 2;
//         if(mid*mid == a) {
//             return mid;
//         } else if(mid*mid > a) {
//             r = mid - 1;
//         } else {
//             l = mid + 1;
//         }
//     }
//     return r;
// }

// int main() {
//     int a = 15;
//     int ans = mySqrt(a);
//     cout << ans << endl;
//     return -1;
// }

// 34. Find First and Last Position of Element in Sorted Array (Medium)
// int lower_bound(vector<int>& nums, int target) {
//     int l=0, r=nums.size(), mid;
//     while(l < r) {
//         mid = (l + r) / 2;
//         if(nums[mid] >= target) {
//             r = mid;
//         } else {
//             l = mid + 1;
//         }
//     }
//     return l;
// }

// int upper_bound(vector<int>& nums, int target) {
//     int l=0, r=nums.size(), mid;
//     while(l < r) {
//         mid = (l + r) / 2;
//         if (nums[mid] > target) {
//             r = mid;
//         } else {
//             l = mid + 1;
//         }
//     }
//     return l;
// }

// vector<int> searchRange(vector<int>& nums, int target) {
//     if(nums.empty()) return vector<int>{-1, -1};
//     int lower = lower_bound(nums, target);
//     int upper = upper_bound(nums, target) - 1;
//     if(nums[lower] != target || nums[upper] != target) {
//         return vector<int>{-1, -1};
//     }
//     return vector<int>{lower, upper};
// }

// int lower_bound(vector<int>& nums, int target) {
//     int l = 0, r = nums.size() - 1;
//     while(l <= r) {
//         int mid = l + (r - l) / 2;
//         if(target <= nums[mid]) {
//             r = mid - 1;
//         } else {
//             l = mid + 1;
//         }
//     }
//     if(nums[l] == target) return l;
//     if(l < nums.size()) return l-1;
//     return -1;
// }

// int upper_bound(vector<int>& nums, int target) {
//     int l = 0, r = nums.size() - 1;
//     while(l <= r) {
//         int mid = l + (r - l) / 2;
//         if(target >= nums[mid]){
//             l = mid + 1;
//         } else {
//             r = mid - 1;
//         }
//     }
//     if(nums[l-1] == target) return l-1;
//     if(l < nums.size()) return l;
//     return -1;
// }


// int main() {
//     vector<int> nums{5, 7, 7, 8, 8, 10};
//     int target = 9;
//     // vector<int> ans = searchRange(nums, target);
//     // int ans = lower_bound(nums, target);
//     int ans = upper_bound(nums, target);
//     // cout << ans[0] << ' ' << ans[1] << endl;
//     cout << ans << endl;
//     return -1;
// }

// 81. Search in Rotated Sorted Array II (Medium)
//
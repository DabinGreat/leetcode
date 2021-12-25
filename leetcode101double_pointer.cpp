#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

// 167. Two Sum II - Input array is sorted (Easy)
// vector<int> twoSum(vector<int>& numbers, int target) {
//     int l=0, r=numbers.size()-1, sum; 
//     while(l<r) {
//         sum = numbers[l] + numbers[r];
//         if(sum == target) break;
//         if(sum < target) ++l;
//         else --r;
//     }
//     return vector<int>{l+1, r+1};
// }

// int main() {
//     vector<int> numbers{2, 7, 11, 15};
//     int target=9;
//     vector<int> ans = twoSum(numbers, target);
//     cout << ans[0] << " " << ans[1] << endl;
//     return -1;
// }

// 88. Merge Sorted Array (Easy)
// void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//     int pos = m-- + n-- -1;
//     while(m>=0 && n>=0) {
//         nums1[pos--] = nums1[m] >= nums2[n] ? nums1[m--] : nums2[n--];
//     }
//     while(n>=0) {
//         nums1[pos--] = nums2[n--];
//     }
// }

// int main() {
//     vector<int> n1{1,2,3,0,0,0};
//     vector<int> n2{2,5,6};
//     int m=3, n=3;
//     merge(n1, m, n2, n);
//     for(auto i : n1) {
//         cout << i << " ";
//     }
//     cout << endl;
// }

// 142. Linked List Cycle II (Medium)
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };

// ListNode *detectCycle(ListNode *head) {
//     ListNode *slow = head, *fast = head;
//     do {
//         if(!fast || !fast->next) return nullptr;
//         fast = fast->next->next;
//         slow = slow->next;
//     } while(fast != slow);

//     fast = head;
//     while(fast != slow) {
//         slow = slow->next;
//         fast = fast->next;
//     }
//     return fast;
// }

// 76. Minimum Window Substring (Hard)
// string minWindow(string S, string T) {
//     vector<int> chars(128, 0);
//     vector<bool> flag(128, false);
//     for(int i=0; i<T.size(); ++i) {
//         flag[T[i]] = true;
//         ++chars[T[i]];
//     }

//     int cnt=0, l=0, min_l=0, min_size=S.size()+1;
//     for(int r=0; r<S.size(); ++r) {
//         if(flag[S[r]]) {
//             if(--chars[S[r]] >= 0) {
//                 ++cnt;
//             }
//             while(cnt == T.size()) {
//                 if(r-l+1 < min_size) {
//                     min_l = l;
//                     min_size = r-l+1;
//                 }
//                 if(flag[S[l]] && ++chars[S[l]] > 0) {
//                     --cnt;
//                 }
//                 ++l;    
//             }
//         }
//     }
//     return min_size > S.size() ? "" : S.substr(min_l, min_size);
// }

// int main() {
//     string S = "ADOBECODEBANC", T = "ABC";
//     string ans = minWindow(S, T);
//     cout << ans << endl;
//     return -1;
// }

// 633. Sum of Square Numbers (Easy)
// bool judgeSquareSum(int c) {
//     int l = 0, r = (int)sqrt(c);
//     while(l <= r) {
//         int s = l*l + r*r;
//         if(s == c) return true;
//         else if(s < c) l++;
//         else r--;
//     }
//     return false;
// }

//680. Valid Palindrome II (Easy)
// bool validPalindrome(string s) {
//     int l=0, r=s.size()-1;
//     while(l < r) {
//         if(s[l] != s[r]) {
//             return isOK(s, l+1, r) || isOK(s, l, r-1);
//         }
//         l++;
//         r--;
//     }
//     return true;
// }

// bool isOK(string s, int l, int r) {
//     while(l < r) {
//         if(s[l] != s[r]) return false;
//         l++;
//         r--;
//     }
//     return true;
// }

// int main() {
//     string s = "aca";
//     bool ans = validPalindrome(s);
//     cout << ans << endl;
//     return -1;
// }

// Longest Word in Dictionary through Deleting (Medium)
// string findLongestWord(string s, vector<string>& dictionary) {
//     int n = dictionary.size();
//     string ans = "";
//     for(int i=0; i<n; ++i) {
//         string t = dictionary[i];
//         int x = 0, y = 0;
//         while(y < s.size()) {
//             if(t[x] == s[y]) x++;
//             y++;
//         }
//         if(x == t.size()) {
//             if(t.size() > ans.size() || (t.size() == ans.size() && t < ans)) {
//                 ans = t;
//             }
//         }
//     }
//     return ans;
// }

// 340. Longest Substring with At Most K Distinct Characters (Hard)
// locked
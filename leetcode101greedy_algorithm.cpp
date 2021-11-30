#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

// 455 Assign Cookies(Easy)
// int findContentChildren(vector<int>& children, vector<int>& cookies) {
//     sort(children.begin(), children.end());
//     sort(cookies.begin(), cookies.end());
//     int child=0, cookie=0;
//     while(child < children.size() && cookie < cookies.size()) {
//         if(children[child] <= cookies[cookie]) child++;
//         cookie++;
//     }
//     return child;
// }

// int main() {
//     vector<int> children{1,2};
//     vector<int> cookies{1,2,3};
//     int ans = findContentChildren(children, cookies);
//     cout << ans << endl;
//     return -1;
// }


// 135 Candy(Hard)
// int candy(vector<int>& ratings) {
//     int size =  ratings.size();
//     if(size<2) return size;
//     vector<int> num(size, 1);
//     for(int i=1; i<size; ++i) {
//         if(ratings[i]>ratings[i-1]) {
//             num[i] = num[i-1] + 1;
//         }
//     }
//     for(int i=size-2; i>=0; i--) {
//         if(ratings[i] > ratings[i+1] && num[i] <= num[i+1]) {
//             num[i] = num[i+1] + 1;
//         }
//     }
//     return accumulate(num.begin(), num.end(), 0);   
// }

// int main() {
//     vector<int> ratings{1, 0, 2, 7, 4, 3};
//     int ans = candy(ratings);
//     cout << ans << endl;
//     return -1;
// }

// 435 Non-overlapping Intervals(Medium)
// int eraseOverlapIntervals(vector<vector<int>>& intervals) {
//     if(intervals.empty()) return 0;
//     int n = intervals.size();
//     sort(intervals.begin(), intervals.end(), [](vector<int> a, vector<int> b) {
//         return a[1] < b[1];
//     }); 
//     int total = 0, prev = intervals[0][1];
//     for(int i=1; i<n; ++i) {
//         if(intervals[i][0] < prev) {
//             total++;
//         } else {
//             prev = intervals[i][1];
//         }
//     }
//     return total;
// }

// int main() {
//     vector<vector<int>> intervals{{1,2}, {2,4}, {1,3}};
//     int ans = eraseOverlapIntervals(intervals);
//     cout << ans << endl;
//     return -1;
// }

// 605 Can Place Flowers(Easy)
/*
从左向右遍历花坛，在可以种花的地方就种一朵，能种就种（因为在任一种花时候，
不种都不会得到更优解），就是一种贪心的思想,这里可以种花的条件是：

1.自己为空
2.左边为空 或者 自己是最左
3.右边为空 或者 自己是最右
*/
// bool placeFlowers(vector<int>& flowers, int n) {
//     for(int i=0; i<flowers.size(); ++i) {
//         if(flowers[i]==0 && (flowers[i-1]==0 || i==0) &&
//          (flowers[i+1]==0 || i==flowers.size()-1)) {
//             flowers[i] = 1;
//             n--;
//             if(n<=0) return true;
//         }
//     }
//     return n<=0;
// }

// int main() {
//     int n = 3;
//     vector<int> flowers{1, 0, 0, 0, 0, 0, 1};
//     bool ans = placeFlowers(flowers,  n);
//     cout << ans << endl;
// }

// 452 Minimum Number of Arrows to Burst Ballons(Medium)
// int findMinArrowShots(vector<vector<int>>& balloons) {
//     int n = balloons.size();
//     if(n <= 1) return n;
//     sort(balloons.begin(), balloons.end(), [](const vector<int>& a, const vector<int>& b) {
//         return a[1] < b[1];
//     });

//     int arrow = 1, prev = balloons[0][1];
//     for(int i=1; i<n; ++i) {
//         if(balloons[i][0] > prev) {
//             ++arrow;
//             prev = balloons[i][1];
//         }
//     }
//     return arrow;
// }

// int main() {
//     vector<vector<int>> balloons{{1,2}, {2,3}, {3,4}, {4,5}};
//     int ans = findMinArrowShots(balloons);
//     cout << ans << endl;
//     return -1;
// }

// 763 Partition Labels(Medium)
// vector<int> partitionLabels(string s) {
//     unordered_map<char, int> map;
//     for(int i=0; i<s.size(); ++i) {
//         map[s[i]] = i;
//     }
//     vector<int> ans;
//     int start = 0, end = 0;
//     for(int i=0; i<s.size(); ++i) {
//         int end = max(map[s[i]], end);
//         if(i == end) {
//             ans.push_back(end-start+1);
//             start = end+1;
//         }
//     }
//     return ans;
// }

// int main() {
//     string s = "ababcbacadefegdehijhklij";
//     vector<int> ans = partitionLabels(s);
//     for(auto i:ans) {
//         cout << i << ' ';
//     }
//     cout << endl;
//     return -1;
// }

// 122 Best Time to Buy and Sell Stock II(Easy)
// int maxProfit(vector<int>& prices) {
//     int max_profit = 0;
//     for(int i=1; i<prices.size(); i++) {
//         max_profit += max(0, prices[i]-prices[i-1]); 
//     }
//     return max_profit;
// } 

// int main() {
//     vector<int> prices{7,1,5,3,6,4};
//     int ans = maxProfit(prices);
//     cout << ans << endl;
//     return -1;
// }

// 406 Queue Reconstruction by Height (Medium)
// static bool cmp(const vector<int>& a, const vector<int>& b) {
//     if(a[0] == b[0]) return a[1] < b[1];
//     return a[0] > b[0];
// }

// vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
//     sort(people.begin(), people.end(), cmp);
//     vector<vector<int>> queue;
//     for(int i=0; i<people.size(); ++i) {
//         queue.insert(queue.begin() + people[i][1], people[i]);
//     }
//     return queue;
// }

// int main() {
//     vector<vector<int>> people{{7,0}, {4,4}, {7,1}, {5,0}, {6,1}, {5,2}};
//     vector<vector<int>> ans = reconstructQueue(people);
//     for(int i=0; i<people.size(); ++i) {
//         cout << ans[i][0] << " " << ans[i][1] << endl;
//     }
//     return -1;
// }

// 665. Non-decreasing Array (Easy)
bool checkPossibility(vector<int>& nums) {
    int n = nums.size();
    if(n<2) return true;
    bool flag = nums[0] <= nums[1] ? true : false;
    for(int i=1; i<n-1; ++i) {
        if(nums[i] > nums[i+1]) {
            if(flag){
                if(nums[i-1] <= nums[i+1]) {
                    nums[i] = nums[i+1];
                } else {
                    nums[i+1] = nums[i];
                }
                flag = false;
            } else {
                return false;
            }
        }
    }
    return true;
}

int main() {
    vector<int> nums{4,2,1};
    bool ans = checkPossibility(nums);
    cout << ans << endl; 
    return -1;
}


#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

// This code merges two sorted arrays nums1 and nums2 into nums1 as one sorted array.
class Solution {
public:
    void merge(vector<int>& nums1, int mid, vector<int>& nums2, int ne){
        // for(int i = 0;i<n;i++){
        //     nums1[m+i] = nums2[i];
        // }        
        // sort(nums1.begin(), nums1.end());
        int m = mid-1;
        int n = ne-1;
        int end = mid+ne-1;
        while(n>=0){
            if(m>=0 && nums1[m]>nums2[n]){
                nums1[end] = nums1[m];
                m--;
            }else{
                nums1[end] = nums2[n];
                n--;
            }
            end--;
        }
    }

};

int main() {
    Solution sol;
    vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int> nums2 = {2,5,6};
    int n = 3;
    sol.merge(nums1, m, nums2, n);
    
    cout << "Merged array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
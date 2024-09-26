#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merge;
        for(int i=0 ; i<nums1.size() ; i++){
            merge.push_back(nums1[i]);
        }
        for(int i=0 ; i<nums2.size() ; i++){
            merge.push_back(nums2[i]);
        }
        sort(merge.begin(),merge.end());
        if(merge.size()%2==1) return merge[merge.size()/2];
        else if(merge.size()%2==0) return (double)(merge[merge.size()/2]+merge[merge.size()/2-1])/2;
        else return -1;
    }
};
int main(){
    vector<int> a1 = {1,3};
    vector<int> a2 = {2};
    Solution solution;
    double result = solution.findMedianSortedArrays(a1, a2);
    cout << result;
}
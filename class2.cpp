#include<iostream>
using namespace std;
#include<vector>
#include<climits>

class Solution {
public:
    vector<int> flowerDay(vector<int>& arr,int day) {
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] == day) {
                arr[i] = 1;
            }
        }
        return arr;
    }

    int pairs(vector<int> arr,int f) {
        int counter = 0;
        int pair = 0;
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] > 0) {
                counter++;
                if(counter == f) {
                    pair++;
                    counter = 0;
                }
            }
            else {
                counter = 0;
            }
        }
        return pair;
    } 

    int maxDays(vector<int>& bloomDay) {
        int m = INT_MIN;
        for(int x: bloomDay) {
            if(m < x) {
                m = x;
            }
        }
        return m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        vector<int> flowerArray(bloomDay.size(),-1);
        int totalFlower = m*k;
        int minDays = maxDays(bloomDay);
        int res = -1;
        if(totalFlower > bloomDay.size()) {
            return res;
        }
        else {
            for(int i=1; i<=minDays; i++) {
                vector<int> v = flowerDay(bloomDay,i);
                int p = pairs(v,k);
                if(p >= m) {
                    res = i;
                }
            }
        }
        return res;
    }
};

int main() {
    Solution s;
    vector<int> t = {1,10,3,10,2};
    cout<<s.minDays(t,3,1)<<endl;
    return 0;
}
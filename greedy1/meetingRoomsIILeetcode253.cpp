#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int minMeetingRooms(vector<vector<int>>& intervals) {
    vector<int> st, end;
    for(auto ele : intervals) {
        st.push_back(ele[0]);
        end.push_back(ele[1]);
    }
    sort(st.begin(), st.end());
    sort(end.begin(), end.end());
    int ans = 0;
    int rooms = 0;
    int i = 0, j = 0;
    while(i < st.size() && j < end.size()) {
        if(st[i] == end[j]) {
            i++;
            j++;
        }
        else if(st[i] > end[j]) {
            j++;
            rooms--;
        }
        else {
            i++;
            rooms++;
        }
        ans = max(ans, rooms);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> intervals;
    for (int i = 0; i < n; i++)
    {
        int st, end;
        cin>>st>>end;
        intervals.push_back({st, end});
    }
    cout<<minMeetingRooms(intervals);
}
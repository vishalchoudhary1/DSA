// leetcode Question 539. Minimum Time Difference
#include<iostream>
#include<string.h>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int findMinDifference(vector<string>& timePoints) {
    //* first: we will convert time string into minutes integer
    vector<int> minutes;
    for (int i = 0; i < timePoints.size(); i++)
    {
        string curr = timePoints[i];
        int hours = stoi(curr.substr(0,2));
        int minute = stoi(curr.substr(3,2));
        int totalMinute = hours*60 + minute;
        minutes.push_back(totalMinute);
    }
    //* Second: sort to save no. of comparisons & time 
    sort(minutes.begin(),minutes.end());

    //* Third: difference and calculate minimum difference
    int mini = INT_MAX;
    for (int i = 0; i < minutes.size()-1; i++)
    {
        int diff = minutes[i+1]-minutes[i];
        mini = min(mini,diff);
    }

    //* fourth: checking last case
    int last = (minutes[0]+1440) - minutes[minutes.size()-1];
    mini = min(mini,last);
    return mini;
}

int main(){
    vector<string> timePoints = {"01:00","23:59"};
    cout<<findMinDifference(timePoints);
}
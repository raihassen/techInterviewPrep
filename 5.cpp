/*
Merge overlapping intervals. See below for example:

[1,3] [2,5] [8,9] => [1,5] [8,9]
[1,3] [2,6] [4,99] => [1,99]
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int, int> >  mergeIntervals(vector<pair<int, int> > intervals){
	cout<<"Started merging intervals";
	sort(intervals.begin(), intervals.end());
	vector<pair<int, int> > ans;
	int start = intervals[0].first;	
	int end = intervals[0].second;
	for (int i=1; i<intervals.size(); i++){
		if (intervals[i].first<=end){
			end = max(end, intervals[i].second);
		} else {
			ans.push_back(make_pair(start, end));
			start = intervals[i].first;
			end = intervals[i].second;
		}
	}
	ans.push_back(make_pair(start, end));
	cout<<"finished merging intervals";
	return ans;
}
int main(){
	int n;
	cin>>n;
	vector<pair<int, int> > intervals;
	for (int i=0; i<n; i++){
		int start, end;
		cout<<"Enter the interval\n";
		cin>>start>>end;
		intervals.push_back(make_pair(start, end));
	}
	cout<<"Hi there";
//	mergeIntervals(intervals);
	vector<pair<int, int> > result = mergeIntervals(intervals);
	for (int i=0; i<result.size(); i++){
		cout<<result[i].first<<" "<<result[i].second<<"\n";
	}

}


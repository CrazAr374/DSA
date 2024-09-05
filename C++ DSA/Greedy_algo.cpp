#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b) {
    return a.second < b.second;
}

int activitySelection(vector<pair<int, int>>& activities) {
    sort(activities.begin(), activities.end(), compare);
    int count = 1;
    int end = activities[0].second;

    for (int i = 1; i < activities.size(); i++) {
        if (activities[i].first >= end) {
            count++;
            end = activities[i].second;
        }
    }
    return count;
}

int main() {
    vector<pair<int, int>> activities = {{1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}, {5, 9}};
    cout << "Maximum number of activities: " << activitySelection(activities) << endl;
    return 0;
}

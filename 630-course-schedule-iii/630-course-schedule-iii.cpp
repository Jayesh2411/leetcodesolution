bool comp(vector<int> a, vector<int> b)
{
    return a[1]<b[1];
}
class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(),courses.end(),comp);
        priority_queue<int> maxHeap;
        int time = 0;
        for(auto it : courses)
        {
            time+=it[0];
            maxHeap.push(it[0]);
            while(time > it[1])
            {
                time-=maxHeap.top();
                maxHeap.pop();   
            }
        }
        return maxHeap.size();
    }
};
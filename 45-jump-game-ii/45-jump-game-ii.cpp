class Solution {
public:
    int jump(vector<int>& nums) {
        int position = nums.size() - 1;
	int steps = 0;
	while (position != 0) {
		for (int i = 0; i < position; i++) {
			if (nums[i] >= position - i) {
				position = i;
				steps++;
				break;
			}
		}
	}
	return steps;
    }
};
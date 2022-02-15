class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int countA[] = {0,0,0,0,0,0,0}; 
        int countB[] = {0,0,0,0,0,0,0}; // countB[i] records the occurrence of i in B.
        int same[] = {0,0,0,0,0,0,0}; // same[k] records the occurrence of k, where k == A[i] == B[i].
        for (int i = 0; i < tops.size(); ++i) {
            ++countA[tops[i]];
            ++countB[bottoms[i]];
            if (tops[i] == bottoms[i]) { ++same[tops[i]]; }
        }
        for (int i = 1; i < 7; ++i) {
            if (countA[i] + countB[i] - same[i] >= tops.size()) {
                return min(countA[i], countB[i]) - same[i];
            }
        }
        return -1;
    }
};
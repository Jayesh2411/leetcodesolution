class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int countRot = 0, minSteps = INT_MAX, c, b;
        for(int i = 1; i <= 6; i++)
        {
            countRot = 0;
            for(c=0; c < tops.size(); c++)
            {
                if(tops[c] != i)
                    {if(bottoms[c] == i)
                        {++countRot;}
                    else
                        {break;}}
            }
            if(c == tops.size() && countRot < minSteps)
                {minSteps = countRot;}
        }
        for(int i = 1; i <= 6; i++)
        {
            countRot = 0;
            for(b=0; b < bottoms.size(); b++)
            {
                if(bottoms[b] != i)
                    if(tops[b] == i)
                        ++countRot;
                    else
                        break;
            }
            if(b == bottoms.size() && countRot < minSteps)
                minSteps = countRot;
        }
    if(minSteps!=INT_MAX)
     return minSteps;
    else
        return -1;
    }
};
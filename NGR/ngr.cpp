#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
int* NGR(int* v)
{
    stack<int> store;
    int len = 5;
    int *result = new int(len);
    int i,pop,flag=true;
    for(i = len-1;i>=0;i--)
    {
        flag = true;
        if(store.empty())
        {
            result[i]=-1;
        }
        else{
            while(!store.empty()&&flag)
            {
                if(store.top()>v[i])
                {
                    result[i]=store.top();
                    flag = false;
                }
                else
                    store.pop();
            }
            if(flag)
                result[i]=-1;
        }
        store.push(v[i]);
    }
    return result;
}
int main()
{
    int arr[5] = {10,4,3,6,12};
    int *res = NGR(arr);
    for(int i = 0; i < 5; i++)
        cout<<res[i]<<" ";
    return 0;
}
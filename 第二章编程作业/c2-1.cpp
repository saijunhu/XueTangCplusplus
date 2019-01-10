/* students please write your program here */
/* students please write your program here */
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;
    int* nums = new int[n];
    int sum=0;
    for (int i = 0; i < n; ++i)
    {
        cin>>nums[i];
        sum+=nums[i];
    }
    int min_num=nums[0];
    int max_num=nums[0];
    for (int i = 0; i < n; ++i)
    {
        min_num=min(min_num,nums[i]);
        max_num=max(max_num,nums[i]);
    }
    cout<<sum<<" "<<min_num<<" "<<max_num;
    return 0;
}
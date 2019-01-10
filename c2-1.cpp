/* students please write your program here */
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
//    cout<<"please input the n"<<endl;
    int n;
    cin>>n;
    int[n] nums;
    int sum=0;
    for (int i = 0; i < n; ++i)
    {
        cout<<"please input the num"<<endl;
        cin>>nums[i];
        sum+=num[i];
    }
    int min_num=nums[0];
    int max_num=nums[0];
    for (int i = 0; i < n; ++i)
    {
        min_num=min(min_num,nums[i]);
        max_num=max(max_num,mums[i]);
    }
    cout<<sum<<" "<<min_num<<" "<<max_num;
    return 0;
}
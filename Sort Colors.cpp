class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a=0,b=0,c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]== 0)
            {
                a++;
            }
            if(nums[i]== 1)
            {
                b++;
            }
            if(nums[i]== 2)
            {
                c++;
            }
        }
        
        int arr[nums.size()];
        for(int i=0; i<a; i++)
        {
            arr[i]=0;
        }
        for(int i=a; i<a+b; i++)
        {
            arr[i]=1;
        }
        for(int i=a+b; i<a+b+c; i++)
        {
            arr[i]=2;
        }
        for(int i=0;i<nums.size();i++)
        {
            cout<< arr[i]<<"," ;
        }
    }
};

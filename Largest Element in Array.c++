class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int maxe = 0;
        for(int i= 0; i< arr.size(); i++){
            if( arr[i] > maxe){
                maxe = arr[i];
            }
        }return maxe;
    }
};


#include<iostream>
#include <vector>

int searchInsert(std::vector<int>& nums, int target)
{
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] == target)
        {
            return i;
        }
        else
        {
            if (nums[i] < target)
            {
                continue;
            }
            else
            {
                return i;
            }
        }
    }

    return nums.size();
}

int main()
{
    // TEST CASES
    std::vector<int> numVec1 = { 1, 3, 5, 6 };
    std::vector<int> numVec2 = { 1 };
    int target1 = 5;
    int target2 = 2;
    int target3 = 7;
    int target4 = 0;

    int indexPos = searchInsert(numVec1, target3);

    std::cout << "Target index pos: " << indexPos << '\n';

	return 0;
}
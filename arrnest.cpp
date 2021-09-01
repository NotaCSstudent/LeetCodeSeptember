    #include <iostream>
    #include <string>
    #include <vector>
    #include <stack>
    
    int arrayNesting(vector<int>& nums) {
      
        
        
        
    int answer = 0;
    
    for(int i = nums.size() - 1; i >= 0; i--)
      if(nums[i] != -1){
        int tmp = 0;
        
        for(int id = i, new_id; nums[id] != -1; id = new_id ) 
          tmp++, new_id = nums[id], nums[id] = -1;
        
        answer = max(answer, tmp);
        if(answer >= i) return answer;
      }
      
    return answer;
    }

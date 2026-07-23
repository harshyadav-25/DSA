class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size();
        
        queue<int>q;
       
        for(int ele:students){
            q.push(ele);
        }
        int i = 0;
        int count = 0; 
        while(q.size()>0 && count!= q.size()){

            
            
            int ele1 = q.front();
            int ele2 = sandwiches[i];
            if(ele1 == ele2){
                q.pop();
                i++;
                count = 0;
                
            }
            else{
                q.push(q.front());
                q.pop();
                count++;
            }

        }
        return q.size();

        
    }
};
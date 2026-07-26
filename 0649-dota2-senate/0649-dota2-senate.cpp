class Solution {
public:
    string predictPartyVictory(string senate) {
        int n = senate.length();
        int Rc = 0;
        int Dc = 0;
        for(char c: senate){
            if(c == 'R') Rc++;
            else Dc++;
        }
        if(Rc == 0) return "Dire";
        if(Dc == 0) return "Radiant";
        queue<char>q;
        int Rban = 0;
        int Dban = 0;
        for(char s: senate){
            q.push(s);
        }
        while(Rc > 0 && Dc >0){
            char curr = q.front();
            q.pop();
            if(curr == 'R'){
                if(Rban > 0){
                    Rban--;
                    Rc--;
                }
            
                else{
                    Dban++;
                    q.push('R');
                    
                }
            }
            else{//D
                if(Dban > 0){
                    Dban--;
                    Dc--;

                }
                else{
                    Rban++;
                    q.push('D');
                }


            }
        
        }
        if(Rc > 0) return "Radiant";
        else return "Dire";
        
    }
};
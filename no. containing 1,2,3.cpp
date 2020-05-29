void findWinner(vector<string>& votes) 
    { 
          
        // Insert all votes in a hashmap 
        map<string,int> mapObj ; 
        for (auto& str : votes) 
        { 
            mapObj[str]++; 
        } 
   
        // Traverse through map to find the candidate 
        // with maximum votes. 
        int maxValueInMap = 0; 
        string winner; 
        for (auto& entry : mapObj) 
        { 
            string key  = entry.first; 
            int val = entry.second; 
            if (val > maxValueInMap) 
            { 
                maxValueInMap = val; 
                winner = key; 
            } 
   
            // If there is a tie, pick lexicographically 
            // smaller. 
            else if (val == maxValueInMap && 
                winner>key) 
                winner = key; 
        } 
        cout << winner << endl; 
    } 
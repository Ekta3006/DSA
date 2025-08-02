// Last updated: 8/2/2025, 5:11:00 PM
class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int s=0;
        int c=capacity;
        int i=0;
        while(i<plants.size()){
            if(plants[i]<=c){
                c-=plants[i];
            }
            else{
                c=capacity;
                s+=(i*2);
                c-=plants[i];
            }
            i++;
            s++;
        }
        return s;
    }
};
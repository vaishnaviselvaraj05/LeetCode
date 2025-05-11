class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int space=n*n;
        int weight=maxWeight/w;
        return min(space,weight);
    }
};
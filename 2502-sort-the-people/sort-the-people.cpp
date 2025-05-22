class Solution {
public:
    struct People
    {
        string name;
        int height;
    };
    static bool comp(People& a,People& b)
    {
        return a.height > b.height;
    }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<People> people(n);
        for(int i = 0 ; i < n ; i++)
        {
            people[i].height=heights[i];
            people[i].name=names[i];
        }
        sort(people.begin(),people.end(),comp);
        vector<string> result;
        for(auto i:people)
        {
            result.push_back(i.name);
        }
        return result;
    }
};
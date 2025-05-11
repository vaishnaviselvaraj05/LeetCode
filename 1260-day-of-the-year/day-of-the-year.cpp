class Solution {
public:
    int dayOfYear(string date) {
        int year=stoi(date.substr(0,4));
        int month=stoi(date.substr(5,2));
        int day=stoi(date.substr(8,2));
        int res=0;
        for(int m=1;m<month;m++){
            if(m==1||m==3||m==5||m==7||m==8||m==10||m==12) res+=31;
            else if(m==4||m==6||m==9||m==11) res+=30;
            else if(m==2){
                if((year%4==0 && year%100!=0) || (year%400==0)) res+=29;
                else res+=28;
            }
        }
        res +=day;
        return res;
    }
};
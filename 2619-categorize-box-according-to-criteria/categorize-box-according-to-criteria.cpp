class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
       bool bulky=false;
       bool heavy=false;
       if(length >= 10000) bulky = true;
       if(width >= 10000) bulky=true;
       if(height >=10000) bulky=true;
       long long volume = 1LL *length*width*height;
       if(volume >= 1000000000) bulky=true;
       if(mass >= 100) heavy=true;
       if(bulky && heavy) return "Both";
       else if(bulky) return "Bulky";
       else if(heavy) return "Heavy";
       else return "Neither"; 
    }
};
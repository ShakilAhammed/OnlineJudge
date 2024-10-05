#include<iostream>

using namespace std;

class Solution{
    public:
        string reverseWords(string s){
            int len = s.length();
            string result = "";
            bool space = false;
            bool charFound = false;
            string newres = "";
            for (int i = len - 1; i >= 0; i--)
            {

                if(s[i] == ' ' && !space){
                    if(charFound){
                        int nlen = newres.length();
                        for (int i = 0; i < nlen/2; i++)
                        {
                            char r = newres[i];
                            newres[i] = newres[nlen - 1 - i];
                            newres[nlen - 1- i] = r;
                        }
                        
                        result += newres;
                        newres = "";
                    }
                    space = true;
                    charFound = false;
                    newres = "";
                }
                if(s[i] != ' '){
                    if(space && result != "")result+=" ";
                    newres += s[i];
                    if(i == 0){
                        int nlen = newres.length();
                        for (int i = 0; i < nlen/2; i++)
                        {
                            char r = newres[i];
                            newres[i] = newres[nlen - 1 - i];
                            newres[nlen - 1- i] = r;
                        }
                        
                        result += newres;
                        newres = "";
                    }
                    
                    charFound = true;
                    space = false;
                }
            }
            return result;
            
        }
};

int main(){

    return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
public:

    vector<string>result;

    vector<string>fullJustify(vector<string> &words, int maxWidth){

        string sen = "";
        for(int i = 0; i < words.size(); i++){
            string word = words[i];
            if(word.size() == maxWidth){
                if(sen.size() > 0){
                    justifySpace(sen, maxWidth);
                    sen = "";
                }
                sen = "";
                result.push_back(word);
                continue;
            }
            if((word + " " + sen).size() > maxWidth){
                justifySpace(sen, maxWidth);
                sen = "";
            }
            if(sen.size() > 0){
                sen += " ";
            }
            sen += word;
        }
        if(sen.size() > 0)  
        {
            cout<<sen<<endl;
            justifySpace(sen, maxWidth, true);  
        }
        return result;
    }

    void justifySpace(string sen, int len, bool isLast = false){
        // cout<<sen<<isLast<<endl;
        int space = len - sen.size();
        int n = sen.size();
        //handle corner case
        if(n == len){
            result.push_back(sen);
            return;
        }
        if(n == 0){
            string temp = "";
            for(int i = 0; i < len; i++){
                temp += " ";
            }
            result.push_back(temp);
            return;
        }
        //split the sentence into words
        vector<string>words;
        string temp = "";
        for(int i = 0; i < n; i++){
            if(sen[i] == ' '){
                words.push_back(temp + " ");
                temp = "";
            }else{
                temp += sen[i];
                if(i == n - 1){
                    words.push_back(temp);
                }
            }
        }

        //space distribuition
        //handle corner case
        if(words.size() == 1){
            string newSen = words[0];
            for(int i = 0; i < space; i++){
                newSen += " ";
            }
            result.push_back(newSen);
            return;
        }
        int spacePerWord = space / (words.size() - 1);
        int extraSpace = space % (words.size() - 1);
        string newSen = "";
        for(int i = 0; i < words.size(); i++){

            newSen += words[i];
            if(isLast){
                if(i == words.size() - 1){
                    for(int j = 0; j < space; j++){
                        newSen += " ";
                    }
                }
            }
            if(!isLast && i != words.size() - 1){
                for(int j = 0; j < spacePerWord; j++){
                    newSen += " ";
                }
                if(extraSpace > 0){
                    newSen += " ";
                    extraSpace--;
                }
            }
        }
        result.push_back(newSen);
    }


};

int main(){
    Solution s;
    vector<string>words = {"What","must","be","acknowledgment","shall","be"};
    vector<string>result = s.fullJustify(words, 16);
    for(auto sen: result){
        replace(sen.begin(), sen.end(), ' ', '*');
        cout << sen << endl;
    }
    // s.result.clear();
    // vector<string>words2 = {"This", "is", "an", "example", "of", "text", "justification."};
    // vector<string>result2 = s.fullJustify(words2, 16);
    // for(auto sen: result2){
    //     cout << sen << endl;
    // }
    // s.result.clear();
    // vector<string>words3 = {"Science","is","what","we","understand","well","enough","to","explain","to","a","computer.","Art","is","everything","else","we","do"};
    // vector<string>result3 = s.fullJustify(words3, 20);
    // for(auto sen: result3){
    //     cout << sen << endl;
    // }

    return 0;
}

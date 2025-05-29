#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;


class SolutionTimeLimitExceeded
{
public:
    unordered_map<string, short> wordMap;
    unordered_map<string, short> trackMap;

    void initTrackMap(vector<string> &words)
    {
        trackMap.clear();
        for (auto word : words)
        {
            trackMap[word] += 1;
        }
    }
    void resetMap(vector<string> &words)
    {
        wordMap.clear();
        for (auto word : words)
        {
            wordMap[word] = -1;
        }
    }

    vector<int> findSubstring(string s, vector<string> &words)
    {
        vector<int> res;
        int totalWordLen = words[0].length() * words.size();
        int wordLen = words[0].length();
        int sLen = s.length();
        if (sLen < totalWordLen)
            return res;
        int j = 0;
        resetMap(words);
        initTrackMap(words);
        while (j < wordLen)
        {
            int currWordCount = 0;
            int startIndex = j;
            for (int i = j; i < sLen; i += wordLen)
            {
                string word = s.substr(i, wordLen);
                // cout<<"DEBUG: "<<word<< " j : "<<j<<endl;
                if (wordMap[word] >= trackMap[word] && wordMap[word] != 0)
                {
                    currWordCount = wordLen;
                    resetMap(words);
                    int trackCount = trackMap[word];
                    int p = 1;
                    wordMap[word] = 1;
                    startIndex = i;
                    // startIndex = i;
                    // cout<<"DEBUG: "<<startIndex<<" start index"<<endl;
                    while(startIndex > 0)
                    {
                        string startWord = s.substr(startIndex - wordLen, wordLen);
                        if(wordMap[startWord] != 0 && wordMap[startWord] < trackMap[startWord]){
                            if(wordMap[startWord] == -1)
                                wordMap[startWord] = 1;
                            else if (wordMap[startWord] < trackMap[startWord])
                                wordMap[startWord] += 1;
                            currWordCount += wordLen;
                        }
                        else
                        {
                            break;  
                        }
                        startIndex-= wordLen;
                    }
                }
                else
                {
                    if (wordMap[word] == -1 || wordMap[word] != 0)
                    {
                        if (wordMap[word] == -1)
                            wordMap[word] = 1;
                        else wordMap[word] += 1;
                        currWordCount += wordLen;

                        if (currWordCount == totalWordLen)
                        {
                            res.push_back(startIndex);
                            string startWord = s.substr(startIndex, wordLen);
                            if(wordMap[startWord] > 1) 
                                wordMap[startWord] -= 1;
                            else
                                wordMap[startWord] = -1;
                            startIndex += wordLen;
                            currWordCount -= wordLen;
                        }
                        else if (currWordCount > totalWordLen)
                        {
                            currWordCount = wordLen;
                            resetMap(words);
                            wordMap[word] = 1;
                            startIndex = i;
                        }
                    }
                    else
                    {
                        currWordCount = 0;
                        resetMap(words);
                        startIndex = i + wordLen;
                    }
                }
            }
            ++j;
            resetMap(words);
        }

        return res;
    }
};

class Solution{
    public:
        unordered_map<string, short>trackWords;
        
        void mapWords(vector<string>& words){
            trackWords.clear();
            for(const auto word : words){
                trackWords[word] +=1;        
            }
        }
        vector<int>findSubstring(string s, vector<string>&words){
            int wordSize = words[0].size();
            int left = 0;
            int right = 0;
            int totalWordsLen = words.size() * wordSize;
            int p = 0;
            int senLen = s.size();

            if(senLen < totalWordsLen || words.size() == 0){
                return {};
            }
            vector<int>result;
            while(p < wordSize){
                left = right = p;
                mapWords(words);
                while(left <= right && left + totalWordsLen <= senLen){
                    // cout << "left: " << left << " right: " << right << endl;
                    if(right - left == totalWordsLen){
                        // cout<< "left: " << left << " right: " << right << endl;
                        result.push_back(left);
                        trackWords[s.substr(left, wordSize)] += 1;
                        left += wordSize;
                    }
                    else{
                        string word = s.substr(right, wordSize);
                        if(trackWords.find(word) != trackWords.end()){
                            if(trackWords[word] > 0){
                                trackWords[word] -= 1;
                                right += wordSize;
                            }
                            else{
                                // cout<< "Word already used: " << word << endl;
                                // cout << "left: " << left << " right: " << right << endl;
                                while(left <= right){
                                    string leftWord = s.substr(left, wordSize);
                                    if(leftWord == word){
                                        if(left == right){
                                            trackWords[leftWord] -= 1;
                                        }
                                        else{
                                            left += wordSize;
                                            trackWords[leftWord] += 1;
                                        }
                                        break;
                                    }
                                    else{
                                        trackWords[leftWord] += 1;     
                                        left += wordSize;                                   
                                    }
                                }
                                // cout << "left: " << left << " right: " << right << endl;
                                // cout<<trackWords[word] << " " << word << endl;
                            }
                        }
                        else{
                            // cout << "Word not found: " << word << endl;
                            left = right + wordSize;
                            right = left;
                            mapWords(words);
                        }
                    }
                }
            
                p += 1;
            }
            return result;
        }
};


int main(){
    Solution sol;
    string s = "wordgoodgoodgoodbestword";
    vector<string> words = {"word","good","best","good"};
    vector<int> result = sol.findSubstring(s, words);
    cout << "Result indices: ";
    for(int index : result){
        cout << index << " ";
    }
    cout << endl;

    return 0;
}
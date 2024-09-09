#include<iostream>
#include<vector>
#include<unordered_map>
#include<cstdlib>
using namespace std;

class RandomizedSet{
    
    public:

        vector<int>inputs;
        unordered_map<int, int>index_map;

        RandomizedSet(){};
        bool insert(int val){
            if(index_map.find(val) != index_map.end()) return false;
            inputs.push_back(val);
            index_map[val] = inputs.size() - 1;
            return true;    
        }
        bool remove(int val){
            if(index_map.find(val) == index_map.end()) return false;
            int last_element = inputs.back();
            int deleted_index = index_map[val];
            inputs[deleted_index] = last_element;
            index_map[last_element] = deleted_index;
            inputs.pop_back();
            index_map.erase(val);
            return true;
        }
        int getRandom(){
            int random_index = rand() % inputs.size();
            return inputs[random_index];
        }
};

int main(){
    RandomizedSet randomizedSet;
    
    // Test insertions
    std::cout << randomizedSet.insert(1) << std::endl; // Output: 1 (true)
    std::cout << randomizedSet.insert(2) << std::endl; // Output: 1 (true)
    std::cout << randomizedSet.insert(1) << std::endl; // Output: 0 (false, already exists)

    // Test getRandom
    std::cout << "Random: " << randomizedSet.getRandom() << std::endl; // Random element

    // Test removals
    std::cout << randomizedSet.remove(1) << std::endl; // Output: 1 (true)
    std::cout << randomizedSet.remove(3) << std::endl; // Output: 0 (false, does not exist)

    // Test getRandom again after removal
    std::cout << "Random: " << randomizedSet.getRandom() << std::endl; // Random element from the remaining set
    
    return 0;
}

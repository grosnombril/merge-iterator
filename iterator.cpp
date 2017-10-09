#include <iostream>
#include <vector>
#include <climits>
using namespace std;

#include <algorithm> // copy algorithm
#include <iterator>  // ostream_iterator iterator
#include <stdexcept> // out_of_range exception

class SortedIterator {
public:
    SortedIterator(vector< vector<int> > lists) {
        savedLists = lists;
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        bool hasNext = false;
        for(vector <int> list : savedLists) {
            if (list.empty()) continue;
            hasNext = true;
        }
        return hasNext; 
    }

    /** @return the next smallest number */
    int next() {
        int smallestVectorIdx = 0; 
        int smallestNumber = INT_MAX;
        int idx = 0;
        
        for(vector <int> list : savedLists) {
            if (list.empty()) continue;
            int head = list.front();
            if (list.front() < smallestNumber) {
                smallestNumber = list.front(); 
                smallestVectorIdx = idx;
            }
            idx++;
        }
        savedLists.at( smallestVectorIdx).erase(savedLists.at( smallestVectorIdx).begin()); 
        return smallestNumber;
    }
    
protected:
    vector< vector<int> > savedLists;

    
};

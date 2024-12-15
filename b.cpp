#include <iostream>
#include <string>
#include <unordered_map>
#include <map>
#include <sstream>
using namespace std;

class TimeTravelersArchive {
private:
    unordered_map<string, map<int, string>> archive;

public:
    TimeTravelersArchive() {}
    
    void Store(string key, string value, int timestamp) {
        archive[key][timestamp] = value;
    }
    
    string Retrieve(string key, int timestamp) {
        if (archive.find(key) == archive.end()) {
            return "";
        }
        
        auto it = archive[key].upper_bound(timestamp);
        
        if (it == archive[key].begin()) {
            return "";
        }
        
        --it;
        return it->second;
    }
};

int main() {
    TimeTravelersArchive archive;
    string line;
    
    while (getline(cin, line)) {
        stringstream ss(line);
        string command, key, value;
        int timestamp;
        
        ss >> command;
        
        if (command == "Store") {
            ss >> key >> value >> timestamp;
            archive.Store(key, value, timestamp);
        }
        else if (command == "Retrieve") {
            ss >> key >> timestamp;
            string result = archive.Retrieve(key, timestamp);
            if (result.empty()) {
                cout << "Empty" << endl;
            } else {
                cout << result << endl;
            }
        }
    }
    
    return 0;
}
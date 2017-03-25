#include <iostream>
#include <vector>

using namespace std;

vector<string> record_list;

void printNames() {
    for(vector<string>::iterator it = record_list.begin() ; it != record_list.end(); ++it) {
        cout << *it << "\n";
    }
}
void addName(string name) {
    record_list.push_back(name);
}

int main() {
    addName("Thomas");
    addName("Mike");
    addName("John");
    addName("Dave");

    printNames();
    return 0;
}

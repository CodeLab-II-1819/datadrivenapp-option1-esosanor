#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

string currentLine;
ifstream inFile;
vector<string> Allteewts;
vector<string> foundTweets;

int numberOfLines = 0;

string optionsToSearch[10] = {"", "Money", "Politics", "Paris", "DreamWorks", "Uber", "Love", "https:", "University", "pizza"};

int main() {
    int choice;
    
    do {
        choice = NULL;
            inFile.open("sampleTweets.csv");
            if (inFile.good()) {
                while (!inFile.eof()){
                    string str; //declare a string for storage
                    getline(inFile, str); //get a line from the file, put it in the string
                    Allteewts.push_back(str);
                }
            }
        
            cout << "Options: " << endl;
            cout << "1:     Show all tweets and cound them" << endl;
            cout << "2:     Show all tweets with the word Money and count" << endl;
            cout << "3:     Show all tweets with the word Politics and count" << endl;
            cout << "4:     Show all tweets with the word Paris and count" << endl;
            cout << "5:     Show all tweets with the word DreamWorks and count" << endl;
            cout << "6:     Show all tweets with the word Uber and count" << endl;
            cout << "7:     Show all tweets with the word love and count" << endl;
            cout << "8:     Show all tweets with images in them and count" << endl;
            cout << "9:     Show all tweets with the word University and count" << endl;
            cout << "10:    Show all tweets with the word pizza and count" << endl;
            cout << "" << endl;
            cout << "Please input your option: "; cin >> choice;
            cout << "" << endl;
            cout << "Running your query!"<< endl;
            cout << "" << endl;
        
            for (int i = 0; i < Allteewts.size(); i++) {
                if(Allteewts[i].find(optionsToSearch[choice-1])<=Allteewts[i].length()){
                    foundTweets.push_back(Allteewts[i]);
                }
            }

            for (int i = 0; i < foundTweets.size(); i++) {
                cout << foundTweets[i] << endl;
                cout << "" << endl;
            }
        
            cout << "Total number of tweets found: " << foundTweets.size() << endl;
        
        cout << "" << endl;
        cout << "1. Search again: " << endl;
        cout << "2. Exit the program: " << endl;
        cout << "" << endl;
        cout << "Option: "; cin >> choice;
    
    } while(choice != 2);
}

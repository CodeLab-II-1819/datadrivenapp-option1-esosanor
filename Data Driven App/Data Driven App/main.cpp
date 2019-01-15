//
//  main.cpp
//  Data Driven App
//
//  Created by Esosa on 10/12/2018.
//  Copyright © 2018 Mac user. All rights reserved.
//


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string currentLine;
ifstream inFile;

int numberOfLines = 0;

int main() {
//    ofstream datadrivenapp;
//    datadrivenapp.open("myfile.txt");
//    datadrivenapp << "Writing this to a file.\n";
//    datadrivenapp.close();
    
    int choice = 0;
    
    cout << "Enter your choice" << endl;
    cin >> choice;
    
    if (choice == 1){
        cout << "Your choice was 1 printing the total number of tweets" << endl;
        
    }
    
    cout << "Your choice was: " << choice << endl;
    
    //Opening the file
    inFile.open("sampleTweets.csv");
    
    // checks to see if file has loaded in
    if (inFile.good()){
        cout << "The file has loaded" << endl; // will print this if file successfully loads in
    
    
        //Counting the total number of lines that are in the file
        while (!inFile.eof()){
            numberOfLines ++;
            getline(inFile, currentLine);
        }
        //Printing out the total number of lines that are in the file
       cout << "Number of lines: " << numberOfLines << endl;
        
        //Printing out the amount of tweets that mention a given word.
        for (int i = 0; i < numberOfLines; i++){
           getline(inFile, currentLine);
        }
        
    }else {
        cout << "The file hasn't loaded" << endl;
    }
    inFile.close();
    
    
    //---------------------------------------------------------------------------------------
    // Counting total number of tweets that mention the word "trump"

    int trumpCount = 0;
    
    inFile.open("sampleTweets.csv");
    if (inFile.good()){
        while (!inFile.eof()){
            getline(inFile, currentLine);
            
            if(currentLine.find("Trump")<=currentLine.length()){
                cout << currentLine << endl;
                trumpCount ++;
            }
            
        }
    }
    inFile.close();
    
    cout << "Total amount of tweets money mentioned: " << trumpCount << endl;
    
    //--------------------------------------------------------------------------------------
    // Counting total number of tweets that mention the word "MONEY"

    
    int moneyCount = 0; // counter for word money
    
    inFile.open("sampleTweets.csv");  //opening the file
    if (inFile.good()){    // checks file is opened correctly
        while (!inFile.eof()){  // instructions for what to while file is opened
            getline(inFile, currentLine);
            
            if(currentLine.find("money")<=currentLine.length()){
                moneyCount ++;
            }
            
        }
    }
    inFile.close();
    
    
    cout <<"Total  number of tweets that mention money: " << moneyCount << endl;
    
    //---------------------------------------------------------------------------------------

    //: ##Heading one
    // Counting total number of tweets that mention the word "POLITICS"
    
    int politicsCount = 0; // counter for word POLITICS
    
    inFile.open("sampleTweets.csv");  //opening the file
    if (inFile.good()){    // checks file is opened correctly
        while (!inFile.eof()){  // instructions for what to while file is opened
            getline(inFile, currentLine);
            
            if(currentLine.find("politics")<=currentLine.length()){
                politicsCount ++;
            }
            
        }
    }
    inFile.close();
    
    cout <<"Total number of tweets that mention politics: " << politicsCount << endl;
    
    //----------------------------------------------------------------------------------------
    // Printing to the screen any tweets mentioning the word “PARIS”

    int parisCount = 0;
    // counter for word PARIS
    
    inFile.open("sampleTweets.csv");  //opening the file
    if (inFile.good()){    // checks file is opened correctly
        while (!inFile.eof()){  // instructions for what to while file is opened
            getline(inFile, currentLine);
            
            if(currentLine.find("paris")<=currentLine.length()){
                cout << currentLine << endl;
                parisCount ++;
            }
            
        }
    }
    inFile.close();
    
    
    //----------------------------------------------------------------------------------------
    // Printing to the screen any tweets mentioning the word “DREAMWORKS”
    
    int dreamworksCount = 0;
    // counter for word DREAMWORKS
    
    inFile.open("sampleTweets.csv");  //opening the file
    if (inFile.good()){    // checks file is opened correctly
        while (!inFile.eof()){  // instructions for what to while file is opened
            getline(inFile, currentLine);
            
            if(currentLine.find("DreamWorks")<=currentLine.length()){
                cout << currentLine << endl;
                dreamworksCount ++;
            }
            
        }
    }
    inFile.close();
    
    //----------------------------------------------------------------------------------------
    // Printing to the screen any tweets mentioning the word “UBER”
    
    int uberCount = 0;
    // counter for word UBER
    
    inFile.open("sampleTweets.csv");  //opening the file
    if (inFile.good()){    // checks file is opened correctly
        while (!inFile.eof()){  // instructions for what to while file is opened
            getline(inFile, currentLine);
            
            if(currentLine.find("Uber")<=currentLine.length()){
                cout << currentLine << endl;
                uberCount ++;
            }
            
        }
    }
    inFile.close();
    
    //----------------------------------------------------------------------------------------
    
    string myData;
    
    //Opening the file
    inFile.open("sampleTweets.csv");
    
    // checks to see if file has loaded in
    if (inFile.good()){
        
        while(!inFile.eof()){ // keep looping through the file until at end
            cout << "What would you like to search? Press 1 for 'money' 2 for politics, 3 for Paris, 4 for DreamWorks, 5 for Uber:  " << endl;
            //cin >>
            
            
            getline(inFile, myData); // getline from file
            cout << myData << endl; // output information from file
        }
        inFile.close(); // close file
    }
              

    
   // cin >> userInput >> endl;
    
   // if (userInput = 1)
    
    
    
    cout << "Hello" << endl;
    return 0;
}

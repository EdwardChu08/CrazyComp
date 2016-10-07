//
//  main.cpp
//  CrazyComp
//
//  Created by Edward Chu on 30/9/2016.
//  Copyright (c) 2016 Puffins. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // insert code here...
    int numWords, delay,currentWords=1;
    vector<int> seconds;
    int temp;
    cin >> numWords >> delay;
    
    for(int i=0;i<numWords;i++){
        cin >> temp;
        seconds.push_back(temp);
    }
    
    for(int i=1;i<numWords;i++){
        if(seconds[i]-seconds[i-1]<=delay){
            currentWords++;
            
        } else {
            currentWords=1;
            
        }
    }
    
    cout << currentWords;
    
   

    return 0;
}

//
//  Controller.cpp
//  ArrayVectorAssignment
//
//  Created by Jarman, Caroline on 1/28/19.
//  Copyright © 2019 ctec. All rights reserved.
//

#include "Controller.hpp"
#include <vector>

void Controller :: start()
{
//    cout << "banana" << endl;
}


void Controller :: vectorMethod()
{
    vector<int> intVector;
    for (int i = 1; i <= 5; i++)
        intVector.push_back(i);
    
    for (auto i = intVector.begin(); i != intVector.end(); ++i )
        cout << *i << endl;
    
}


void Controller :: loopThroughVector()
{
    
    vector<string> stringVector;
     string thislist1 [5] = {};
    for (int i = 1; i <= 5; i++)
    {     //string a = "";
        stringVector.push_back("a");
   //     thislist1[i] = stringVector[i];
        
        
    }    //   stringVector.push_back(i); PUSHBACK is the add
    
    
        
        for (auto i = stringVector.begin(); i != stringVector.end(); ++i )
            cout << *i << endl;

}

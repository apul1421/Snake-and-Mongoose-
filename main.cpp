//
//  main.cpp
//  Cc2apu
//
//  Created by Apul Gupta on 16/06/17.
//  Copyright © 2017 Apul Gupta. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    cin>>n;                     //n is the no. of test cases
    string str;                 // str is the input string
    for(int i=0;i<n;i++)        //Loop1 to input string from user
    {
        cin>>str;
        int m=0,s=0,eaten=0;
                                 
                                 
        for(int j=0;j<str.length();j++)
        {
            if(str[j]== 'm')
            {
                m++;
                
                
            }
            
            else
            {
                s++;
                
                
            }
            
            if(str[j]=='m' && str[j-1]=='s' && eaten!=1) //If firstletter is s and second m and also there is no eaten then eat a snake
            {
                s-- ;
                
                
    
            }
            
           else if(str[j]=='m' && str[j+1]=='s')    //If first letter is m and second s
            {
                s--;                                // decrement s
                eaten=1;                            // eaten will tell current snake
                
                
            }
           
            
            
        }
        
        if(m==s)
        {
            cout<<"tie\n";
        }
        else if(m>s)
        {
            
            cout<<"mongooses\n";
        }
        
        else
        {
            
            cout<<"snakes\n";
        }
    }
    
    
    
    return 0;
}

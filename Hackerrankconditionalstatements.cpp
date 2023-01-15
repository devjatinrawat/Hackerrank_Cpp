

// // Let Do it Buddy!

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

// Given a positive int n 
  int n ;

       cin>>n;
    
    if( n == 1)
    cout<<"one";
    
    else if( n == 2)
    cout<<"two";
    
    else if( n == 3)
    cout<<"three";
    
    
    else if( n == 4)
    cout<<"four";
    
    
    else if( n == 5)
    cout<<"five";
    
    
    else if( n == 6)
    cout<<"six";
    
    
    else if( n == 7)
    cout<<"seven";
    
    
    else if( n == 8)
    cout<<"eight";
    
    
    else if( n == 9)
    cout<<"nine";
    
    else 
    cout<<"Greater than 9";
    
}

// Advanced Solution Use Array with Some conditions 

#include<iostream>

using namespace std;

int main(){

  int n;

  cin>>n;

  string nums[] = { "zero" ,"one" ,"two" ,"three" ,"four" ,"five" , "six" , "seven" ,"eight" ,"nine"};

  // lets check n (the input)
  if( n >= 1 && n <= 9)
  cout<<nums[n]<<endl;

  else
  cout<<"Greater than 9"<<endl;
  
  return 0;
}
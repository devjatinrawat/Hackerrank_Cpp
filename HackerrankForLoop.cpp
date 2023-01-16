

#include<iostream>

using namespace std;

int main(){

    // 2 positive integers
    int a ,b;

    //input the value of a & b
    cin>>a>>b;

    //looping through all the values 
    for( a ; a <=b ; a++){

        //checking through all the values 
        if(a == 1)
            cout << "one" << endl;

        else if(a == 2)
            cout << "two" << endl;

        else if(a == 3)
            cout << "three" << endl;

        else if(a == 4)
            cout << "four" << endl;

        else if(a == 5)
            cout << "five" << endl;

        else if(a == 6)
            cout << "six" << endl;

        else if(a == 7)
            cout << "seven" << endl;

        else if(a == 8)
            cout << "eight" << endl;

        else if(a == 9)
            cout << "nine" << endl;

        else if(a > 9 &(a % 2 == 0))
            cout << "even" << endl;

        else
            cout << "odd" << endl;

    }
return 0;

}

// advance Simple Check , no need to traverse , Write If else as ternary Op 

#include<iostream>

using namespace std;

int main(){

int start , end ;
cin>>start>>end;

  string nums[] = {"one" ,"two" ,"three" ,"four" ,"five" , "six" , "seven" ,"eight" ,"nine"};
// i = 8 
for( int i = start ; i <= end ; i++){

// loop means repetition

if( i <= 9)
cout<<nums[i-1]<<endl;

// another check 
// start = 8 , 9 , 10 , 11
else if( i > 9 && i %2 ==0 ){
    cout<<"even"<<endl;
}

else if( i > 9 && i%2 !=0 )
cout<<"odd"<<endl;
}
return 0;
// }

// using ternary op 

cout<<((i<=9)?c[i]:((i%2==0)?"even":"odd"))<<endl;

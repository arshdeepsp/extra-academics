#include <iostream>
using namespace std;

void incrementCount(int& real_count) //& to pass by reference
{
    real_count++;
}

int main()
{
    int count = 5;
    cout<<count;
    incrementCount(count);//increment value of count
    /*
    {
        int real_count = count;
    }
    */
    cout<<"Pass by Reference\n";
    cout<<"Count:";
    cout<<count;//prints count after the function call
    return 0;
}
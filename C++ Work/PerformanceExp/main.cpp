#include<iostream>
#include<vector>
#include<ctime>
using namespace std;
//-------------------------------

int main()
{
    const int N = 1000000;
    vector<int> v;

    clock_t beginTime = clock();

    for(int i=0;i<N;i++)
    {    
        //v.insert(v.begin(),i);
        v.push_back(i);
    }

    clock_t endTime = clock();

    //Now calculate time
    double totalTimeSec = (double)(endTime - beginTime)/CLOCKS_PER_SEC;
    cout<<"Total time out algorithum took is: "<<totalTimeSec<<endl;

    return 0;
}

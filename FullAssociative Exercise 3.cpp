/*Total FullAssociative Exercise 3
Author: Mustaffa
Date: 21 May 2021*/

#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main()
{
    double cs, bs, t;
    double cs2, bs2, tb, mms;

    cout<<"Enter the value of cache size : "<<endl;
    cin>>cs;
    cout<<"Enter the value of block size : "<<endl;
    cin>>bs;
    cout<<"Enter the value of tag: "<<endl;
    cin>>t;


    cs2 = log2 (cs);
    bs2 = log2 (bs);
    tb = t + bs2;

    cout<<"\n"<<endl;
    cout<<"Cache size = "<<cs<<" = 2^"<<cs2<<endl;
    cout<<"Block size = Line size = "<<bs<<" = 2^"<<bs2<<endl;
    cout<<"\n"<<endl;
    cout<<"total bit for main memory ="<<t<<" + "<<bs2<<" = "<<tb<<endl;
    cout<<"size of the main memory = 2^"<<tb<<endl;
    mms = pow(2,tb);
    cout<<"size of the main memory = "<<mms<<"B (please refer table for the precision value)"<<endl;

}

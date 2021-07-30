/*Total DirectCache Exercise 1
Author: Mustaffa
Date: 21 May 2021*/

#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main()
{
    double cs, bs, mms, w, l, t;
    double cs2, bs2, mms2;

    cout<<"Enter the value of cache size : "<<endl;
    cin>>cs;
    cout<<"Enter the value of block size : "<<endl;
    cin>>bs;
    cout<<"Enter the value of main memory size : "<<endl;
    cin>>mms;
;

    cs2 = log2 (cs);
    bs2 = log2 (bs);
    mms2 = log2 (mms);



    cout<<"\n"<<endl;
    cout<<"Cache size = "<<cs<<" = 2^"<<cs2<<endl;
    cout<<"Block size = "<<bs<<" = 2^"<<bs2<<endl;
    cout<<"Main memory size = "<<mms<<" = 2^"<<mms2<<endl;
    cout<<"\n"<<endl;
    cout<<"word is : "<<mms2<<endl;
    cout<<"s + w : "<<bs2<<endl;
    cout<<"Number of line in cache : "<<cs<<" / "<<bs<<" = 2^"<<cs2<<" / 2^"<<bs2<<"= 2^r"<<endl;
    cout<<"Please insert value of r:"<<endl;
    cin>>l;
    cout<<"\n"<<endl;
    cout<<"Number of tag = "<<mms2<<" - "<<l<<" - "<<bs2<<endl;
    t = mms2 - l - bs2;
    cout<<"Number of tag = "<<t<<endl;

}

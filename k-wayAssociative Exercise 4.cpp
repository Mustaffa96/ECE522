/*Total k-wayAssociative Exercise 4
Author: Mustaffa
Date: 21 May 2021*/

#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main()
{
    double k, bs, mms, sic, lic, sc, t, s;
    double bs2, mms2, sc2, k2, x, y;

    cout<<"Enter the number of way,k : "<<endl;
    cin>>k;
    cout<<"Enter the value of block size : "<<endl;
    cin>>bs;
    cout<<"Enter main memory size: "<<endl;
    cin>>mms;
    cout<<"Enter number of tag: "<<endl;
    cin>>t;


    bs2 = log2 (bs);
    mms2 = log2 (mms);
    k2 = log2 (k);
    s = mms2 - t - bs2;


    cout<<"\n"<<endl;
    cout<<"number of way = "<<k<<endl;
    cout<<"Block size = line size = "<<bs<<" = 2^"<<bs2<<endl;
    cout<<"Main memory = "<<mms<<" = 2^"<<mms2<<endl;
    cout<<"\n"<<endl;
    cout<<"Set = "<<mms2<<" - "<<t<<" - "<<bs2<<" = "<<s<<endl;
    cout<<"Number of set in cache = V = 2^d = 2^"<<s<<endl;
    cout<<"Number of line in cache = m = kv = "<<k<<" x 2^"<<s<<" = 2^"<<k2<<" x 2^"<<s<<endl;
    lic = k2 + s;
    cout<<"Number of line in cache = 2^"<<lic<<endl;
    cout<<"size of cache = k x 2^(dtw) = 2^"<<k2<<"x 2^"<<s+bs2<<endl;
    cout<<"size of cache = k x 2^(dtw) = 2^"<<k2+s+bs2<<endl;
    x = k2 + s + bs2;
    y = pow(2,x);
    cout<<"size of cache = k x 2^(dtw) = "<<y<<endl;
}

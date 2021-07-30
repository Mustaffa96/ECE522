/*Calculating set field k-way
Author: Mustaffa
Date: 21 May 2021*/

#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main()
{
    int k, ls, lsB, lsB2, m, ms, K, mm, mm2, sf;

    cout<<"Enter the number of way,k : "<<endl;
    cin>>k;
    cout<<"Enter the value of line size in bit: "<<endl;
    cin>>ls;
    lsB = ls/8;
    lsB2 = log2 (lsB);
    cout<<"line size in Byte is = "<<lsB<<" Byte, which is 2^"<<lsB2<<endl;
    cout<<"line size = block size = "<<lsB2<<endl;
    cout<<"\n";
    cout<<" ? bit microprocessor = procecessor that issues ? bit address = "<<endl;
    cin>>m;
    cout<<"able to accomodate ?K = ?KB on chip memory size, which is = "<<endl;
    cin>>ms;
    cout<<"main memory = "<<ms<<"K"<<endl;
    K = 1024;
    cout<<ms<<"x"<<K<<endl;
    mm = ms * K;
    cout<<"= "<<mm;
    mm2 = log2 (mm);
    cout<<"= 2^"<<mm2<<endl;
    cout<<"Thus, number of bits required by the tag field is "<<mm2<<"-bits"<<endl;
    cout<<"\n";
    cout<<"Tag field is: "<<mm2<<endl;
    cout<<"offset bits is: "<<lsB2<<endl;
    cout<<"Therefore, "<<endl;
    cout<<m<<"bit = Tag field + Set field + Offset field"<<endl;
    cout<<m<<"bit = "<<mm2<<" + Set field + "<<lsB2<<endl;
    cout<<"set field = "<<m<<" - "<<mm2<<" - "<<lsB2<<endl;
    sf = m-mm2-lsB2;
    cout<<"Set field = "<<sf<<endl;
}

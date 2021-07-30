/*Total capacity hard disk & etc
Author: Mustaffa
Date: 20 May 2021*/

#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main()
{
    double bps, spt, tps, s, ts, r, fs, trd, ttr, nt, tc, m, x, y, ta;
    double bps2, spt2, tps2, s2, r2, tc2, trd2, fs2, pfs, n, n1, n2;

    cout<<"Enter the value of surface : "<<endl;
    cin>>s;
    cout<<"Enter the value of track per surface : "<<endl;
    cin>>tps;
    cout<<"Enter the value of sectors per track : "<<endl;
    cin>>spt;
    cout<<"Enter the value of bytes per sector : "<<endl;
    cin>>bps;
    cout<<"Enter the value of seek time : "<<endl;
    cin>>ts;
    cout<<"Enter the value of rotational speed : "<<endl;
    cin>>r;
    cout<<"Enter the value of number prefix file size : "<<endl;
    cin>>fs;
    cout<<"Enter the value of number file size post fix (after convert using table such as MB=2 power of?: "<<endl;
    cin>>fs2;

    bps2 = log2 (bps);
    spt2 = log2 (spt);
    tps2 = log2 (tps);
    s2 = log2 (s);
    tc = bps2 + spt2 + tps2 + s2;


    cout<<"\n"<<endl;
    cout<<"Total capacity = "<<bps<<" x "<<spt<<" x "<<tps<<" x "<<s<<endl;
    cout<<"Total capacity = 2^"<<bps2<<" x 2^"<<spt2<<" x 2^"<<tps2<<" x 2^"<<s2<<endl;
    cout<<"Total capacity = 2^"<<tc<<setw(2)<<"(refer table how much byte)"<<endl;

    m = pow(10,-3);
    r2 = r/60;

    cout<<"\n"<<endl;
    cout<<"Rnew = "<<r2<<endl;
    trd = 2 * r2;
    trd2 = 1 / trd;
    cout<<"The average rotational latency = "<<trd2<<"sec"<<endl;
    cout<<"\n"<<endl;
    cout<<" the file is : "<<fs<<"x 2^"<<fs2<<endl;

    cout<<"number of track is = file size / (byte per size x sector per track"<<endl;
    cout<<"INFO : number of track also = number of byte per track"<<endl;
    cout<<"number of track is: "<<fs<<"x 2^"<<fs2<<"/ ( 2^"<<bps2<<"x 2^"<<spt2<<")"<<endl;
    cout<<"please insert number of track after calculating using calculator: "<<endl;
    cin>>n;
    cout<<"\n"<<endl;
    ttr = (1/r2) * n;
    cout<<"Transfer time is: "<<ttr<<"sec"<<endl;
    cout<<"\n"<<endl;
    cout<<"Total average access time is: Ta = Ts+Trd+Ttr"<<endl;
    ta = (ts*n) + (trd2*n) + ttr;
    cout<<"Total average access time is: Ta = "<<ta<<"sec"<<endl;
}

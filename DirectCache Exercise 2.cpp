/*Total DirectCache Exercise 2
Author: Mustaffa
Date: 21 May 2021*/

#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main()
{
    double au, sau, cs, w, l, t, B;
    double au2, cs2, cs3, cs4, w2;

    cout<<"Enter the value of addressable unit or total memory of system : "<<endl;
    cin>>au;
    cout<<"Enter the value of size(Byte) of each addressable unit : "<<endl;
    cin>>sau;
    cout<<"Enter the value of cache size : "<<endl;
    cin>>cs;
    cout<<"Enter the value of words per line: "<<endl;
    cin>>w;

    cs2 = log2 (cs);
    au2 = log2 (au);
    B = sau * 4;
    cs3 = cs / B;
    cs4 = log2 (cs3);
    w2 = log2 (w);

    cout<<"\n"<<endl;
    cout<<"No. of addressable unit = 2^(s+w) = "<<au<<" = 2^"<<au2<<endl;
    cout<<"Cache size = "<<cs<<" / "<<B<<" = "<<cs3<<" = 2^"<<cs4<<endl;
    cout<<"\n"<<endl;
    cout<<"word is : "<<w<<" = 2^"<<w2<<endl;
    cout<<"s + w : "<<au2<<endl;
    cout<<"line or r is: "<<cs4<<endl;
    cout<<"Number of tag = "<<au2<<" - "<<cs4<<" - "<<w2<<endl;
    t = au2 - cs4 - w2;
    cout<<"Number of tag = "<<t<<endl;

}

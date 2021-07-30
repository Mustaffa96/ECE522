/*Physical Address Page table calculation
Author: Mustaffa
Date: 13 July 2021*/

#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main()
{
    int vpn, pfn, va, pa, pa1, ps, ofs;

    cout<<"Please insert page size: "<<endl;
    cin>>ps;
    cout<<"Please virtual address: "<<endl;
    cin>>va;

    vpn = va / ps;
    ofs = va - ps;

    cout<<"Step 1: virtual page number: "<<endl;
    cout<<"= "<<va<<"/"<<ps<<" = "<<vpn<<endl;
    cout<<"Step 2: Page frame number: (if page frame no. is  dash/null don't proceed next step) "<<endl;
    cout<<"Please insert page frame number: "<<endl;
    cin>>pfn;
    cout<<"Step 3: Offset = virtual address - page size"<<endl;
    cout<<"= "<<va<<" - "<<ps<<" = "<<ofs<<endl;
    pa = (pfn * ps);
    pa1 = pa + ofs;
    cout<<"Step 4: Physical address = (page frame number x page size)+offset"<<endl;
    cout<<"= "<<pfn<<" x "<<ps<<" + "<<ofs<<" = "<<pa1<<endl;

    }

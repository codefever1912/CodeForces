#include <iostream>
using namespace std;

#define ll long long

int main(){
    int t,sx,sy,ex,ey,count=-1;
    char c;
    cin >> t >>sx>>sy>>ex>>ey;
    for(int i=0;i<t;i++){
        cin >> c;
        if(c=='N' and sy<ey) sy++;   
        if(c=='S' and sy>ey) sy--;
        if(c=='E' and sx<ex) sx++;
        if(c=='W' and sx>ex) sx--;

        if(sx==ex and sy==ey){count = i+1;break;}
    }
    cout << count << endl;
}
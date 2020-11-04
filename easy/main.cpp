#include <bits/stdc++.h>

using namespace std;

int main()
{   stack <int> arr;
   char st[100100],nd[100100];
   cin>>st>>nd;
   int n1=strlen(st),n2=strlen(nd),n;
   if(st[0]=='0')cout<<nd; //ไม่จำเป็น
   else{
   if(n1>=n2)
   {n=n2;
       int j=n1-1,s=0;
       for(int i=n-1;i>=0;i--)
        {
            arr.push((st[j]+nd[i]-96+s)%10);
            //cout<<st[j]<<" "<<nd[i]<<" "<<(st[j]+nd[i]-96+s)%10<<"\n";
            s=(st[j]+nd[i]-96+s)/10;
            j--;
        }
        for(int i=j;i>=0;i--)
        {
            arr.push((st[i]-48+s)%10);
            s=(st[i]-48+s)/10;
        }
        if(s!=0) arr.push(s);
        while(!arr.empty())
        {
            cout<<arr.top();
            arr.pop();
        }

   }
   else
   {
       n=n1;
       int j=n2-1,s=0;
       for(int i=n-1;i>=0;i--)
        {
            arr.push((st[i]+nd[j]-96+s)%10);
            //cout<<st[j]<<" "<<nd[i]<<" "<<(st[j]+nd[i]-96+s)%10<<"\n";
            s=(st[i]+nd[j]-96+s)/10;
            j--;
        }
        for(int i=j;i>=0;i--)
        {
            arr.push((nd[i]-48+s)%10);
            s=(nd[i]-48+s)/10;
        }
        if(s!=0) arr.push(s);
        while(!arr.empty())
        {
            cout<<arr.top();
            arr.pop();
        }

   }}


    return 0;
}

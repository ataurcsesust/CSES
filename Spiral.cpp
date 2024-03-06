#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
       long long  int row,col;
        cin>>row>>col;
        if(row==col)
        {
            cout<<row*row-row+1<<endl;
        }
        else if(row<col&&col%2!=0)
        {
            cout<<col*col-col+1+col-row<<endl;
        }
        else if(row>col&&row%2!=0){
            cout<<row*row-row+1-(row-col)<<endl;
        }
        else if(row<col&&col%2==0)
        {
            cout<<col*col-col+1-(col-row)<<endl;
        }
        else if(row>col&&row%2==0){
            cout<<row*row-row+1+(row-col)<<endl;
        }
    }


    return 0;
}
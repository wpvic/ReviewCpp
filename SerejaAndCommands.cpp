#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t,n,m,type,l,r;
    long long int modul = 1000000007;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &n, &m);
        int arr[n];
        for(int i = 0; i<n;i++)
        {
            arr[i]=0;
        }
 
        int commands[m][4];
 
        for(int j =0; j<m; j++)
        {
            scanf("%d %d %d", &type, &l, &r);
            commands[j][0] = type;
            commands[j][1] = l;
            commands[j][2] = r;
            // this last index is the amount of times a command of type 1 will be performed
            commands[j][3] = 1;
        }
 
        for(int h = m-1; h>-1; h--)
        {
            if(commands[h][0] == 2)
            {
                for(int x = commands[h][1]-1; x < commands[h][2];x++)
                {
                    commands[x][3]+=commands[h][3];
                }
            }
        }
 
        for(int h = 0; h<m; h++)
        {
            if(commands[h][0]==1)
            {
                for(int x = commands[h][1]-1; x < commands[h][2];x++)
                {
                    arr[x] += commands[h][3];
                }
            }
        }
 
        for(int z = 0; z < n; z++)
        {
            arr[z] = arr[z]%modul;
            printf("%d", arr[z]);
            printf(" ");
        }
 
        cout<<endl;
    }
    return 0;
} 
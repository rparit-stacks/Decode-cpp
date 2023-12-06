#include<iostream>
using namespace std;
void isSubset(int a1[], int a2[], int n, int m) {
    
    bool flag = false;
    for(int i = 0; i < m; i++)
    {
        flag = false;
        for(int j = 0; j < n; j++){
            
            if(a2[i]==a1[j])
            {
                flag = true;
                break;
            }
        }
        if(!flag){
            break;
        }
    }

    if(flag) cout << "yes";
else cout << "no";

}

int main()
{
    int a1[] = {11,1,13,21,3,7};
    int a2[] = {11,3,7,1};
    int n= sizeof(a1)/sizeof(a1[0]);
    int m= sizeof(a2)/sizeof(a2[0]);

    isSubset(a1,a2,n,m);
}
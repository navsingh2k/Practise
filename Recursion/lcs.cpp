#include <iostream>

using namespace std;
int lcs(int i,int j,string a,string b){
    if(a[i]=='\0' || b[j] == '\0')
        return 0;
    else if(a[i] == b[j])
        return 1+lcs(i+1,j+1,a,b);
    else
        return max(lcs(i+1,j,a,b),lcs(i,j+1,a,b));
}

int main()
{
   string a = "AGGTAB";
   string b = "GXTXAYB";
   int i=0,j=0;
   cout<<lcs(i,j,a,b);
   return 0;
}
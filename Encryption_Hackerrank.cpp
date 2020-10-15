#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.
string encryption(string s) {

int l,f,c,m=0;
int i,j,k;

vector<string> str2;

string str,fstr;

char ch[100][100];
int cou=count(s.begin(),s.end(),' ');
s.erase(remove(s.begin(),s.end(),' '), s.end());

l=s.length();

f=floor(sqrt(l));
c=ceil(sqrt(l));

if(f*c < l)
    f=c;
k=0;
for(i=0;i<f;i++)
{
    for(j=0;j<c;j++)
    {
        if(k<l)
           {

               ch[i][j]=s[k++];

            }
        else
        break;
    }


}

m=0;
for(i=0;i<c;i++)
{
    for(j=0;j<f;j++)
    {
        if(ch[j][i]>='a' && ch[j][i]<='z')
              fstr= fstr+ch[j][i];
    }

  fstr=fstr+" ";

}


return fstr;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

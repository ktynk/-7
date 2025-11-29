#include <string>
#include <iostream>

using namespace std;
string text;
string word;
string Z =""; 
int max = 0;
int lenghts = 0;
void text()
{
    
    cout<<"text "<<endl;
    cin>>text;
    for ( int i=0; i<text.length();i++)
        { 
            if ( text[i] !=" " || text[i] != "?" || text[i] !=  "!" || text[i] != "."  || text[i] != ",")
            {
                Z = Z+text[i];
                lenghts++;
            }
            else if
            {   
                if(max<lenghts)
                {
                word=Z;
                max = lenghts;
                    lenghts=0;
                    Z="";
                }
                else
                {
                lenghts = 0;
                    Z="";
                }
        }
}

void sravnenie()
{
  
}
int main()
{
    text();
    ();
    sravnenie();
}

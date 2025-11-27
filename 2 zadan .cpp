#include <string>
#include <iostream>

using namespace std;
string word1;
string word2;
void slovo1()
{
    
    cout<<"vvedite slovo"<<endl;
    cin>>word1;
    

}
void slovo2()
{
    cout<<"vvedite slovo"<<endl;
    cin>>word2;
    
}
void sravnenie()
{
    if(word1.length()>word2.length())
    {
        cout<<"bolshe "<<word1<<endl;
        cout<<"menshe "<<word2<<endl;
    }
    else{
        cout<<"bolshe "<<word2<<endl;
        cout<<"menshe "<<word1<<endl;
    }
}
int main()
{
    slovo1();
    slovo2();
    sravnenie();
}

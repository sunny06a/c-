#include<iostream>
#include<string.h>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    char s[50]={"sunny tomar nsut ece 2024"};
    int n=strlen(s);
    char *ptr=strtok(s," ");
    cout<<ptr<<endl;
    while(ptr!=NULL)
    {
        ptr= strtok(NULL," ");
        cout<<ptr<<endl;
    }
}
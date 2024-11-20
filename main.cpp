#include <iostream>
using namespace std;

int main() 
{
int i, j, p;
i=1;
while(i<=10);
    {
        j=1;
        while(j<=10);
        {
            p=i*j;
            cout << p << " ";
            j=j+1;
        }
        cout << " " << endl;
        i=i+1;
    }
}
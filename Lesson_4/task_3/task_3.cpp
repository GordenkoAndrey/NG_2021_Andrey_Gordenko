#include <iostream>

using namespace std;

int main()
{
    char text[] = { "yt ufxx ymnx yfxp fii dtzw  fxsfrj htrrjsy bnym qnsp yt uwtlwfr ns lny" };
    for (int i = 0; i < sizeof(text); i++)
    {
        if (text[i] != ' ') 
        {
            text[i] -= 5;
        }
        cout << text[i];
    }
}
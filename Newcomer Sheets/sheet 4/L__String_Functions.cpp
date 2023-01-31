#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int m, q, l, r;

    string s, test;

    cin >> m >> q;
    cin.ignore();

    getline(cin, s);

    while (q--)
    {
        cin >> test;

        if (test == "pop_back")
        {
            s.pop_back();
        }
        else if (test == "front")
        {
            cout << s.front() << endl;
        }
        else if (test == "back")
        {
            cout << s.back() << endl;
        }
        else if (test == "sort")
        {
            cin >> l >> r;
            if (l > r)
            {
                swap(l, r);
            }
            sort(s.begin() + l - 1, s.begin() + r);
        }
        else if (test == "reverse")
        {
            cin >> l >> r;
            if (l > r)
            {
                swap(l, r);
            }
            reverse(s.begin() + l - 1, s.begin() + r);
            
        }
        else if (test == "print")
        {
            unsigned int p;
            cin >> p;

            cout << s[p - 1] << endl;
        }
        else if (test == "substr")
        {
            cin >> l >> r;
            if (l > r)
            {
                swap(l, r);
            }
            cout << s.substr(l - 1, r - l + 1) << endl;
        }
        else if (test == "push_back")
        {
            char x;
            cin >> x;

            s.push_back(x);
        }
        
    }


    return 0;
}
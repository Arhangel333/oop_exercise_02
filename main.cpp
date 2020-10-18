#include <iostream>
#include <fstream>
#include "Budget.cpp"
using namespace std;

Budget null(-1.0f, -1.0f);
Budget zero(0.0f, 0.0f);
Budget one(10.0f, 10.0f);
Budget two(701.7159f, 74225.114446f);

Budget operator"" _bg(const char *s, size_t st)
{
    if (s == "zero")
    {
        return zero;
    }
    if (s == "one")
    {
        return one;
    }
    if (s == "two")
    {
        return two;
    }
    return null;
}

int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
    {
        cout << "For file " << argv[i] << ":\n" << endl;
        ifstream fin;
        fin.open(argv[i]);

        float x, y, d, f;
        fin >> x >> y >> d >> f;

        fin.close();

        Budget a(x, y), b(d, f);
        a.Show("a");
        b.Show("b");
        Budget c = a + b;
        cout << "a + b: " << endl;
        ;
        c.Show();

        c = a - b;
        cout << "a - b: " << endl;
        ;
        c.Show();

        c = a * b;
        cout << "a * b: " << endl;
        ;
        c.Show();

        c = a / b;
        cout << "a / b: " << endl;
        ;
        c.Show();

        cout << "a > b is ";
        if (a > b)
        {
            cout << "true\n"
                 << endl;
        }
        else
        {
            cout << "false\n"
                 << endl;
        }

        cout << "a >= b is ";
        if (a >= b)
        {
            cout << "true\n"
                 << endl;
        }
        else
        {
            cout << "false\n"
                 << endl;
        }

        cout << "a < b is ";
        if (a < b)
        {
            cout << "true\n"
                 << endl;
        }
        else
        {
            cout << "false\n"
                 << endl;
        }

        cout << "a <= b is ";
        if (a <= b)
        {
            cout << "true\n"
                 << endl;
        }
        else
        {
            cout << "false\n"
                 << endl;
        }

        cout << "a == b is ";
        if (a == b)
        {
            cout << "true\n"
                 << endl;
        }
        else
        {
            cout << "false\n"
                 << endl;
        }

        cout << "a != b is ";
        if (a != b)
        {
            cout << "true\n"
                 << endl;
        }
        else
        {
            cout << "false\n"
                 << endl;
        }

        Budget lit = "two"_bg;
        lit.Show();
    }
}
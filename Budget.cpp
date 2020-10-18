#include <iostream>
#include <cstdio>
using namespace std;
/*В этом файле описан классс Budget и его методы*/

class Budget
{
public:
    float a; //собственная часть средств бюджета в рублях
    float b; //заёмная часть бюджета в рублях

    Budget(float x, float y)
    {
        this->a = x;
        this->b = y;
    }

    ~Budget()
    {
        this->a = 0;
        this->b = 0;
    }
    void Show(char *x)
    {
        printf("%s {\n", x);
        printf("%.2f - собств. часть\n %.2f - заёмн. часть\n", this->a, this->b);
        printf("}\n\n");
    }
    void Show()
    {
        printf("%.2f - собств. часть\n%.2f - заёмн. часть\n\n", this->a, this->b);
    }

    //                                  //////////////////               операторы
    Budget operator+(Budget x)
    {
        Budget Bu((this->a + x.a), (this->b + x.b));
        return Bu;
    }

    Budget operator-(Budget x)
    {
        Budget Bu((this->a - x.a), (this->b - x.b));
        return Bu;
    }

    Budget operator*(Budget x)
    {
        Budget Bu((this->a * x.a), (this->b * x.b));
        return Bu;
    }

    Budget operator/(Budget x)
    {
        Budget Bu((this->a / x.a), (this->b / x.b));
        return Bu;
    }
    //                                  //////////////////               сравнение

    bool operator>(Budget x)
    {
        if (this->a > x.a)
        {
            return true;
        }
        return false;
    }

    bool operator<(Budget x)
    {
        if (this->a < x.a)
        {
            return true;
        }
        return false;
    }

    bool operator>=(Budget x)
    {
        if (this->a >= x.a)
        {
            return true;
        }
        return false;
    }

    bool operator<=(Budget x)
    {
        if (this->a <= x.a)
        {
            return true;
        }
        return false;
    }

    bool operator==(Budget x)
    {
        if (this->a == x.a)
        {
            return true;
        }
        return false;
    }

    bool operator!=(Budget x)
    {
        if (this->a != x.a)
        {
            return true;
        }
        return false;
    }
};

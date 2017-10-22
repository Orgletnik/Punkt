#include <iostream>
#include <math.h>

class punkt
{
private:
    double x, y;
public:
    punkt();
    punkt(double x, double y);
    double getX() const;
    double getY() const;
    void przesun(double x, double y);
    void obroc(double kat);
    void symetria0();
    void symetriaX();
    void symetriaY();
};

punkt::punkt()
{
    this->x = 0;
    this->y = 0;
}

punkt::punkt(double x, double y)
{
    this->x = x;
    this->y = y;
}

double punkt::getX() const
{
    return this->x;
}

double punkt::getY() const
{
    return this->y;
}

void punkt::przesun(double x, double y)
{
    this->x += x;
    this->y += y;
}

void punkt::obroc(double kat)
{

}

void punkt::symetria0()
{
    this->symetriaX();
    this->symetriaY();
}

void punkt::symetriaX()
{
    this->x *= -1;
}

void punkt::symetriaY()
{
    this->y *= -1;
}
std::ostream& operator << (std::ostream& stream, const punkt& punkt)
{
    std::cout << "(" << punkt.getX() << ", " << punkt.getY() << ")";
}
int main(void)
{
    punkt p1(3,0);
    punkt p2(3,4);
    std::cout << p2 << '\n';
    p2.przesun(10,10);
    std::cout << p2 << '\n';
    p2.symetriaX();
    std::cout << p2 << '\n';
    p2.symetriaY();
    std::cout << p2 << '\n';
    p2.symetria0();
    std::cout << p2 << '\n';
    
    return 1;
}
#include"Rect.hpp"
Rectangle :: Rectangle (int w, int l)
{
    width = w;
    lenth = l;
}
double Rectangle :: Perimetr()
{
    return (width*lenth)*2;
}
double Rectangle :: Area()
{
    return width*lenth;
}
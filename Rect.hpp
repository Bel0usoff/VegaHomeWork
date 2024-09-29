#pragma once
class Rectangle
{
protected:
 int width;
 int lenth;
public:
 Rectangle() {}
 Rectangle(int w, int l);
 double Perimetr(); 
 double Area(); 
};
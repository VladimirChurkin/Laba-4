#pragma once

class Point {
public:
    Point operator + (const Point& other);
    Point operator - (const Point& other);
    Point operator * (const Point& other);
    Point operator / (const Point& other);
    Point operator % (const Point& other);
    Point& operator ++();
    Point& operator ++(int value);
    Point& operator --(int value);
    Point& operator --();
    bool operator == (const Point& other);
    bool operator != (const Point& other);
    int GetX();
    int GetY();
    void SetX(int x);
    void SetY(int y);
private:
    int x;
    int y;
};
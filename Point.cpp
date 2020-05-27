#include "Header.h"

Point Point::operator + (const Point& other) {
    Point temp;
    temp.x = this->x + other.x;
    temp.y = this->y + other.y;
    return temp;
}

Point Point::operator - (const Point& other) {
    Point temp;
    temp.x = this->x - other.x;
    temp.y = this->y - other.y;
    return temp;
}

Point Point::operator * (const Point& other) {
    Point temp;
    temp.x = this->x * other.x;
    temp.y = this->y * other.y;
    return temp;
}

Point Point::operator / (const Point& other) {
    Point temp;
    temp.x = this->x / other.x;
    temp.y = this->y / other.y;
    return temp;
}

Point Point::operator % (const Point& other) {
    Point temp;
    temp.x = this->x % other.x;
    temp.y = this->y % other.y;
    return temp;
}

Point& Point::operator ++() {
   this->x++;
   this->y++;
   return *this;
}

Point& Point::operator ++(int value) {
    Point temp(*this);//создается такой же объект с такимиже полями. копия
    this->x++;
    this->y++;
    return *this;
}

Point& Point::operator --(int value) {
   Point temp(*this);//создается такой же объект с такимиже полями. копия
   this->x--;
   this->y--;

   return *this;
}

Point& Point::operator --() {
   this->x--;
   this->y--;
   return *this;
}

bool Point::operator == (const Point& other) {
    return this->x == other.x && this->y == other.y;
}

bool Point::operator != (const Point& other) {
   return !(this->x == other.x && this->y == other.y);
}

int Point::GetX() {
    return x;
}

int Point::GetY() {
    return y;
}

void Point::SetX(int x) {
    this->x = x;
}

void Point::SetY(int y) {
    this->y = y;
}


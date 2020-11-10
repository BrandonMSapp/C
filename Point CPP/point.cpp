#include <iostream>
#include <cmath>


class Point{
private:
    float xval, yval;

public:
    Point(float x, float y){
        xval = x;
        yval = y;
    }

    float const distance()const{
        return sqrt((xval * xval) + (yval * yval));
    }

    bool operator<(const Point& rhs) const{
        return (*this).distance() < rhs.distance();
    }

    bool operator>(const Point& rhs) const{
        if(*this < rhs){
            return false;
        }
        else if(rhs < *this){
            return true;
        }
        else{
            return false;
        }
    }

    bool operator>=(const Point& rhs) const{
        if(*this < rhs){
            return false;
        }
        else{
            return true;
        }
    }

    bool operator<=(const Point& rhs) const{
        if(rhs < *this){
            return false;
        }
        else{
            return true;
        }
    }

    bool operator==(const Point& rhs) const{
        if(*this < rhs){
            return false;
        }
        else if(rhs < *this){
            return false;
        }
        else{
            return true;
        }
    }

    bool operator!=(const Point& rhs) const{
        if(*this < rhs){
            return true;
        }
        else if(rhs < *this){
            return true;
        }
        else{
            return false;
        }
    }

    friend std::ostream& operator<<(std::ostream&, const Point&);
};

std::ostream& operator<<(std::ostream& stream, const Point& point){
    stream << point.distance();
    return stream;
}
#include "point.cpp"

void closer(Point& point1, Point& point2){
    if(point1 < point2){
        std::cout << "True: " << point1 << " < " << point2 << std::endl;
    }
    else{
        std::cout << "False: " << point1 << " !< " << point2 << std::endl;
    }
}

void further(Point& point1, Point& point2){
    if(point1 > point2){
        std::cout << "True: " << point1 << " > " << point2 << std::endl;
    }
    else{
        std::cout << "False: " << point1 << " !> " << point2 << std::endl;
    }
}

void equalorCloser(Point& point1, Point& point2){
    if(point1 <= point2){
        std::cout << "True: " << point1 << " <= " << point2 << std::endl;
    }
    else{
        std::cout << "False: " << point1 << " !<= " << point2 << std::endl;
    }
}

void equalorFurther(Point& point1, Point& point2){
    if(point1 >= point2){
        std::cout << "True: " << point1 << " >= " << point2 << std::endl;
    }
    else{
        std::cout << "False: " << point1 << " !>= " << point2 << std::endl;
    }
}

void equal(Point& point1, Point& point2){
    if(point1 == point2){
        std::cout << "True: " << point1 << " = " << point2 << std::endl;
    }
    else{
        std::cout << "False: " << point1 << " != " << point2 << std::endl;
    }
}

void notEqual(Point& point1, Point& point2){
    if(point1 != point2){
        std::cout << "True: " << point1 << " != " << point2 << std::endl;
    }
    else{
        std::cout << "False: " << point1 << " = " << point2 << std::endl;
    }
}



int main(){
    Point point1(5.5,4.5);
    Point point2(4.5,5.5);
    Point point3(3.5,4.5);

    closer(point3, point2);
    closer(point1, point2);
    closer(point2, point3);

    further(point2, point3);
    further(point1, point2);
    further(point3, point2);

    equalorCloser(point3, point2);
    equalorCloser(point1, point2);
    equalorCloser(point2, point3);

    equalorFurther(point2, point3);
    equalorFurther(point1, point2);
    equalorFurther(point3, point2);

    equal(point1, point2);
    equal(point1, point3);

    notEqual(point2, point3);
    notEqual(point2, point1);

    std::cout << "Finished";
    return 0;
}


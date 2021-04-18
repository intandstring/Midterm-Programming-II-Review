#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    private:
        float x;
        float y;
    
    public:
        Point(){
            x = 0;
            y = 0;
        }
        Point(float newx, float newy){
            x = newx;
            y = newy;
        }
        void printPoint(){
            cout << "(" << x << ", " << y << ")";
        }

        //getters
        float getX(){
            return x;
        }
        float getY(){
            return y;
        }

        //setters
        void setX(float newx){
            x = newx;
        }

        void setY(float newy){
            y = newy;
        }

        float getDistance(Point p){
            float x_dis = x - p.x;
            x_dis *= x_dis;
            float y_dis = y - p.y;
            y_dis *= y_dis;
            float distance = sqrt(x_dis + y_dis);
            return distance;
        }
};

class Segment
{
    private:
        Point p1;
        Point p2;
    
    public:
        Segment() : p1(), p2() {}

        Segment(Point newp1, Point newp2){
            p1 = newp1;
            p2 = newp2;
        }

        float getLength(){
            return p1.getDistance(p2);
        }
};

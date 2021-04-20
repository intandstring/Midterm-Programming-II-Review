#include <iostream>
#include <cmath>

using namespace std;

class Point
{
    private: 
        float x;
        float y;
    
    public:
        Point() {
            x = 0;
            y = 0;
        }
        
        Point(float xval, float yval){
            x = xval;
            y = yval;
        }  
        
        float getX(){
            return x;
        }
        
        float getY(){
            return y;
        }
        
        void setX(float val){
            x = val;
        }
            
        void setY(float val){
            y = val;
        }
        
        void printPoint(){
            cout << "(" << x << ", " << y << ")";   
        }
        
        float getDistance(Point p){
            float xdif = x - p.getX();
            float ydif = y - p.getY();
            float distance = 0.0;
            xdif *= xdif;
            ydif *= ydif;
            distance = sqrt((xdif + ydif));
            return distance;
        }      
};

class Segment {
  private:
  	Point point1;
  	Point point2;
  
  public:
  	Segment() : point1(), point2(){
    }
  
  	Segment(Point p1, Point p2){
    	point1 = p1;
    	point2 = p2;
    }
  	
  	float getLength(){
    	return point1.getDistance(point2); 
    }

    Point *getIntersect(Segment s){
      
    }
};

int main(){

  return 0;
}
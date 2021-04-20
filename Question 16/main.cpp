#include <iostream>
#include <cmath>

using namespace std;

class Point
{
public:
  float x, y;
  Point():x(0),y(0){
  }

  Point(float _x, float _y):x(_x),y(_y){
  }

  void printPoint(){
    cout<<"("<<x<<", "<<y<<")"<<endl;
  }

  float getDistance(Point &p_value){

    double distance=sqrt(pow(x-p_value.x,2)+pow(y-p_value.y,2));
    return distance;
  }

  void setX(float _x){
     x=_x;
  }

  void setY(float _y){
     y=_y;
  }

  float getX(){
     return x;
  }

  float getY(){
     return y;
  }

};

class Segment //y = ax+b
{
public:
  double a=0,b=0,c=0;
  Segment():p1(Point(0,0)),p2(Point(0,0))
  {}
  Segment(Point a, Point b)
  {
    p1 = a;
    p2 = b;
    //cout<<p1.x <<" "<<p1.y << endl;
    //cout<<p2.x <<" "<<p2.y << endl;
  }

  float getLength(){
    double distance=sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
    return distance;

  }

  void getLinePara(Segment &line)
  {
	line.a=line.p1.y-line.p2.y;
	line.b=line.p2.x-line.p1.x;
	line.c=line.p1.x*line.p2.y-line.p2.x*line.p1.y;
	//cout <<line.a<< " " << line.b<<" "<< line.c <<endl;
  }


  Point *getIntersect(Segment L2) // return the intersection of two segment; 計算與另一條線的交點，如果只有一個交點就回傳該交點，其他狀況則回傳NULL
  {
    Segment L1(p1,p2);
    //p1.printPoint();
    //p2.printPoint();

    //L2.p1.printPoint();
    //L2.p2.printPoint();

    getLinePara(L1);
    getLinePara(L2);
    static Point p;

	double D=L1.a*L2.b-L2.a*L1.b;
	//cout<< D <<endl;
	if (D==0){
        if (L1.p1.x==L2.p1.x && L1.p1.y==L2.p1.y){
          p=L1.p1;
          return &p;
        }
        if (L1.p1.x==L2.p2.x && L1.p1.y==L2.p2.y){
          p=L1.p1;
          return &p;
        }
       if (L1.p2.x==L2.p1.x && L1.p2.y==L2.p1.y){
          p=L1.p2;
          return &p;
        }
        if (L1.p2.x==L2.p2.x && L1.p2.y==L2.p2.y){
          p=L1.p2;
          return &p;
        }

        return NULL;
	}
	p.x=(L1.b*L2.c-L2.b*L1.c)/D;
	if (p.x==-0)
        p.x=0;
	p.y=(L1.c*L2.a-L2.c*L1.a)/D;
	if (p.y=-0)
        p.y=0;
	return &p;
  }

private:
  Point p1, p2;
};

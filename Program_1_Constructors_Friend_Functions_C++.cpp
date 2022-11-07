#include <iostream>
#include <math.h>
using namespace std;

class Points{
    int x,y;
    static int pointCount;
    friend float distanceBtwPoints(Points , Points);
    public:
        // Constructor
        Points(int a,int b);
        void showPoint(){
            cout << pointCount << "st Point is (" << x << " , " << y << ")" << endl;
            pointCount++;
        }

};

int Points :: pointCount = 1;

Points :: Points(int a,int b){
    x = a ;
    y = b ;
}

float distanceBtwPoints(Points p , Points q){
    int a,b,c,d;
    a = p.x ;
    b = q.x ;
    c = p.y ;
    d = q.y ;

    float distance_btw_points = sqrt(pow((a-b),2)+pow((c-d),2));
    return distance_btw_points;
}

int main(){

    int a,b,c,d;

    cout << "Enter x-coordinate of p and y-coordinate of p : ";
    cin >> a >> c;
    cout << "Enter x-coordinate of q and y-coordinate of q : ";
    cin >> b >> d;

    Points p(a,c);
    p.showPoint();
    Points q(b,d);
    q.showPoint();

    float distance = distanceBtwPoints(p,q);
    cout << "The distance between p and q is " << distance << endl; 
    
    return 0;
}

/*
    Output Looks Like : 
    
        Enter x-coordinate of p and y-coordinate of p : 1 2
        Enter x-coordinate of q and y-coordinate of q : 2 3
        1st Point is (1 , 2)
        2st Point is (2 , 3)
        The distance between p and q is 1.41421
*/
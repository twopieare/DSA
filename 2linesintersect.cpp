//check if two lines intersect or not. (gfg)

#include <iostream>
using namespace std;
#define ll long long int

struct Point(){
    int x;
    int y;
};

bool validProjection(int a, int b, int c, int d){
    if(a>b) swap(a,b);
    if(c>d) swap(c,d);
    return (max(a,c) <= min(b,d));
}

int orientation(Point p1, Point p2, Point p3){
    int val = (p2.y - p1.y)*(p3.x - p2.x) - (p2.x - p1.x)*(p3.y - p2.y);
    if(val==0) return 0;
    return (val>0) ? 1:2;
}

int intersect(int p1[], int p2[], int p3[], int p4){
    Point a, Point b, Point c, Point d;
    a.x = p1[0], a.y = p1[1];
    b.x = p2[0], b.y = p2[1];
    c.x = p3[0], c.y = p3[1];
    d.x = p4[0], d.y = p4[1];

    int o1 = orientation(a,b,c);
    int o2 = orientation(a,b,d);
    int o3 = orientation(c,d,a);
    int o4 = orientation(c,d,b);

    if(o1 != o2 && o3 != o4) return true;

    if(o1 == 0 && o4 == 0){
        if(validProjection(a.x,b.x,c.x,d.x) && validProjection(a.y,b.y,c.y,d.y))
        return true;
    }

    return false;
}

int main(){
    Point p1 = {10, 0}, p2 = {0, 10}, p3 = {0, 0} , p4 = {10 , 10}; 
	cout << intersect(p1 , p2 , p3 , p4);
}
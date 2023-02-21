#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect A,Rect B){
	double x = min((A.x+A.w),(B.x+B.w))-max(A.x,B.x);
	double y = min((A.y+A.h),(B.y+B.h))-B.y;
	if(x>0 && y>0){
		return x*y;
	}else{
		return 0;
	}
}
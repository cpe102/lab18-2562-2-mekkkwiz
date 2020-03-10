//Modify function overlap() form lab18_1.cpp by using pointers as input arguments.
#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect*,Rect*);

int main()
{

	Rect R1;
	Rect R2;
    Rect *p1 = &R1;
    Rect *p2 = &R2;

	cout << "Please input Rect 1 (x y w h): ";
	cin >> p1->x;
	cin >> p1->y;
	cin >> p1->w;
	cin >> p1->h;
	cout << "Please input Rect 2 (x y w h): ";
	cin >> p2->x;
	cin >> p2->y;
	cin >> p2->w;
	cin >> p2->h;

	

	cout << "Overlap area = " << overlap(&R1,&R2);	

	return 0;
}

double overlap(Rect *R1,Rect *R2)
{
	double r1_x = R1->x + R1->w;
	double r2_x = R2->x + R2->w;
	double x_overlap = min(r1_x,r2_x) - max(R1->x,R2->x);

	double r1_y = R1->y - R1->h;
	double r2_y = R2->y - R2->h;
	double y_overlap = min(R1->y,R2->y) - max(r1_y,r2_y);

	double sizeRec = x_overlap*y_overlap;

	if (sizeRec > 0)
	{
		return sizeRec;
	}
	else
	{
		return 0;
	}
	
	
	//cout << endl << "w = " << w_real << " h = " << h_real << endl;
	
}
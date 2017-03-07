// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class shape
{
	public:
		void SetWidth(int w){
			width = w;
		}
		void setHeight(int h){
			height=h;
		}
	protected:
		int width;
		int height;
};


class rectangle:public shape{
	public:
		int GetArea(){
			return (width*height);
		}
};




int _tmain(int argc, _TCHAR* argv[])
{
	rectangle rect;
	rect.SetWidth(5);
	rect.setHeight(7);

	cout << "Total area is:" << rect.GetArea() << endl;
	system("pause");
	return 0;
}


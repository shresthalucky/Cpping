#include <iostream>

namespace rectangle{
	class Quadilateral{
	public:
		int width, height;
		int area(){
			return width*height;
		}
	}q;
}

namespace square{
	class Quadilateral{
	public:
		int width;
		int area(){
			return width*width;
		}
	}q;
}

int main(){
	rectangle::q.height = 10;
	rectangle::q.width = 10;
	square::q.width = 25;
	std::cout << rectangle::q.area() << std::endl;
	std::cout << square::q.area() << std::endl;
	return 0;
}
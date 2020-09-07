#include <iostream>
using namespace std;

// class parallelepiped;
// class brick;
// class wall;

class parallelepiped{
    protected:
    int length, breadth, height;
    public:
    parallelepiped(){
        length=0; breadth = 0; height = 0;
    }
    parallelepiped(int l, int b, int h){
        length = l; breadth = b; height = h;
    }
};

class brick: public parallelepiped{
    protected:
    float cost;
    int area;
    public:
    brick(int l, int b, int h, float c=0):parallelepiped(l, b, h){
        cost = c;
        area = 2*(length*breadth + breadth*height + height*length);
    }
    int get_area(){
        return area;
    }
    float get_cost(){
        return cost;
    }
};

class wall: public brick{
    public:
    wall(int l, int b, int h):brick(l, b, h){
        area = (2*height*(length+breadth));
    }
    float get_cost(brick b){
        return (area/b.get_area())*b.get_cost(); 
    }
};

int main(){

    brick B(10, 4, 3, 10.12f);
    wall W(300, 4, 100);
    cout << "Total cost to construct a wall: " << W.get_cost(B) << endl;    

    return 0;
}
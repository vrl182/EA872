#include <iostream>
#include <memory>

using namespace std;

class cube {

	private:
		int x,y,z;

	public:
		cube(int x, int y, int z);
		~cube();
		void cube_print_volume();
};

cube::cube(int x, int y, int z){
	this->x = x;
	this->y = y;
	this->z = z;
};

cube::~cube(){
	cout << "Destruiu cube!" << endl;
};

void cube::cube_print_volume(){
	cout << x*y*z << endl;
};

class coord {

	private:
		int x,y;
		
	public:
		coord(int x, int y);
		~coord();

};

coord::coord(int x, int y){
	this->x = x;
	this->y = y;
};

coord::~coord(){
	cout << "Destruiu coord!" << endl;
};

int main() {

	shared_ptr<coord> c1 (new coord(50,10));
	shared_ptr<cube> c2 (new cube(10,20,30));
	c2->cube_print_volume();
	
  	return 0;
}

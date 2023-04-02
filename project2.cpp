#include <iostream>

class Shape {
	public:
		void setVariable1(int x) {
			std::cout << x << "\n";
			int vari1 = x;
			std::cout << vari1 << "\n";
		}

		void setVariable2(int y) {
			int vari2 = y;
		}

	protected:
		int vari1;
		int vari2;
};

class Circle : public Shape {
	public:
		double areaCalc() {
			//The following line is where it seemingly resets to 0
			std::cout << vari1 << "\n";
			double pi = 3.14159;
			return (pi * (vari1 * vari1));
		}
};

int main() {
	Circle Cir{};

	int x = 2;
	Cir.setVariable1(x);

	std::cout << "The total area is: " << Cir.areaCalc() << "\n";
}
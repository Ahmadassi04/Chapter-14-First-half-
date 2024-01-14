    #include <iostream>

struct IntPair{
    int pair1{};
    int pair2{};

    void print(){

        std::cout << "Pair(" << pair1 << ", " << pair2 << ")" << '\n';

    }

    bool isEqual(IntPair p){

        return (pair1 == p.pair1) && (pair2 == p.pair2);

    }
};

int main()
{
	IntPair p1 {1, 2};
	IntPair p2 {3, 4};

	std::cout << "p1: ";
	p1.print();

	std::cout << "p2: ";
	p2.print();


	std::cout << "p1 and p1 " << (p1.isEqual(p1) ? "are equal\n" : "are not equal\n");
	std::cout << "p1 and p2 " << (p1.isEqual(p2) ? "are equal\n" : "are not equal\n");


	return 0;
}

//Power Set

#include <iostream>
#include <math.h>
using namespace std;

class abc
{
	public:
		void printPowerSet(char *set, int set_size)
		{
			unsigned int pow_set_size = pow(2, set_size);
			int counter, j;

			for(counter = 0; counter < pow_set_size; counter++)
			{
				for(j = 0; j < set_size; j++)
				{
					if(counter & (1 << j))
						cout << set[j];
				}
				cout << endl;
			}
		}
};

int main()
{
	abc ob;
	char set[] = {'a','b','c'};
	ob.printPowerSet(set, 3);
	return 0;
}



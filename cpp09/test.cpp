#include <iostream>
#include <map>
#include <list>
#include <iterator>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <string.h>
#include <deque>
#include <utility>
#include <list>

using namespace std;

int main(void){
	{
		// deque<int> d {1, 2, 3, 5, 7, 9, 12};

		// cout << "Befor -> " << endl;
		// deque<int>::iterator it2 = d.begin();
		// for(; it2 != d.end(); it2++)
		// 	cout << *it2 << " ";
		
		// deque<int>::iterator it1 = lower_bound(d.begin(), d.end(), 4);
		// d.insert(it1 , 4);
		// it1 = lower_bound(d.begin(), d.end(), 5);
		// d.insert(it1 , 5);
		// it1 = lower_bound(d.begin(), d.end(), 6);
		// d.insert(it1 , 6);
		// it1 = lower_bound(d.begin(), d.end(), 0);
		// d.insert(it1 , 0);
		// it1 = lower_bound(d.begin(), d.end(), 100);
		// d.insert(it1 , 100);

		// cout << "\nAfter -> " << endl;
		// deque<int>::iterator it3 = d.begin();
		// for(; it3 != d.end(); it3++)
		// 	cout << *it3 << " ";

	}

	{
		list<int> lst {1, 9, 4, 6 , 23};
		list<int>::iterator it = lst.begin();

		// std::cout << *(it + 1) << std::endl; error

		// for(; it != lst.end(); it++)
		// 	cout << *it << endl;
	}
}

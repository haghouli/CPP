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

using namespace std;

int main(void){
	{
		// map<string, string> m;
		// m["2001-01-20"] = "s1";
		// m["2001-01-21"] = "s2";
		// m["2001-01-22"] = "s3";
		// m["2001-01-23"] = "s4";
		// m["2001-01-24"] = "s5";
		// m["2002-01-20"] = "s6";
		// m["2003-06-21"] = "s7";
		// m["2004-01-22"] = "s8";
		// m["2005-01-23"] = "s9";
		// m["2006-01-24"] = "s10";

		// map<string, string>::iterator it =  m.lower_bound("2001-01-20");
		// it--;
		// cout << it->first << endl;
	}

	// {
	// 	vector<char *> v;
	// 	char str[] = "hello srt1 str2";
	// 	char * {
	// 	vector<char *> v;
	// 	char str[] = "hello srt1 str2";
	// 	char * s = strtok(str, " ");
	// 	v.push_back(s);
	// 	while (1)
	// 	{
	// 		s = strtok(NULL, " ");
	// 		if(s == NULL)
	// 			break;
	// 		v.push_back(s);
	// 	}

	// 	for(int i = 0; i < v.size(); i++)
	// 		cout << v[i] << endl;
		
	// }

	// {
	// 	string s = "1234";
	// 	int b = -1;
	// 	b = s.find("i");
	// 	cout << b << endl;
	// }1)
	// 	{
	// 		s = strtok(NULL, " ");
	// 		if(s == NULL)
	// 			break;
	// 		v.push_back(s);
	// 	}

	// 	for(int i = 0; i < v.size(); i++)
	// 		cout << v[i] << endl;
		
	// }

	// {
	// 	string s = "1234";
	// 	int b = -1;
	// 	b = s.find("i");
	// 	cout << b << endl;
	// }

	{
		// deque<pair<int, int> > d;
		// pair<int, int> a {12, 45};
		// d.push_back(a);
		// pair<int, int> b {7, 2};
		// d.push_back(b);
		// pair<int, int> c {98, 5};
		// d.push_back(c);
		// pair<int, int> t {17, 4};
		// d.push_back(t);
		// pair<int, int> e {3, 23};
		// cout << "Befor" << endl;
		// for(auto it = d.begin(); it != d.end(); it++)
		// 	cout << (*it).first << " - " << (*it).second << endl;
		// cout << "After" << endl;
		// sort(d.begin(), d.end());
		// for(auto it = d.begin(); it != d.end(); it++)
		// 	cout << (*it).first << " - " << (*it).second << endl;
		// d.push_back(e);
		
	}

	{
		vector<int> v {1,2, 3,4,5,6,7,8};
		vector<int>::iterator it = v.begin();

		for(; it != v.end(); it++)
			(*it++) = *it + 10;

		for(const auto & e : v)
			cout << e << endl;
	}
}

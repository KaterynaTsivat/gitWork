#pragma once
#include "MyList.h"
template<typename T>
class MyList_Decor :
	public MyList<T>
{
public:
	MyList_Decor(){}

	friend std::ostream& operator << (std::ostream& out, MyList<T>& my_list) {
		
		for (auto i : my_list.getList())
			out << i << ".";

		return out;
	}

	friend std::istream& operator >> (std::istream& in, MyList<T>& my_list) {

		T * val = new T;
		in >> *val;
		my_list.push_back(*val);
		delete val;

		return in;
	}
/*
	int countOf(T val) {
		int count = 0;
		for (auto i : this->getList()) {
			if (val == i) {
				count++;
			}
		}
		return count;
	}*/

		int s = 0, t = 0;
	int countOf_start_to(T val, int s, int t) {
		int count_s_t = 0;
		for (int i = s; i <= t; i++) {
			if (val == i) {
				count_s_t++;
			}
		}
		return count_s_t;
	}

	~MyList_Decor(){}
};


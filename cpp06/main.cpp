#include <iostream>

using namespace std;

class A {
	public:
		int a;
		int b;
		int c;
		virtual void print() {
			cout << "Hello from Base" << endl;
		}
};

class B : public A {
	public:
		int a;
		int b;
		int c;
};

class C  : public B {
	public:
		int x;
};


typedef struct s {
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
}	ss;

void print(int *a){

}

int main(void){
	
	// implicit cast automatic cast by the compiler
	{ 
		int i = 42;
		double d = i;

		cout << d << endl;
	}
	
	cout << "******************************" << endl;
	// explicit cast
	// Asignement operator
	{
		int a = 5, b = 2;
		
		cout << "result without casting -> " << a / b << endl;
		cout << "result with casting -> " << (float)a/b << endl;
	}
	
	cout << "******************************" << endl;
	// static cast like the implicit cast diffrent is he gives you a compile time error if the cast impossible
	// or invalid
	//     static_casting -> compile time casting
	
	{
		int aa = 12;
		float bb = static_cast<float>(aa);

		A a;
		a.a = 42;
		a.b = 43;
		a.c = 44;
		B *b = (B*)&a;
	
		cout << b->a << endl;
		int *i = (int *)&a;

		// int *i2 = static_cast<int *>(&a); comile error invalid cast (class &A -> int *)

		cout << *i << endl;
		cout << *(i + 1) << endl;
		cout << *(i + 2) << endl;
	}

	cout << "*************************" << endl;

	{
		ss stc;
		stc.a = 1;
		stc.b = 2;
		stc.c = 3;
		stc.d = 4;
		stc.e = 5;
		stc.f = 6;
		uintptr_t uip = reinterpret_cast<uintptr_t>(&stc);
		unsigned int *ui = reinterpret_cast<unsigned int *>(&stc);

		cout << uip << endl;
		cout << uip + 1 << endl;
		cout << uip + 2 << endl;

		cout << *ui << endl;
		cout << *(ui + 1) << endl;
		cout << *(ui + 2) << endl;
		cout << *(ui + 3) << endl;
		cout << *(ui + 4) << endl;
		cout << *(ui + 5) << endl;

		cout << "type name -> "  << typeid(uip).name() << endl;
	}

	cout << "********************************" << endl;
	{
		// dynamic  cast is runtime cast operator use for only conversion of class pointer and refrences
		
		A *Base;
		B *a;
		C *c;
		// A *b = dynamic_cast<A *>(c);
		// B *bb = dynamic_cast<B *>(Base);

	}

	cout << "********************************" << endl;
	{
		// rienterpret_cast  cast is runtime cast operator use for only conversion of class pointer and refrences
		// convert any pointer to  any other pointer

		int *a = new int[3];
		a[0] = 42;
		a[1] = 43;
		a[2] = 44;

		char * a2 = reinterpret_cast<char *>(a); 

		for(int i = 0; i < 2; i++)
			cout << *(a2 + i) << endl; 
	}

	cout << "***************************" << endl;

	{
		// const cast  -> change const of a varaible

		const int  a = 12;

		int * b = const_cast<int *>(&a);
		print( const_cast<int *>(&a));

	}

	cout << "***********************" << endl;
	int a = 12;
	A a1;
	uintptr_t t = (uintptr_t)&a1;

	cout  << t <<  endl;

}

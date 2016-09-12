#include <iostream>
#include <windows.h>
using namespace std;

	class lab1{
	public:
		char c[18];
		int f;
		void method ()
		{
			cout<<"What is your name?"<<endl;
			cin>>c;
			cout<<"Hello, "<<c<<endl;
		}
	};

	void main()
	{
		lab1 first_Object;
		first_Object.method();
		system("pause");
	}
	 

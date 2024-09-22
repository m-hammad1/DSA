#include<iostream>
using namespace std;
class stack 
{
private:
	int top;	
	string arr1[11];
public:
stack()
{
top=-1;
}	
void push()
{
	if(top==10)
	{
	cout<<"\nStack Overflow";
	}
	else
	{
	cout<<"Enter a String: "; 
	for(int i=0;i<10;i++)
	{
	getline(cin, arr1[i]);
	cin.ignore();
	}	
	}
	  cout << "You entered:\n";
    for (int i = 0; i < 10; ++i) {
        cout << "String " << i + 1 << ": " << arr1[i] << endl;
    }
}
};
int main()
{
	stack st;
	st.push();
	return 0;
}
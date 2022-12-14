/*
Lucas Sequence
a = 0, b=0, c=1 are the 1st three terms. All other terms in the Lucas
sequence are generated by the sum of their 3 most recent predecessors.
Write a program to generate the frst n terms of a Lucas Sequence.

*/

#include<iostream>
using namespace std;
int main()
{

     int  num;
     cin>>num;
	int thirdLast = 0;
	int secondLast = 0;
	int last = 1;
	int current = 0;
	cout<<thirdLast << " " << secondLast << " " << last << " ";
	for (int i = 3; i < num; i++)
    {
            current = last + secondLast + thirdLast;
            cout<<current << " ";
            int tmp = last;
            last = current;
            thirdLast = secondLast;
            secondLast = tmp;
	}
}

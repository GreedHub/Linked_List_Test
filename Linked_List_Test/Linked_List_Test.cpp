#include "pch.h"
#include <iostream>
#include <conio.h>
#include <array>
using namespace std;

struct MyList {

	int numero;
	MyList* next = NULL;
	MyList* prev = NULL;

};


int main()
{

	int myNumberList[10] = { 1,2,3,4,5,6,7,8,9 };
	int counter = 0;

	MyList *node = nullptr,
		*header = nullptr,
		*temp = nullptr;

	for (int i = 0; i < 9; i++) {

		node = new MyList;

		node->numero = myNumberList[i];
		counter += myNumberList[i];

		if (i == 0) {

			header = node;
		}

		if (i < 5) {

			temp = node;
		}

	}

	cout << node->numero << endl;

	cout << header->numero << endl;

	cout << temp->numero << endl;

	cout << counter << endl;
}
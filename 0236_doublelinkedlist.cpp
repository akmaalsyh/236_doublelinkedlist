#include <iostream>
#include <string>
using namespace std;

struct Node
{
    int noMhs;
    string name;
    Node* next;
    Node* prev;
};

Node* START = NULL;

void addNode()
{
    Node* newNode = new Node(); // step1: create a new node
    cout << "\nEnter the roll number of the student: ";
    cin >> newNode->noMhs;      // Assign value to the date field of the new node
    cout << "\nEnter the name of the student: ";
    cin >> newNode->name;       // Assign value to the date field of the new node 
};

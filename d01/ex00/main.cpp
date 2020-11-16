#include "Pony.hpp"

void ponyOnTheStack(std::string& name)
{
	Pony stackPony(name);

	stackPony.say();
	stackPony.sleep();
	stackPony.sleep();
}

void ponyOnTheHeap(std::string& name)
{
	Pony *heapPony;

	heapPony = new Pony(name);
	heapPony->say();
	heapPony->sleep();
	heapPony->sleep();
	delete heapPony;
}

int main(void)
{
	std::string stackPonyName = "Stack Pony";
	std::string heapPonyName = "Heap Pony";
	std::cout << "---Stack Pony:---" << std::endl;
	ponyOnTheStack(stackPonyName);
	std::cout << "---Heap Pony:---" << std::endl;
	ponyOnTheHeap(heapPonyName);
	return (0);
}
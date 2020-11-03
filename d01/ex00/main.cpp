#include "Pony.hpp"

void ponyOnTheStack(std::string& const name)
{
	Pony stackPony(name);

	stackPony.say();
	stackPony.sleep();
	stackPony.sleep();
}

void ponyOnTheHeap(std::string& const name)
{
	Pony *heapPony;

	heapPony = new Pony(name);
	stackPony->say();
	stackPony->sleep();
	stackPony->sleep();
	delete heapPony;
}

int main(void)
{
	std::cout << "---Stack Pony:---" << std::endl;
	ponyOnTheStack("Stack Pony");
	std::cout << "---Heap Pony:---" << std::endl;
	ponyOnTheHeap("Heap Pony");
	return (0);
}
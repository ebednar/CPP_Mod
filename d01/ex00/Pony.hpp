#ifndef PONY_H
# define PONY_H

# include <iostream>
# include <string>

class Pony
{
private:
	std::string name;
public:
	Pony(std::string const &ponyName);
	~Pony();

	void say() const;
	void sleep() const;
};

#endif

#ifndef PONY_H
# define PONY_H

# include <iostream>

class Pony
{
private:
	std::string	const name;
public:
	Pony(std::string const &name = "Pony");
	~Pony();

	void say() const;
	void sleep() const;
};

#endif

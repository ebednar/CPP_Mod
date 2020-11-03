#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie
{
private:
	std::string name;
	std::string type;
public:
	Zombie(std::string& const name = "Z", std::string& const type = "normal")
	: name(name), type(type){};
	void announce() const;
};

#endif
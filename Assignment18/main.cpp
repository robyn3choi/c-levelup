#include "List.h"
#include <iostream>
#include <string>

int main()
{
	using List = Storage::List<std::string>;

	List stringList;
	std::string one = "1";
	stringList.Add(one);
	stringList.Add("2");
	//std::cout << stringList[0] << std::endl;
	//std::cout << stringList[1] << std::endl;

	List stringListCopy(stringList);
	//std::cout << stringListCopy[0] << std::endl;
	//std::cout << stringListCopy[1] << std::endl;

	List stringListCopyAssign = stringList;
	//std::cout << stringListCopyAssign[0] << std::endl;
	//std::cout << stringListCopyAssign[1] << std::endl;

	List stringListMove(std::move(stringList));
	//std::cout << stringListMove[0] << std::endl;
	//std::cout << stringListMove[1] << std::endl;
	//std::cout << stringList.Count() << std::endl;

	List stringListMoveAssign = std::move(stringListCopy);
	//std::cout << stringListMoveAssign[0] << std::endl;
	//std::cout << stringListMoveAssign[1] << std::endl;
	//std::cout << stringListCopy.Count() << std::endl;


	while (1);
	return 0;
}
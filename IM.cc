#include"IM_Server.hpp"

int main()
{
	ImServer *im = new ImServer();
	im->InitServer();
	im->Start();

	return 0;
}

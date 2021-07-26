#include <Treta.h>

class SandBox : public Treta::Application
{
public:
	SandBox()
	{

	}

	~SandBox()
	{

	}
};

Treta::Application* Treta::CreateApplication()
{
	return new SandBox();
}
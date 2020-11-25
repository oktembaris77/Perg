#include <Perg.h>

class Sandbox : public Perg::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Perg::Application* Perg::CreateApplication()
{
	return new Sandbox();
}
#include <Perg.h>

class ExampleLayer : public Perg::Layer
{
public:
	ExampleLayer()
		:Layer("Exaple")
	{

	}

	void OnUpdate() override
	{
		PE_INFO("ExapleLayer::Update");
	}

	void OnEvent(Perg::Event& event) override
	{
		PE_TRACE("{0}", event);
	}
};

class Sandbox : public Perg::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
		PushOverlay(new Perg::ImGuiLayer());
	}
	~Sandbox()
	{

	}
};

Perg::Application* Perg::CreateApplication()
{
	return new Sandbox();
}
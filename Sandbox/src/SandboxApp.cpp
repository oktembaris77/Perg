#include <Perg.h>

#include "../imgui/imgui.h"

class ExampleLayer : public Perg::Layer
{
public:
	ExampleLayer()
		:Layer("Example")
	{
	}

	void OnUpdate() override
	{
		if (Perg::Input::IsKeyPressed(PE_KEY_TAB))
		{
			PE_TRACE("Tab key is pressed");
		}
	}

	virtual void OnImGuiRender() override
	{
		ImGui::Begin("test");
		ImGui::Text("Sa");
		ImGui::End();
	}

	void OnEvent(Perg::Event& event) override
	{
		//PE_TRACE("{0}", event);

		if (event.GetEventType() == Perg::EventType::KeyPressed)
		{
			Perg::KeyPressedEvent& e = (Perg::KeyPressedEvent&)event;
			PE_TRACE("{0}", (char)e.GetKeyCode());
		}
	}
};

class Sandbox : public Perg::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
	}
	~Sandbox()
	{

	}
};

Perg::Application* Perg::CreateApplication()
{
	return new Sandbox();
}
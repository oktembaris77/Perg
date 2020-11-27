#pragma once

#ifdef PE_PLATFORM_WINDOWS

extern Perg::Application* Perg::CreateApplication();

int main(int argc, char** argv)
{
	Perg::Log::Init();
	PE_CORE_WARN("Initialized Log!");
	int a = 5;
	PE_INFO("Hello! Var={0}",a);

	auto app = Perg::CreateApplication();
	app->Run();
	delete app;
}

#endif

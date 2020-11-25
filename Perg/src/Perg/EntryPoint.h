#pragma once

#ifdef PE_PLATFORM_WINDOWS

extern Perg::Application* Perg::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Perg::CreateApplication();
	app->Run();
	delete app;
}

#endif

#pragma once

#include "Core.h"

namespace Perg {
	class PERG_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}


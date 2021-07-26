#pragma once

#include "Core.h"

namespace Treta {
	class TRETA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in client
	Application* CreateApplication();
}



#pragma once


#ifdef TT_PLATFORM_WINDOWS

extern Treta::Application* Treta::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Treta::CreateApplication();
	app->Run();
	delete app;
}

#endif

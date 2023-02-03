#pragma once

#ifdef CA_PLATFORM_WINDOWS

extern Caramel::Application* Caramel::CreateApplication();

int main(int argc, char** argv)
{
	auto App = Caramel::CreateApplication();
	App->Run();
	delete App;
}

#endif


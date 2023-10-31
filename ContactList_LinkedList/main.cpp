#include "MainForm.h"
#include <iostream>
using namespace ContactListLinkedList;
[STAThreadAttribute]
int main(array<System::String^>^ args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	// Create the main window and run it
	Application::Run(gcnew MainForm());

	std::cout << "Press any key to continue..." << std::endl;
	return 0;
}


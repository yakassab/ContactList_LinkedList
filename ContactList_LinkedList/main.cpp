#include "MainForm.h"
#include "LinkedList.h"
#include <iostream>
using namespace std;
using namespace ContactListLinkedList;
[STAThreadAttribute]
int main()
{
	
	
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	// Create the main window and run it
	Application::Run(gcnew MainForm());

	
	
	return 0;
}

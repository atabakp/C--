#include "MyForm.h"

// Open an Empty CLR project
// Go to Project Properties, choose linker and choose system 
// Set the subsystem to Windows 
// Go Back to Linker and choose advanced 
// in entry point type main
// Copy Paste the following Code to your form cpp file 
// Change the name of CarsDriverGUI::MyForm form; to yourproject::MyForm form;



using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	WindowsBasedApp::MyForm form;
	Application::Run(%form);
}
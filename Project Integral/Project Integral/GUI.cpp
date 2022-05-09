#include "GUI.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjectIntegral::GUI gui;
	Application::Run(% gui);
}
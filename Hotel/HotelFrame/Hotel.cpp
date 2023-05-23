#include "Hotel.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace HotelFrame;
[STAThread]
int main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Hotel());

	return 0;
}
#include "MyForm.h"
#include "iostream"
#include "string"
#include "cmath"
#include "cstdlib"
#include <math.h>



using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Simula::MyForm form;
	Application::Run(%form);

	
}

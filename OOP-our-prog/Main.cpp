#include "Main.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread] // Pode Ser int main Ou void main
int main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	OOPourprog::Main form;
	Application::Run(%form);

	
	/*
	Pen* myPen = new Pen(Color::Black);
	Graphics* g = this->CreateGraphics();
	g->DrawEllipse(myPen, 20, 30, 10, 50);*/
}
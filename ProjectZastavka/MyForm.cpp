#pragma once
#include "MyForm.h" 
#include "MyForm1.h"
#include "MyForm2.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);;
	ProjectZastavka::MyForm form; // ProjectZastavka-��� �������  MyForm-��� ������
	Application::Run(% form);
}

#pragma once
#include "child.h"
#include "MyForm2.h"
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include <cliext/list>


namespace ProjectZastavka {
	using namespace System::Collections::Generic;
	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// ������ ��� MyForm1
	/// </summary>

	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::TextBox^ textBoxHeight;

	private: System::Windows::Forms::ComboBox^ comboBoxGender;








	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBoxIndex;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button8;

	protected:



	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� �
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxHeight = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxGender = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBoxIndex = (gcnew System::Windows::Forms::TextBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(553, 168);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 27);
			this->button1->TabIndex = 0;
			this->button1->Text = L"��������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(553, 213);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 27);
			this->button2->TabIndex = 2;
			this->button2->Text = L"�������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(553, 254);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(140, 27);
			this->button3->TabIndex = 4;
			this->button3->Text = L"�������������";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(553, 297);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(140, 27);
			this->button4->TabIndex = 6;
			this->button4->Text = L"�����";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(553, 377);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(140, 27);
			this->button5->TabIndex = 8;
			this->button5->Text = L"������� ����";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(553, 421);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(140, 27);
			this->button6->TabIndex = 10;
			this->button6->Text = L"��������� ����";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(526, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 16);
			this->label1->TabIndex = 11;
			this->label1->Text = L"���";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(528, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 16);
			this->label2->TabIndex = 13;
			this->label2->Text = L"����";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(526, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 16);
			this->label3->TabIndex = 15;
			this->label3->Text = L"���";
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(572, 33);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(100, 22);
			this->textBoxName->TabIndex = 16;
			// 
			// textBoxHeight
			// 
			this->textBoxHeight->Location = System::Drawing::Point(572, 100);
			this->textBoxHeight->Name = L"textBoxHeight";
			this->textBoxHeight->Size = System::Drawing::Size(100, 22);
			this->textBoxHeight->TabIndex = 17;
			// 
			// comboBoxGender
			// 
			this->comboBoxGender->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"�", L"�" });
			this->comboBoxGender->FormattingEnabled = true;
			this->comboBoxGender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"�", L"�" });
			this->comboBoxGender->Location = System::Drawing::Point(572, 64);
			this->comboBoxGender->Name = L"comboBoxGender";
			this->comboBoxGender->Size = System::Drawing::Size(100, 24);
			this->comboBoxGender->TabIndex = 18;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 453);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(155, 16);
			this->label4->TabIndex = 19;
			this->label4->Text = L"������� ���� �������";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(183, 423);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 16);
			this->label5->TabIndex = 20;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(173, 452);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(14, 16);
			this->label6->TabIndex = 21;
			this->label6->Text = L"0";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(12, 62);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(155, 388);
			this->listBox1->TabIndex = 22;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 43);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(96, 16);
			this->label7->TabIndex = 23;
			this->label7->Text = L"������ �����";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(156, 43);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(207, 16);
			this->label8->TabIndex = 24;
			this->label8->Text = L"����� ������� ���� ��. �����";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(197, 62);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(143, 388);
			this->listBox2->TabIndex = 25;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(553, 338);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(140, 27);
			this->button7->TabIndex = 26;
			this->button7->Text = L"����� ��.�����";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(516, 134);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 16);
			this->label9->TabIndex = 27;
			this->label9->Text = L"������";
			// 
			// textBoxIndex
			// 
			this->textBoxIndex->Location = System::Drawing::Point(572, 131);
			this->textBoxIndex->Name = L"textBoxIndex";
			this->textBoxIndex->Size = System::Drawing::Size(100, 22);
			this->textBoxIndex->TabIndex = 28;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 16;
			this->listBox3->Location = System::Drawing::Point(370, 62);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(140, 388);
			this->listBox3->TabIndex = 29;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(376, 43);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(126, 16);
			this->label10->TabIndex = 30;
			this->label10->Text = L"��������� ������";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(-1, -1);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(109, 23);
			this->button8->TabIndex = 31;
			this->button8->Text = L"�������";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(705, 480);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->textBoxIndex);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBoxGender);
			this->Controls->Add(this->textBoxHeight);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyProgram";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// ������ ����� � ��� ����� � listbox1
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		// ������� ���������� ���� ������ �����
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
		openFileDialog1->Title = "�������� ��������� ����";

		// ��������� ���������� ����
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			// ���� ���� ��� ������, ������ ��� ���������� � ��������� � ListBox
			StreamReader^ reader = gcnew StreamReader(openFileDialog1->FileName);
			String^ line;
			while ((line = reader->ReadLine()) != nullptr) { // ������ ���� ���������
				listBox1->Items->Add(line); // ��������� ������ ������ � ListBox
			}
			reader->Close();// �������� �����
		};
	};
    // ����������� �������� ����� ������� � ��� �����. ���������� ������� ��� ���� ���� �������� � listbox2 
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		
		// ���������� ���������� ��� �������� ����� ����� � ���������� �������
		float sum = 0;
		int count = 0;

		// ������� ������ ��� �������� ���� �������, ��� ���� ���� ��������
		List<String^>^ aboveAverage = gcnew List<String^>();

		// ������ ������ �� ListBox1 ���������
		for each (String ^ line in listBox1->Items)
		{
			// ��������� ������ �� ��� �����: ���, ���, ����
			array<String^>^ parts = line->Split(' ');
			String^ name = parts[0];
			String^ gender = parts[1];
			int height = Convert::ToSingle(parts[2]);

			// ���� ��� �������, �� ��������� �� ���� � ����� � ����������� �������
			if (gender == "�")
			{
				sum += height;
				count++;
				// ���� ���� ������� ���� ��������, �� ��������� �� ��� � ������
				if (height > (sum / count))
				{
					aboveAverage->Add(name);
				}
			}
		}

		// ��������� ������� ���� � ������� ��� � Label6
		if (count > 0)
		{
			int average = sum / count;
			label6->Text = "������� ���� �������: " + System::Convert::ToString(average);
		}
		else
		{
			label6->Text = "��� ������ � ��������";
		}

		// ������� ����� �������, ��� ���� ���� ��������, � ListBox2
		listBox2->Items->Clear();
		for each (String ^ name in aboveAverage)
		{
			listBox2->Items->Add(name);
		}
	}
    // ���������� ������� � ����� ������
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// �������� ������ �� ��������� ����� � ����������
		String^ name = textBoxName->Text->Trim();
		String^ gender = comboBoxGender->Text->Trim();
		int height = 0;

		// ���������, ��� ���� name �� ������ � �������� ������ �����
		if (String::IsNullOrEmpty(name)) {
			MessageBox::Show("������� ��� �������!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else {
			for (int i = 0; i < name->Length; i++) {
				if (!Char::IsLetter(name[i])) {
					MessageBox::Show("��� ������� ������ ��������� ������ �����!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
			}
		}
		// ���������, ��� ���� gender �������� ���������� ��������
		if (String::IsNullOrEmpty(gender)) {
			MessageBox::Show("�������� ��� �������!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else if (gender != "�" && gender != "�") {
			MessageBox::Show("��� ������� ������ ���� '�' ��� '�'!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		// ���������, ��� ���� height �� ������ � �������� ������ �����
		if (String::IsNullOrEmpty(textBoxHeight->Text)) {
			MessageBox::Show("������� ���� �������!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		// ���������, ��� ���� height  �������� ������ �����
		if (!int::TryParse(textBoxHeight->Text->Trim(), height)) {
			MessageBox::Show("���� ������� ������ ��������� ������ �����!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		// ���������, ��� �������� height �� ��������� 250
		if (height > 250) {
			MessageBox::Show("���� ������� �� ������ ��������� 250 ��!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		// ��������� ������ ������� � ListBox1
		String^ line = name + " " + gender + " " + height;
		listBox1->Items->Add(line);

	}
    // �������� ������� �� �������
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int index = System::Convert::ToInt32(textBoxIndex->Text);
			listBox1->Items->RemoveAt(index);
		}
		catch (System::FormatException^ ex)
		{
			MessageBox::Show("������ ������������ ������ ��������");
		}
		catch (System::ArgumentOutOfRangeException^ ex)
		{
			MessageBox::Show("������ ������������ ������ ��������");
		}
}
    //�������������� ������ ������� �� �������
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = textBoxName->Text;
		if (name == "")
		{
			MessageBox::Show("���������� ������ ���", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else {
			for (int i = 0; i < name->Length; i++) {
				if (!Char::IsLetter(name[i])) {
					MessageBox::Show("��� ������� ������ ��������� ������ �����!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
			}
		}
		String^ gender = comboBoxGender->SelectedItem != nullptr ? comboBoxGender->SelectedItem->ToString() : "";
		if (!System::Text::RegularExpressions::Regex::IsMatch(gender, "^[��]$"))
		{
			MessageBox::Show("��� ����� ���� ������ � ��� �", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		int height;
		if (!int::TryParse(textBoxHeight->Text, height) || height <= 0 || height > 250)
		{
			MessageBox::Show("������������ �������� �����", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// �������� ������ ��������, ������� ����� �������������
		int index;
		if (!Int32::TryParse(textBoxIndex->Text, index) || index < 0 || index >= listBox1->Items->Count)
		{
			MessageBox::Show("������������ ������ ��������", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// ��������� ������� � ListBox
		String^ updatedItem = name + " " + gender + " " + height.ToString();
		listBox1->Items[index] = updatedItem;
	}
    // ����� �����
    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	// �������� �������� ����� ��� ������
    String^ name = textBoxName->Text;
    int height;
    bool height_parsed = Int32::TryParse(textBoxHeight->Text, height);
    String^ gender = comboBoxGender->SelectedItem != nullptr ? comboBoxGender->SelectedItem->ToString() : "";
    int index = -1;
    if (!Int32::TryParse(textBoxIndex->Text, index)) {
        index = -1;
    }
    // ���������, ��� ���� �� ���� ���� ���������
    if (name == "" && !height_parsed && gender == "" && index < 0) {
        return;
    }

    // ���������� ����� ��������� � ListBox1
    listBox3->Items->Clear();
    for (int i = 0; i < listBox1->Items->Count; i++)
    {
        String^ item = listBox1->Items[i]->ToString();
        bool match = true;
        if (name != "" && !item->Contains(name))
        {
            match = false;
        }
        if (height > 0 && !item->Contains(height.ToString()))
        {
            match = false;
        }
        if (gender != "")
        {
            // ��������� ������ �������� ListBox �� �����
            array<String^>^ words = item->Split(' ');
            // ��������� ������������ ���� ���������� ��������
            if (words->Length > 1 && words[1] != gender)
            {
                match = false;
            }
        }
        if (index >= 0 && i != index)
        {
            match = false;
        }
        if (match)
        {
            listBox3->Items->Add(item);
        }
		// ������� ���� ��� �����
		textBoxName->Text = "";
		textBoxHeight->Text = "";
		comboBoxGender->SelectedIndex = -1;
		textBoxIndex->Text = "";
    }
}
    private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	// ������� ����� ���� � ��������� ����� ��� ������
	StreamWriter^ writer = gcnew StreamWriter("NewData.txt");

	// ���������� ��� �������� �� listBox1 � ����
	for each (String ^ item in listBox1->Items)
	{
		writer->WriteLine(item);
	}

	// ��������� ����� � ����������� �������
	writer->Close();
	delete writer;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm2^ helpForm;
	helpForm = gcnew MyForm2();
	helpForm->ShowDialog();
}
};
};

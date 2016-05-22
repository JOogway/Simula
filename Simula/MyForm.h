#pragma once

#include <stdio.h>
#include <math.h>
#include <string>
#include <iostream>
#include <fstream>

namespace Simula {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  simulateButton;
	private: System::Windows::Forms::TextBox^  angleTextBox;


	private: System::Windows::Forms::TextBox^  velocityTextBox;

	private: System::Windows::Forms::Label^  MonS;
	private: System::Windows::Forms::Label^  degreesLabel;




	private: System::Windows::Forms::Label^  InitVeloLabel;

	private: System::Windows::Forms::Label^  angleLabel;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  sendButton;
	private: System::Windows::Forms::Button^  sendButton2;
			 Form^ okno = gcnew Form;

			 
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->simulateButton = (gcnew System::Windows::Forms::Button());
			this->angleTextBox = (gcnew System::Windows::Forms::TextBox());
			this->velocityTextBox = (gcnew System::Windows::Forms::TextBox());
			this->MonS = (gcnew System::Windows::Forms::Label());
			this->degreesLabel = (gcnew System::Windows::Forms::Label());
			this->InitVeloLabel = (gcnew System::Windows::Forms::Label());
			this->angleLabel = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->sendButton = (gcnew System::Windows::Forms::Button());
			this->sendButton2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// simulateButton
			// 
			this->simulateButton->Location = System::Drawing::Point(46, 256);
			this->simulateButton->Name = L"simulateButton";
			this->simulateButton->Size = System::Drawing::Size(115, 39);
			this->simulateButton->TabIndex = 1;
			this->simulateButton->Text = L"Simulate";
			this->simulateButton->UseVisualStyleBackColor = true;
			this->simulateButton->Click += gcnew System::EventHandler(this, &MyForm::simulateButton_Click);
			// 
			// angleTextBox
			// 
			this->angleTextBox->Location = System::Drawing::Point(46, 201);
			this->angleTextBox->Name = L"angleTextBox";
			this->angleTextBox->Size = System::Drawing::Size(115, 20);
			this->angleTextBox->TabIndex = 2;
			// 
			// velocityTextBox
			// 
			this->velocityTextBox->Location = System::Drawing::Point(46, 147);
			this->velocityTextBox->Name = L"velocityTextBox";
			this->velocityTextBox->Size = System::Drawing::Size(115, 20);
			this->velocityTextBox->TabIndex = 3;
			// 
			// MonS
			// 
			this->MonS->AutoSize = true;
			this->MonS->Location = System::Drawing::Point(167, 150);
			this->MonS->Name = L"MonS";
			this->MonS->Size = System::Drawing::Size(31, 13);
			this->MonS->TabIndex = 4;
			this->MonS->Text = L"[m/s]";
			// 
			// degreesLabel
			// 
			this->degreesLabel->AutoSize = true;
			this->degreesLabel->Location = System::Drawing::Point(167, 204);
			this->degreesLabel->Name = L"degreesLabel";
			this->degreesLabel->Size = System::Drawing::Size(45, 13);
			this->degreesLabel->TabIndex = 5;
			this->degreesLabel->Text = L"degrees";
			// 
			// InitVeloLabel
			// 
			this->InitVeloLabel->AutoSize = true;
			this->InitVeloLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->InitVeloLabel->Location = System::Drawing::Point(46, 128);
			this->InitVeloLabel->Name = L"InitVeloLabel";
			this->InitVeloLabel->Size = System::Drawing::Size(90, 13);
			this->InitVeloLabel->TabIndex = 7;
			this->InitVeloLabel->Text = L"Initial velocity:";
			// 
			// angleLabel
			// 
			this->angleLabel->AutoSize = true;
			this->angleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->angleLabel->Location = System::Drawing::Point(49, 176);
			this->angleLabel->Name = L"angleLabel";
			this->angleLabel->Size = System::Drawing::Size(76, 13);
			this->angleLabel->TabIndex = 8;
			this->angleLabel->Text = L"Angle (0-90)";
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(218, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1000, 600);
			this->panel1->TabIndex = 9;
			// 
			// sendButton
			// 
			this->sendButton->Location = System::Drawing::Point(46, 301);
			this->sendButton->Name = L"sendButton";
			this->sendButton->Size = System::Drawing::Size(115, 39);
			this->sendButton->TabIndex = 10;
			this->sendButton->Text = L"Send To Form";
			this->sendButton->UseVisualStyleBackColor = true;
			this->sendButton->Click += gcnew System::EventHandler(this, &MyForm::sendButton_Click);
			//
			//sendButton2
			//
			this->sendButton2->Location = System::Drawing::Point(46, 361);
			this->sendButton2->Name = L"sendButton2";
			this->sendButton2->Size = System::Drawing::Size(115, 39);
			this->sendButton2->TabIndex = 10;
			this->sendButton2->Text = L"Send Back";
			this->sendButton2->UseVisualStyleBackColor = true;
			this->sendButton2->Click += gcnew System::EventHandler(this, &MyForm::sendButton2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1254, 648);
			this->Controls->Add(this->sendButton);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->angleLabel);
			this->Controls->Add(this->InitVeloLabel);
			this->Controls->Add(this->degreesLabel);
			this->Controls->Add(this->MonS);
			this->Controls->Add(this->velocityTextBox);
			this->Controls->Add(this->angleTextBox);
			this->Controls->Add(this->simulateButton);
			this->Name = L"MyForm";
			this->Text = L"Simula";
			this->ResumeLayout(false);
			this->PerformLayout();


			
			

		}
#pragma endregion
	

private: System::Void simulateButton_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ Angle = angleTextBox->Text;
	

	String ^ Velocity = velocityTextBox->Text;
	
	if (Angle == "" || Velocity == "")
	{
		Angle = "1";
		Velocity = "1";
	}
	else
	{
		String ^ Angle = angleTextBox->Text;
		String ^ Velocity = velocityTextBox->Text;
		float angled = (float)(Convert::ToDouble(Angle));
		float veloted = (float)(Convert::ToDouble(Velocity));
double g = 9.8f;
#define M_PI 3.14159265358979323846

	double mathPowS = pow(veloted, 2); // kwadrat prędkości początkowej
	double mathTanA = tan(angled * M_PI / 180);// tangens kąta
	double mathCosPowA = pow(cos(angled * M_PI / 180), 2); //kosinus kwadrat kąta
	double Ymax = ((pow((veloted * sin(angled * M_PI / 180)), 2)) / (2 * g)); //wysokość maksymalna
	double Xmax = (2 * mathPowS * sin(angled * M_PI / 180) * cos(angled * M_PI / 180)) / (g); //zasięg rzutu
	int Xposition = (int)Xmax, Yposition = (int)Ymax;
	int indexY = (int)((Ymax / 580) + 1);
	int index = (int)((Xmax / 700) + 1);
	int Xmax2 = (int)Xmax;

	std::string Xpos = std::to_string(Xposition);
	std::string Ypos = std::to_string(Yposition);



	if (panel1->BackgroundImage == nullptr)
	{
		panel1->BackgroundImage = gcnew System::Drawing::Bitmap(panel1->Width, panel1->Height);
	}

	Graphics^ buffGraphics = Graphics::FromImage(panel1->BackgroundImage);
	buffGraphics->Clear(panel1->BackColor);

	buffGraphics->DrawLine(System::Drawing::Pens::Black, 1, 1, 1, 600);
	buffGraphics->DrawLine(System::Drawing::Pens::Black, 1, 599, 749, 599);


	System::Drawing::StringFormat^ drawFormat = gcnew System::Drawing::StringFormat();
	System::Drawing::Font^ drawFont = gcnew System::Drawing::Font("Arial", 16);
	System::Drawing::Graphics^ formGraphics = panel1->CreateGraphics();
	System::Drawing::SolidBrush^ drawBrush = gcnew System::Drawing::SolidBrush(System::Drawing::Color::Black);

	for (int i = 1; i<60; i += 5) {
		buffGraphics->DrawLine(System::Drawing::Pens::Black, 1, 10 * i, 3, 10 * i);
		std::string step01 = std::to_string(((600 - i * 10)*indexY) + 10 * indexY);
		String^ step1 = gcnew String(step01.c_str());

		buffGraphics->DrawString(step1, drawFont, drawBrush, 3, 10 * i);
	}


	for (int i = 1; i<80; i += 5) {
		buffGraphics->DrawLine(System::Drawing::Pens::Black, (10 * i) - 20, 600, (10 * i) - 20, 597);
		std::string step02 = std::to_string(((i * 10)*index) - 10 * index);
		String^ step2 = gcnew String(step02.c_str());
		buffGraphics->DrawString(step2, drawFont, drawBrush, (10 * i) - 25, 570);
	}

	String^ ex = gcnew String(Xpos.c_str());
	String^ yg = gcnew String(Ypos.c_str());

	buffGraphics->DrawString(ex, drawFont, drawBrush, Xposition / index, 580 / indexY);
	buffGraphics->DrawString(yg, drawFont, drawBrush, (Xmax2 / 2) / index - 5, (580 - Yposition) / indexY);



	for (int X = 0; X < Xmax2; X++) {
		double mathPowX = pow(X, 2);
		int Y = (int)((X * mathTanA) - ((g / (2 * mathPowS * mathCosPowA)) * mathPowX));
		buffGraphics->DrawLine(System::Drawing::Pens::DarkTurquoise, X / index, (600 - Y), (X / index), (600 - Y) + 1);
	}

	panel1->Update();
	panel1->Invalidate();
	}
	
}


public: System::Void sendButton_Click(System::Object^  sender, System::EventArgs^  e) {
	
	okno->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	okno->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	okno->ClientSize = System::Drawing::Size(1254, 648);
	okno->Controls->Add(this->panel1);
	this->Controls->Add(this->sendButton2);
	okno->Name = L"PanelForm";
	okno->Text = L"Simula";
	okno->ResumeLayout(false);
	okno->PerformLayout();
	okno->Show();
		
}
	public: System::Void sendButton2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->Controls->Add(this->panel1);
		okno->Close();
	}
};
}

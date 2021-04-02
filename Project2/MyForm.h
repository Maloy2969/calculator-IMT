//Owned by Maloy2969,��� ����� �� �������� 
#pragma once
#include<math.h>
#include<windows.h>
#include <iostream>
#include<stdlib.h>
double ves, rost, rost1,rost2, IMT, IMT1;
namespace Project2 {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(72, 426);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(198, 52);
			this->button1->TabIndex = 0;
			this->button1->Text = L"����������!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(72, 339);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(198, 30);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"���(� ��)";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(72, 382);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(198, 30);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"����(� ��)";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// MyForm
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1283, 553);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"��� by Maloy_2969";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		rost = Convert::ToDouble(textBox2->Text);
		ves = Convert::ToDouble(textBox1->Text);
		if (rost < 1 || ves < 1)
		{
			MessageBox::Show("���/���� �� ����� ���� ��������������", "Error 1", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else
		{
			rost1 = rost / 100;
			rost2 = pow(rost1, 2);
			IMT = ves / rost2;
			IMT1 = round(IMT);
			if (IMT1 < 16 && IMT1>0)
			{
				MessageBox::Show("��� ���= " + (IMT1).ToString() + " � � ��� ��������� ���� :(");
			}
			if (IMT1 >= 16 && IMT1 <= 18.5)
			{
				MessageBox::Show("��� ���= " + (IMT1).ToString() + " � � ��� ������������� ����� ���� ");
			}
			if (IMT1 >= 18.5 && IMT1 <= 24)
			{
				MessageBox::Show("��� ���= " + (IMT1).ToString() + " � � ��� ���������� ����� ����");
			}
			if (IMT1 >= 25 && IMT1 <= 30)
			{
				MessageBox::Show("��� ���= " + (IMT1).ToString() + " � � ��� ������������");
			}
			if (IMT1 >= 30 && IMT1 <= 35)
			{
				MessageBox::Show("��� ���= " + (IMT1).ToString() + " � � ��� �������� I �������");
			}
			if (IMT1 >= 35 && IMT1 <= 40)
			{
				MessageBox::Show("��� ���= " + (IMT1).ToString() + " � � ��� �������� II �������");
			}
			if (IMT1 >= 40)
			{
				MessageBox::Show("��� ���= " + (IMT1).ToString() + " � � ��� �������� III �������");
			}

		};
	};
	};
	}
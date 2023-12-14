#pragma once
#include "Contact.h"
#include "LinkedList.h"
//#include "MainForm.h"
#include <msclr\marshal_cppstd.h>
namespace ContactListLinkedList {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for addForm
	/// </summary>
	public ref class addForm : public System::Windows::Forms::Form
	{
	public:
		Form^ mainForm;
		addForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		addForm(Form^ f)
		{
			mainForm = f;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~addForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_firstname;
	protected:

	private: System::Windows::Forms::Label^ lbl_lastname;
	protected:

	private: System::Windows::Forms::Label^ lbl_phoneNumber;

	private: System::Windows::Forms::Label^ lbl_email;

	private: System::Windows::Forms::Label^ lbl_address;

	private: System::Windows::Forms::TextBox^ tb_address;
	private: System::Windows::Forms::TextBox^ tb_phoneNumber;
	private: System::Windows::Forms::TextBox^ tb_firstname;



	private: System::Windows::Forms::TextBox^ tb_lastname;

	private: System::Windows::Forms::TextBox^ tb_email;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btn_clear;

	private: System::Windows::Forms::Button^ btn_save;
	private: System::Windows::Forms::Button^ cancelButton;



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
			this->lbl_firstname = (gcnew System::Windows::Forms::Label());
			this->lbl_lastname = (gcnew System::Windows::Forms::Label());
			this->lbl_phoneNumber = (gcnew System::Windows::Forms::Label());
			this->lbl_email = (gcnew System::Windows::Forms::Label());
			this->lbl_address = (gcnew System::Windows::Forms::Label());
			this->tb_address = (gcnew System::Windows::Forms::TextBox());
			this->tb_phoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->tb_firstname = (gcnew System::Windows::Forms::TextBox());
			this->tb_lastname = (gcnew System::Windows::Forms::TextBox());
			this->tb_email = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->btn_save = (gcnew System::Windows::Forms::Button());
			this->btn_clear = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl_firstname
			// 
			this->lbl_firstname->AutoSize = true;
			this->lbl_firstname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_firstname->Location = System::Drawing::Point(12, 9);
			this->lbl_firstname->Name = L"lbl_firstname";
			this->lbl_firstname->Size = System::Drawing::Size(106, 25);
			this->lbl_firstname->TabIndex = 0;
			this->lbl_firstname->Text = L"First Name";
			// 
			// lbl_lastname
			// 
			this->lbl_lastname->AutoSize = true;
			this->lbl_lastname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_lastname->Location = System::Drawing::Point(12, 70);
			this->lbl_lastname->Name = L"lbl_lastname";
			this->lbl_lastname->Size = System::Drawing::Size(106, 25);
			this->lbl_lastname->TabIndex = 1;
			this->lbl_lastname->Text = L"Last Name";
			// 
			// lbl_phoneNumber
			// 
			this->lbl_phoneNumber->AutoSize = true;
			this->lbl_phoneNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_phoneNumber->Location = System::Drawing::Point(12, 131);
			this->lbl_phoneNumber->Name = L"lbl_phoneNumber";
			this->lbl_phoneNumber->Size = System::Drawing::Size(143, 25);
			this->lbl_phoneNumber->TabIndex = 2;
			this->lbl_phoneNumber->Text = L"Phone Number";
			// 
			// lbl_email
			// 
			this->lbl_email->AutoSize = true;
			this->lbl_email->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_email->Location = System::Drawing::Point(14, 192);
			this->lbl_email->Name = L"lbl_email";
			this->lbl_email->Size = System::Drawing::Size(60, 25);
			this->lbl_email->TabIndex = 3;
			this->lbl_email->Text = L"Email";
			// 
			// lbl_address
			// 
			this->lbl_address->AutoSize = true;
			this->lbl_address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_address->Location = System::Drawing::Point(16, 253);
			this->lbl_address->Name = L"lbl_address";
			this->lbl_address->Size = System::Drawing::Size(85, 25);
			this->lbl_address->TabIndex = 4;
			this->lbl_address->Text = L"Address";
			// 
			// tb_address
			// 
			this->tb_address->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_address->Location = System::Drawing::Point(12, 281);
			this->tb_address->Name = L"tb_address";
			this->tb_address->Size = System::Drawing::Size(345, 30);
			this->tb_address->TabIndex = 5;
			// 
			// tb_phoneNumber
			// 
			this->tb_phoneNumber->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_phoneNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_phoneNumber->Location = System::Drawing::Point(12, 159);
			this->tb_phoneNumber->Name = L"tb_phoneNumber";
			this->tb_phoneNumber->Size = System::Drawing::Size(345, 30);
			this->tb_phoneNumber->TabIndex = 6;
			// 
			// tb_firstname
			// 
			this->tb_firstname->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_firstname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_firstname->Location = System::Drawing::Point(12, 37);
			this->tb_firstname->Name = L"tb_firstname";
			this->tb_firstname->Size = System::Drawing::Size(345, 30);
			this->tb_firstname->TabIndex = 7;
			// 
			// tb_lastname
			// 
			this->tb_lastname->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_lastname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_lastname->Location = System::Drawing::Point(12, 98);
			this->tb_lastname->Name = L"tb_lastname";
			this->tb_lastname->Size = System::Drawing::Size(345, 30);
			this->tb_lastname->TabIndex = 8;
			// 
			// tb_email
			// 
			this->tb_email->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_email->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_email->Location = System::Drawing::Point(12, 220);
			this->tb_email->Name = L"tb_email";
			this->tb_email->Size = System::Drawing::Size(345, 30);
			this->tb_email->TabIndex = 9;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				121)));
			this->tableLayoutPanel1->Controls->Add(this->cancelButton, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->btn_save, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->btn_clear, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 325);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(345, 85);
			this->tableLayoutPanel1->TabIndex = 10;
			// 
			// cancelButton
			// 
			this->cancelButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cancelButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelButton->Location = System::Drawing::Point(3, 3);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(106, 79);
			this->cancelButton->TabIndex = 2;
			this->cancelButton->Text = L"Cancel";
			this->cancelButton->UseVisualStyleBackColor = true;
			this->cancelButton->Click += gcnew System::EventHandler(this, &addForm::button1_Click);
			// 
			// btn_save
			// 
			this->btn_save->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn_save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_save->Location = System::Drawing::Point(227, 3);
			this->btn_save->Name = L"btn_save";
			this->btn_save->Size = System::Drawing::Size(115, 79);
			this->btn_save->TabIndex = 1;
			this->btn_save->Text = L"Save";
			this->btn_save->UseVisualStyleBackColor = true;
			this->btn_save->Click += gcnew System::EventHandler(this, &addForm::btn_save_Click);
			// 
			// btn_clear
			// 
			this->btn_clear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn_clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_clear->Location = System::Drawing::Point(115, 3);
			this->btn_clear->Name = L"btn_clear";
			this->btn_clear->Size = System::Drawing::Size(106, 79);
			this->btn_clear->TabIndex = 0;
			this->btn_clear->Text = L"Clear";
			this->btn_clear->UseVisualStyleBackColor = true;
			this->btn_clear->Click += gcnew System::EventHandler(this, &addForm::btn_clear_Click);
			// 
			// addForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(369, 422);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->tb_email);
			this->Controls->Add(this->tb_lastname);
			this->Controls->Add(this->tb_firstname);
			this->Controls->Add(this->tb_phoneNumber);
			this->Controls->Add(this->tb_address);
			this->Controls->Add(this->lbl_address);
			this->Controls->Add(this->lbl_email);
			this->Controls->Add(this->lbl_phoneNumber);
			this->Controls->Add(this->lbl_lastname);
			this->Controls->Add(this->lbl_firstname);
			this->MaximumSize = System::Drawing::Size(527, 531);
			this->MinimumSize = System::Drawing::Size(387, 469);
			this->Name = L"addForm";
			this->Text = L"addForm";
			this->Load += gcnew System::EventHandler(this, &addForm::addForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void btn_clear_Click(System::Object^ sender, System::EventArgs^ e) {
	this->tb_firstname->Text = "";
	this->tb_lastname->Text = "";
	this->tb_phoneNumber->Text = "";
	this->tb_email->Text = "";
	this->tb_address->Text = "";
}
private: System::Void btn_save_Click(System::Object^ sender, System::EventArgs^ e) {
	LinkedList list;
	list.read();
	Contact c;
	if (tb_firstname->Text == "" || tb_lastname->Text == "" || tb_phoneNumber->Text == "" || tb_email->Text == "" || tb_address->Text == "")
	{
		MessageBox::Show("Please fill out all fields");
		return;
	}
	else if (!c.isValidName(msclr::interop::marshal_as<std::string>(tb_firstname->Text)))
	{
		MessageBox::Show("Please enter a valid first name");
		return;
	}
	else if (!c.isValidName(msclr::interop::marshal_as<std::string>(tb_lastname->Text)))
	{
		MessageBox::Show("Please enter a valid last name");
		return;
	}
	else if (!c.isValidPhone(msclr::interop::marshal_as<std::string>(tb_phoneNumber->Text)))
	{
		MessageBox::Show("Please enter a valid phone number");
		return;
	}
	else if (!c.isValidEmail(msclr::interop::marshal_as<std::string>(tb_email->Text)))
	{
		MessageBox::Show("Please enter a valid email");
		return;
	}
	else if (!c.isValidAddress(msclr::interop::marshal_as<std::string>(tb_address->Text)))
	{
		MessageBox::Show("Please enter a valid address");
		return;
	}
	else{
		list.insert(Contact(msclr::interop::marshal_as<std::string>(tb_firstname->Text), msclr::interop::marshal_as<std::string>(tb_lastname->Text), msclr::interop::marshal_as<std::string>(tb_phoneNumber->Text), msclr::interop::marshal_as<std::string>(tb_email->Text), msclr::interop::marshal_as<std::string>(tb_address->Text)), 0);
	}

	list.write();


	this->Hide();
    mainForm->Show();

	
}
private: System::Void addForm_Load(System::Object^ sender, System::EventArgs^ e) {
	mainForm->Hide();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	mainForm->Show();
}
};
}

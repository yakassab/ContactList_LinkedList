#pragma once
#include "Contact.h"
#include "LinkedList.h"
#include <msclr\marshal_cppstd.h>
#include "checks.h"
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
		LinkedList::NodePointer searchedNode;
		String^ mode;
		addForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		addForm(Form^ f, String^ m)
		{
			mainForm = f;
			mode = m;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		addForm(Form^ f, LinkedList::NodePointer node, String^ m)
		{
			mainForm = f;
			searchedNode = node;
			mode = m;
			InitializeComponent();
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
	private: System::Windows::Forms::Label^ labelbuildNo;

	private: System::Windows::Forms::TextBox^ tb_buildNo;




	private: System::Windows::Forms::TextBox^ tb_phoneNumber;
	private: System::Windows::Forms::TextBox^ tb_firstname;



	private: System::Windows::Forms::TextBox^ tb_lastname;

	private: System::Windows::Forms::TextBox^ tb_email;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btn_clear;

	private: System::Windows::Forms::Button^ btn_save;
	private: System::Windows::Forms::Button^ cancelButton;
	private: System::Windows::Forms::TextBox^ tb_street;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tb_City;
	private: System::Windows::Forms::Label^ label2;



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
			this->labelbuildNo = (gcnew System::Windows::Forms::Label());
			this->tb_buildNo = (gcnew System::Windows::Forms::TextBox());
			this->tb_phoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->tb_firstname = (gcnew System::Windows::Forms::TextBox());
			this->tb_lastname = (gcnew System::Windows::Forms::TextBox());
			this->tb_email = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->btn_save = (gcnew System::Windows::Forms::Button());
			this->btn_clear = (gcnew System::Windows::Forms::Button());
			this->tb_street = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tb_City = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
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
			// labelbuildNo
			// 
			this->labelbuildNo->AutoSize = true;
			this->labelbuildNo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelbuildNo->Location = System::Drawing::Point(12, 253);
			this->labelbuildNo->Name = L"labelbuildNo";
			this->labelbuildNo->Size = System::Drawing::Size(116, 25);
			this->labelbuildNo->TabIndex = 4;
			this->labelbuildNo->Text = L"Building No.";
			// 
			// tb_buildNo
			// 
			this->tb_buildNo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_buildNo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_buildNo->Location = System::Drawing::Point(12, 281);
			this->tb_buildNo->Name = L"tb_buildNo";
			this->tb_buildNo->Size = System::Drawing::Size(375, 30);
			this->tb_buildNo->TabIndex = 5;
			// 
			// tb_phoneNumber
			// 
			this->tb_phoneNumber->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_phoneNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_phoneNumber->Location = System::Drawing::Point(12, 159);
			this->tb_phoneNumber->Name = L"tb_phoneNumber";
			this->tb_phoneNumber->Size = System::Drawing::Size(375, 30);
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
			this->tb_firstname->Size = System::Drawing::Size(375, 30);
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
			this->tb_lastname->Size = System::Drawing::Size(375, 30);
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
			this->tb_email->Size = System::Drawing::Size(375, 30);
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
				123)));
			this->tableLayoutPanel1->Controls->Add(this->cancelButton, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->btn_save, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->btn_clear, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 440);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(375, 85);
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
			this->cancelButton->Size = System::Drawing::Size(120, 79);
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
			this->btn_save->Location = System::Drawing::Point(255, 3);
			this->btn_save->Name = L"btn_save";
			this->btn_save->Size = System::Drawing::Size(117, 79);
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
			this->btn_clear->Location = System::Drawing::Point(129, 3);
			this->btn_clear->Name = L"btn_clear";
			this->btn_clear->Size = System::Drawing::Size(120, 79);
			this->btn_clear->TabIndex = 0;
			this->btn_clear->Text = L"Clear";
			this->btn_clear->UseVisualStyleBackColor = true;
			this->btn_clear->Click += gcnew System::EventHandler(this, &addForm::btn_clear_Click);
			// 
			// tb_street
			// 
			this->tb_street->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_street->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_street->Location = System::Drawing::Point(12, 342);
			this->tb_street->Name = L"tb_street";
			this->tb_street->Size = System::Drawing::Size(375, 30);
			this->tb_street->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(10, 314);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 25);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Street";
			// 
			// tb_City
			// 
			this->tb_City->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_City->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_City->Location = System::Drawing::Point(12, 405);
			this->tb_City->Name = L"tb_City";
			this->tb_City->Size = System::Drawing::Size(375, 30);
			this->tb_City->TabIndex = 14;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 377);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 25);
			this->label2->TabIndex = 13;
			this->label2->Text = L"City";
			// 
			// addForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(399, 537);
			this->Controls->Add(this->tb_City);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tb_street);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->tb_email);
			this->Controls->Add(this->tb_lastname);
			this->Controls->Add(this->tb_firstname);
			this->Controls->Add(this->tb_phoneNumber);
			this->Controls->Add(this->tb_buildNo);
			this->Controls->Add(this->labelbuildNo);
			this->Controls->Add(this->lbl_email);
			this->Controls->Add(this->lbl_phoneNumber);
			this->Controls->Add(this->lbl_lastname);
			this->Controls->Add(this->lbl_firstname);
			this->MaximumSize = System::Drawing::Size(700, 700);
			this->MinimumSize = System::Drawing::Size(387, 469);
			this->Name = L"addForm";
			this->Text = L"Add Contact";
			this->Load += gcnew System::EventHandler(this, &addForm::addForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void btn_clear_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mode == "add") {
		this->tb_firstname->Text = "";
		this->tb_lastname->Text = "";
		this->tb_phoneNumber->Text = "";
		this->tb_email->Text = "";
		this->tb_buildNo->Text = "";
		this->tb_street->Text = "";
		this->tb_City->Text = "";
	}
	else if (mode == "edit") {
		
		String^ address = msclr::interop::marshal_as<String^>(searchedNode->data.getAddress()); 
		String^ buildNo;
		String^ street;
		String^ city;
		int i = 0;
		while (address[i] != ',') {
			buildNo += address[i];
			i++;
		}
		i++;
		while (address[i] != ',') {
			street += address[i];
			i++;
		}
		i++;
		while (i < address->Length) {
			city += address[i];
			i++;
		}

		if (street[0] == ' ') {
			street = street->Remove(0, 1);
		}
		if (city[0] == ' ') {
			city = city->Remove(0, 1);
		}


		this->tb_firstname->Text = msclr::interop::marshal_as<String^>(searchedNode->data.getFirstName());
		this->tb_lastname->Text = msclr::interop::marshal_as<String^>(searchedNode->data.getLastName());
		this->tb_phoneNumber->Text = msclr::interop::marshal_as<String^>(searchedNode->data.getPhone());
		this->tb_email->Text = msclr::interop::marshal_as<String^>(searchedNode->data.getEmail());
		this->tb_buildNo->Text = buildNo;
		this->tb_street->Text = street;
		this->tb_City->Text = city;
	}
}
private: System::Void btn_save_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mode == "add") {

		//concat address
		String^ address = tb_buildNo->Text + ", " + tb_street->Text + ", " + tb_City->Text;
		// check if phone number starts with +2 then remove it
		if (tb_phoneNumber->Text->StartsWith("+2"))
		{
			tb_phoneNumber->Text = tb_phoneNumber->Text->Remove(0, 2);
		}

		LinkedList list;
		list.read();
		
		if (tb_firstname->Text == "" || tb_lastname->Text == "" || tb_phoneNumber->Text == "" || tb_email->Text == "" || tb_buildNo->Text == "" || tb_City->Text == "")
		{
			MessageBox::Show("Please fill out all fields");
			return;
		}
		else if (!isValidName(msclr::interop::marshal_as<std::string>(tb_firstname->Text)))
		{
			MessageBox::Show("Please enter a valid first name");
			return;
		}
		else if (!isValidName(msclr::interop::marshal_as<std::string>(tb_lastname->Text)))
		{
			MessageBox::Show("Please enter a valid last name");
			return;
		}
		else if (!isValidPhone(msclr::interop::marshal_as<std::string>(tb_phoneNumber->Text)))
		{
			MessageBox::Show("Please enter a valid phone number");
			return;
		}
		else if (!isValidEmail(msclr::interop::marshal_as<std::string>(tb_email->Text)))
		{
			MessageBox::Show("Please enter a valid email");
			return;
		}
		else if (!isValidBuildNo(msclr::interop::marshal_as<std::string>(tb_buildNo->Text)))
		{
			MessageBox::Show("Please enter a valid building number");
			return;
		}
		else if (!isValidStreet(msclr::interop::marshal_as<std::string>(tb_street->Text)))
		{
			MessageBox::Show("Please enter a valid street");
			return;
		}
		else if (!isValidCity(msclr::interop::marshal_as<std::string>(tb_City->Text)))
		{
			MessageBox::Show("Please enter a valid city");
			return;
		}
		else {
			list.sortedInsert(Contact(msclr::interop::marshal_as<std::string>(tb_firstname->Text), msclr::interop::marshal_as<std::string>(tb_lastname->Text), msclr::interop::marshal_as<std::string>(tb_phoneNumber->Text), msclr::interop::marshal_as<std::string>(tb_email->Text), msclr::interop::marshal_as<std::string>(address)));
		}
		list.sort();
		list.write();


		
	} else if(mode == "edit") {
		//concat address
		String^ address = tb_buildNo->Text + ", " + tb_street->Text + ", " + tb_City->Text;
		// check if phone number starts with +2 then remove it
		if (tb_phoneNumber->Text->StartsWith("+2"))
		{
			tb_phoneNumber->Text = tb_phoneNumber->Text->Remove(0, 2);
		}

		LinkedList list;
		list.read();
		Contact c;
		if (tb_firstname->Text == "" || tb_lastname->Text == "" || tb_phoneNumber->Text == "" || tb_email->Text == "" || tb_buildNo->Text == "" || tb_City->Text == "")
		{
			MessageBox::Show("Please fill out all fields");
			return;
		}
		else if (!isValidName(msclr::interop::marshal_as<std::string>(tb_firstname->Text)))
		{
			MessageBox::Show("Please enter a valid first name");
			return;
		}
		else if (!isValidName(msclr::interop::marshal_as<std::string>(tb_lastname->Text)))
		{
			MessageBox::Show("Please enter a valid last name");
			return;
		}
		else if (!isValidPhone(msclr::interop::marshal_as<std::string>(tb_phoneNumber->Text)))
		{
			MessageBox::Show("Please enter a valid phone number");
			return;
		}
		else if (!isValidEmail(msclr::interop::marshal_as<std::string>(tb_email->Text)))
		{
			MessageBox::Show("Please enter a valid email");
			return;
		}
		else if (!isValidBuildNo(msclr::interop::marshal_as<std::string>(tb_buildNo->Text)))
		{
			MessageBox::Show("Please enter a valid building number");
			return;
		}
		else if (!isValidStreet(msclr::interop::marshal_as<std::string>(tb_street->Text)))
		{
			MessageBox::Show("Please enter a valid street");
			return;
		}
		else if (!isValidCity(msclr::interop::marshal_as<std::string>(tb_City->Text)))
		{
			MessageBox::Show("Please enter a valid city");
			return;
		}
		else {
			list.erase(searchedNode->data);
			list.sortedInsert(Contact(msclr::interop::marshal_as<std::string>(tb_firstname->Text), msclr::interop::marshal_as<std::string>(tb_lastname->Text), msclr::interop::marshal_as<std::string>(tb_phoneNumber->Text), msclr::interop::marshal_as<std::string>(tb_email->Text), msclr::interop::marshal_as<std::string>(address)));
		}
		
		list.write();
	
	}
	this->Hide();
	mainForm->Show();
}
private: System::Void addForm_Load(System::Object^ sender, System::EventArgs^ e) {
	if (mode == "add") {
		mainForm->Hide();
	}
	else if (mode == "edit") {
		this->btn_clear->Text = "Reset";
		this->Text = "Edit Contact";
		String^ address = msclr::interop::marshal_as<String^>(searchedNode->data.getAddress()); 
		String^ buildNo;
		String^ street;
		String^ city;
		int i = 0;

		while (address[i] != ',') {
			buildNo += address[i];
			i++;
		}
		i++;
		while (address[i] != ',') {
			street += address[i];
			i++;
		}
		i++;
		while (i < address->Length) {
			city += address[i];
			i++;
		}

		if (street[0] == ' ') {
			street = street->Remove(0, 1);
		}
		if (city[0] == ' ') {
			city = city->Remove(0, 1);
		}

		this->tb_firstname->Text = msclr::interop::marshal_as<String^>(searchedNode->data.getFirstName());
		this->tb_lastname->Text = msclr::interop::marshal_as<String^>(searchedNode->data.getLastName());
		this->tb_phoneNumber->Text = msclr::interop::marshal_as<String^>(searchedNode->data.getPhone());
		this->tb_email->Text = msclr::interop::marshal_as<String^>(searchedNode->data.getEmail());
		this->tb_buildNo->Text = buildNo;
		this->tb_street->Text = street;
		this->tb_City->Text = city;
	}
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	mainForm->Show();
}
};
}

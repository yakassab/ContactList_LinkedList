#pragma once
#include "LinkedList.h"
#include "Contact.h"
#include "addForm.h"
#include "DetailsForm.h"
#include <regex>
#include <msclr\marshal_cppstd.h>
namespace ContactListLinkedList {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		String^ searchedName;
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;


	private: System::Windows::Forms::Button^ addButton;

	private: System::Windows::Forms::ListBox^ ContactsListBox;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;





	protected:

	protected:


	protected:

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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->ContactsListBox = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->addButton, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->ContactsListBox, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 122);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 84)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(485, 562);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// addButton
			// 
			this->addButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->addButton->Location = System::Drawing::Point(3, 481);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(479, 78);
			this->addButton->TabIndex = 3;
			this->addButton->Text = L"Add Contact";
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Click += gcnew System::EventHandler(this, &MainForm::addButton_Click);
			// 
			// ContactsListBox
			// 
			this->ContactsListBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ContactsListBox->FormattingEnabled = true;
			this->ContactsListBox->ItemHeight = 52;
			this->ContactsListBox->Location = System::Drawing::Point(3, 3);
			this->ContactsListBox->Name = L"ContactsListBox";
			this->ContactsListBox->Size = System::Drawing::Size(479, 472);
			this->ContactsListBox->TabIndex = 4;
			this->ContactsListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::ContactsListBox_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(15, 59);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(410, 62);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(12, 4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(413, 52);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Search For Contact:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(431, 56);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(66, 60);
			this->button1->TabIndex = 4;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(26, 52);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(509, 696);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(10);
			this->Name = L"MainForm";
			this->Text = L"Contacts";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e){

		// Create a list object.
		LinkedList list;

		// Read the list from the file.
		list.read();

		// Create a ptr that points to the first node of the list.
		LinkedList::NodePointer ptr = list.first;
		int i = 0;

		// Add first name and last name of each contact to the list box.
		while (ptr != NULL) {
			ContactsListBox->Items->Insert(i++, gcnew String((ptr->data.getFirstName() + " " + ptr->data.getLastName()).c_str()));
			ptr = ptr->next;
		}

		
	}


	
	
	
	private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
		addForm^ form = gcnew addForm(this, "add");
		form->ShowDialog();
		LinkedList list;
		list.read();
		list.sort();

		// Create a ptr that points to the first node of the list.
		LinkedList::NodePointer ptr = list.first;
		int i = 0;

		ContactsListBox->Items->Clear();
		// Add first name and last name of each contact to the list box.
		while (ptr != NULL) {
			ContactsListBox->Items->Insert(i++, gcnew String((ptr->data.getFirstName() + " " + ptr->data.getLastName()).c_str()));
			ptr = ptr->next;
		}
	}


	private: System::Void update_LB() {
		LinkedList list1, list;
		list1.read();
		string n = msclr::interop::marshal_as<std::string>(textBox1->Text);
		list = list1.regexSearch(n);
		
		

		
		LinkedList::NodePointer ptr = list.first;
		int i = 0;

		ContactsListBox->Items->Clear();
		// Add first name and last name of each contact to the list box.
		while (ptr != NULL) {
			ContactsListBox->Items->Insert(i++, gcnew String((ptr->data.getFirstName() + " " + ptr->data.getLastName()).c_str()));
			ptr = ptr->next;
		}
	}


private: System::Void ContactsListBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
	//get the index of the selected item
	int index = ContactsListBox->SelectedIndex;

	LinkedList list1;

	list1.read();
	LinkedList list;
	string n = msclr::interop::marshal_as<std::string>(textBox1->Text);
	list = list1.regexSearch(n);
	

	
    String^ name = gcnew String((list.getContact(index).getFirstName() + " " + list.getContact(index).getLastName()).c_str());
	String^ phoneNumber = gcnew String(list.getContact(index).getPhone().c_str());
	String^ email = gcnew String(list.getContact(index).getEmail().c_str());
	String^ address = gcnew String(list.getContact(index).getAddress().c_str());
	
	DetailsForm^ form = gcnew DetailsForm(name, phoneNumber, email, address, index, textBox1->Text);
	form->ShowDialog();
	update_LB();
	

}	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	


	
	ContactsListBox->Items->Clear();
	string name = msclr::interop::marshal_as<std::string>(textBox1->Text);

	// Removes anything that isnt a digit or a + sign or a letter or a space from name.
	regex r("[^0-9a-zA-Z\\s\\+]");
	name = regex_replace(name, r, "");

	

	searchedName = textBox1->Text;
	LinkedList list;
	list.read();
	if (name == "") {
		// Displaying the full list.
		LinkedList::Node* ptr = list.first;
		int i = 0;

		// Add first name and last name of each contact to the list box.
		while (ptr != NULL) {
			ContactsListBox->Items->Insert(i++, gcnew String((ptr->data.getFirstName() + " " + ptr->data.getLastName()).c_str()));
			ptr = ptr->next;
		}
	}
	else{

		LinkedList regexList;
		regexList = list.regexSearch(name);
		LinkedList::Node* ptr = regexList.first;

		int i = 0;

		// Add first name and last name of each contact to the list box.
		while (ptr != NULL) {
			ContactsListBox->Items->Insert(i++, gcnew String((ptr->data.getFirstName() + " " + ptr->data.getLastName()).c_str()));
			ptr = ptr->next;
		}
	}
}
};
}

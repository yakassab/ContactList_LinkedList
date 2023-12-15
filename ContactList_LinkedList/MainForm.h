#pragma once
#include "LinkedList.h"
#include "Contact.h"
#include "addForm.h"
#include "DetailsForm.h"
#include "SearchForm.h"
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
	private: System::Windows::Forms::Button^ searchButton;

	private: System::Windows::Forms::Button^ addButton;

	private: System::Windows::Forms::ListBox^ ContactsListBox;





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
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->ContactsListBox = (gcnew System::Windows::Forms::ListBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->searchButton, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->addButton, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->ContactsListBox, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 12);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 84)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(485, 460);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// searchButton
			// 
			this->searchButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->searchButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->searchButton->Location = System::Drawing::Point(245, 379);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(237, 78);
			this->searchButton->TabIndex = 2;
			this->searchButton->Text = L"Search";
			this->searchButton->UseVisualStyleBackColor = true;
			this->searchButton->Click += gcnew System::EventHandler(this, &MainForm::searchButton_Click);
			// 
			// addButton
			// 
			this->addButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->addButton->Location = System::Drawing::Point(3, 379);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(236, 78);
			this->addButton->TabIndex = 3;
			this->addButton->Text = L"Add";
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Click += gcnew System::EventHandler(this, &MainForm::addButton_Click);
			// 
			// ContactsListBox
			// 
			this->ContactsListBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->SetColumnSpan(this->ContactsListBox, 2);
			this->ContactsListBox->FormattingEnabled = true;
			this->ContactsListBox->ItemHeight = 52;
			this->ContactsListBox->Location = System::Drawing::Point(3, 3);
			this->ContactsListBox->Name = L"ContactsListBox";
			this->ContactsListBox->Size = System::Drawing::Size(479, 368);
			this->ContactsListBox->TabIndex = 4;
			this->ContactsListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::ContactsListBox_SelectedIndexChanged);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(26, 52);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(509, 484);
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

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e){

		// Create a list object.
		LinkedList list;

		// Read the list from the file.
		list.read();
		//list.erase(0);
		//list.insert(Contact("youssef", "kassab", "01206437599", "ahmedd@gmail.com", "new York"),0);

		//list.erase("", "");
		//list.erase(1);
		
		// Sort the list.
		list.sort();

		// Create a ptr that points to the first node of the list.
		LinkedList::NodePointer ptr = list.first;
		int i = 0;

		// Add first name and last name of each contact to the list box.
		while (ptr != NULL) {
			ContactsListBox->Items->Insert(i++, gcnew String((ptr->data.getFirstName() + " " + ptr->data.getLastName()).c_str()));
			ptr = ptr->next;
		}


		
		
		list.write();
		
	}


	
	
	private: System::Void searchButton_Click(System::Object^ sender, System::EventArgs^ e) {
		SearchForm^ form = gcnew SearchForm();
		form->ShowDialog();

	}
	private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
		//write code to move from one form to another
		addForm^ form = gcnew addForm(this);
		form->ShowDialog();
		LinkedList list;
		list.read();

		// Sort the list.
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
private: System::Void ContactsListBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
	//get the index of the selected item
	int index = ContactsListBox->SelectedIndex;

	LinkedList list;

	list.read();
	list.sort();

	
    String^ name = gcnew String((list.getContact(index).getFirstName() + " " + list.getContact(index).getLastName()).c_str());
	String^ phoneNumber = gcnew String(list.getContact(index).getPhone().c_str());
	String^ email = gcnew String(list.getContact(index).getEmail().c_str());
	String^ address = gcnew String(list.getContact(index).getAddress().c_str());
	
	DetailsForm^ form = gcnew DetailsForm(name, phoneNumber, email, address, index);
	form->ShowDialog();
	ContactsListBox->Items->Clear();
	LinkedList l2;
	l2.read();
	l2.sort();

	// Create a ptr that points to the first node of the list.
	LinkedList::NodePointer ptr = l2.first;
	int i = 0;

	
	// Add first name and last name of each contact to the list box.
	while (ptr != NULL) {
		ContactsListBox->Items->Insert(i++, gcnew String((ptr->data.getFirstName() + " " + ptr->data.getLastName()).c_str()));
		ptr = ptr->next;
	}

}	
};
}

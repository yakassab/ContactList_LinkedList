#pragma once
#include "LinkedList.h"
#include "Contact.h"

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
			this->ContactsListBox = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// ContactsListBox
			// 
			this->ContactsListBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ContactsListBox->FormattingEnabled = true;
			this->ContactsListBox->ItemHeight = 52;
			this->ContactsListBox->Location = System::Drawing::Point(17, 101);
			this->ContactsListBox->Name = L"ContactsListBox";
			this->ContactsListBox->Size = System::Drawing::Size(459, 368);
			this->ContactsListBox->TabIndex = 0;
			this->ContactsListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::listBox1_SelectedIndexChanged);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(26, 52);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(488, 491);
			this->Controls->Add(this->ContactsListBox);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(10);
			this->Name = L"MainForm";
			this->Text = L"Contacts";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e){
		LinkedList list;
		list.read();
		//create a ptr that points to the first node of the list
		LinkedList::NodePointer ptr = list.first;
		int i = 0;
		//add first name of each contact to the list box.
		while (ptr != NULL) {
			ContactsListBox->Items->Insert(i++, gcnew String((ptr->data.getFirstName() + " " + ptr->data.getLastName()).c_str()));
			ptr = ptr->next;
		}


		
		


		list.write();
	}


	
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}

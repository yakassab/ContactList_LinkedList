#pragma once
#include "LinkedList.h"
#include "Contact.h"
#include <msclr\marshal_cppstd.h>

namespace ContactListLinkedList {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SearchForm
	/// </summary>
	public ref class SearchForm : public System::Windows::Forms::Form
	{
	public:
		SearchForm(void)
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
		~SearchForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ searchButton;
	private: System::Windows::Forms::ListBox^ searchLB;



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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->searchLB = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 58);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(310, 46);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(252, 50);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Enter Name:";
			// 
			// searchButton
			// 
			this->searchButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->searchButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchButton->Location = System::Drawing::Point(328, 58);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(143, 46);
			this->searchButton->TabIndex = 2;
			this->searchButton->Text = L"Search";
			this->searchButton->UseVisualStyleBackColor = true;
			this->searchButton->Click += gcnew System::EventHandler(this, &SearchForm::searchButton_Click);
			// 
			// searchLB
			// 
			this->searchLB->FormattingEnabled = true;
			this->searchLB->ItemHeight = 16;
			this->searchLB->Location = System::Drawing::Point(12, 117);
			this->searchLB->Name = L"searchLB";
			this->searchLB->Size = System::Drawing::Size(459, 308);
			this->searchLB->TabIndex = 3;
			// 
			// SearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(483, 437);
			this->Controls->Add(this->searchLB);
			this->Controls->Add(this->searchButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"SearchForm";
			this->Text = L"SearchForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void searchButton_Click(System::Object^ sender, System::EventArgs^ e) {
	searchLB->Items->Clear();
	string name = msclr::interop::marshal_as<std::string>(textBox1->Text);
	if (name == "") {
		MessageBox::Show("Please enter a name to search for.");
	}
	else {

		LinkedList list;
		list.read();
		LinkedList::Node* resListHead = list.regexSearch(name);
		LinkedList::Node* ptr = resListHead;
		int i = 0;

		searchLB->Items->Clear();
		// Add first name and last name of each contact to the list box.
		while (ptr != NULL) {
			searchLB->Items->Insert(i++, gcnew String((ptr->data.getFirstName() + " " + ptr->data.getLastName()).c_str()));
			ptr = ptr->next;
		}
	}
}
};
}

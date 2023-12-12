#pragma once
#include <print>

namespace Project2 {

    using namespace System;   //allow to use classes
    using namespace System::ComponentModel; //types of component-based programming and data binding.
    using namespace System::Windows::Forms; //provides classes for creating and managing Windows Forms
    using namespace System::Data; //data access, manipulation, and storage
    using namespace System::Drawing; //working with graphics and images
    using namespace System::Data::SqlClient; //for interacting with Microsoft SQL Server databases
    using namespace System::Text::RegularExpressions;

    public ref class MyForm : public System::Windows::Forms::Form //defines class named Myform which is inheritef from System::Windows::Forms::Form (also set visibilty to public)
    {
    public:
        MyForm(void)   // constructor - constructing object
        {
            InitializeComponent();
        }

    protected:
        ~MyForm()  // destructor - destructing object
        {
            if (components)
            {
                delete components;
            }
        }
        //defining  private member variables within  class named MyForm of diff types like buttons labels textbox , etx
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;


    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label5;

    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;



           //now we will be initialising components for GUI which are private and protected


    private:
        System::ComponentModel::Container^ components; //syntax for initializing component

        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label1->Location = System::Drawing::Point(53, 9);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(258, 22);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Enter the following Information";
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::SystemColors::Highlight;
            this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label2->Location = System::Drawing::Point(13, 65);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(53, 22);
            this->label2->TabIndex = 1;
            this->label2->Text = L"Name";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::SystemColors::Highlight;
            this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label3->Location = System::Drawing::Point(12, 114);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(125, 22);
            this->label3->TabIndex = 2;
            this->label3->Text = L"Registration No.";
            this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(236, 65);
            this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(148, 22);
            this->textBox3->TabIndex = 6;
            this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged_1);
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::SpringGreen;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(188, 379);
            this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(95, 37);
            this->button1->TabIndex = 7;
            this->button1->Text = L"ENTER";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->Location = System::Drawing::Point(307, 379);
            this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button2->Name = L"button2";
            this->button2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->button2->Size = System::Drawing::Size(108, 37);
            this->button2->TabIndex = 9;
            this->button2->Text = L"CANCEL";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(236, 114);
            this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(148, 22);
            this->textBox2->TabIndex = 10;
            this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::SystemColors::Highlight;
            this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label4->Location = System::Drawing::Point(13, 166);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(80, 22);
            this->label4->TabIndex = 11;
            this->label4->Text = L"Semester";
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(236, 166);
            this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(148, 22);
            this->textBox1->TabIndex = 12;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::SystemColors::Highlight;
            this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label5->Location = System::Drawing::Point(13, 222);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(46, 22);
            this->label5->TabIndex = 13;
            this->label5->Text = L"DOB";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::SystemColors::Highlight;
            this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label6->Location = System::Drawing::Point(13, 322);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(71, 22);
            this->label6->TabIndex = 15;
            this->label6->Text = L"Email ID";
            this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->BackColor = System::Drawing::SystemColors::Highlight;
            this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label7->Location = System::Drawing::Point(13, 272);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(85, 22);
            this->label7->TabIndex = 16;
            this->label7->Text = L"Phone No.";
            // 
            // textBox5
            // 
            this->textBox5->Location = System::Drawing::Point(236, 276);
            this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(148, 22);
            this->textBox5->TabIndex = 17;
            this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
            // 
            // textBox6
            // 
            this->textBox6->Location = System::Drawing::Point(236, 326);
            this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(148, 22);
            this->textBox6->TabIndex = 18;
            // 
            // textBox4
            // 
            this->textBox4->Location = System::Drawing::Point(13, 394);
            this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(148, 22);
            this->textBox4->TabIndex = 19;
            this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged_1);
            // 
            // dateTimePicker1
            // 
            this->dateTimePicker1->Location = System::Drawing::Point(236, 222);
            this->dateTimePicker1->Name = L"dateTimePicker1";
            this->dateTimePicker1->Size = System::Drawing::Size(148, 22);
            this->dateTimePicker1->TabIndex = 20;
            this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker1_ValueChanged_1);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::Teal;
            this->ClientSize = System::Drawing::Size(415, 441);
            this->Controls->Add(this->dateTimePicker1);
            this->Controls->Add(this->textBox4);
            this->Controls->Add(this->textBox6);
            this->Controls->Add(this->textBox5);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->ResumeLayout(false);
            this->PerformLayout();

        }

        // Event handlers


        //what will happen if we click on button close?

    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
    {
        this->Close();
    }

           //what will happen if we click on button click


    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
    {
        String^ constring = L"Server=VAIBHAV_LAPTOP\\SQLEXPRESS;Database=schoolproject;User ID=sa;Password=hello1234;";
        //declares a string constring; ^ is used to declare a handle to a .NET reference object; constring is connected to sql database


        SqlConnection^ conDatabase = gcnew SqlConnection(constring);
        //Here, a SqlConnection^  conDatabase is declared SqlConnection class. This creates a connection to the SQL Server database using the connection string from constring


        SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT INTO [table] ([Name], [Registration No.], [Semester],[DOB],[Phone No.],[Email ID]) VALUES (@Name, @RegNumber, @Semester, @DOB,@Phone,@Email);", conDatabase);
        //inserts values using sqlcommand named database into our database and what to insert



        //these values will be inserted after being converted into text format
        cmdDataBase->Parameters->AddWithValue("@Name", this->textBox3->Text);
        cmdDataBase->Parameters->AddWithValue("@RegNumber", this->textBox2->Text);
        cmdDataBase->Parameters->AddWithValue("Semester", this->textBox1->Text);
        cmdDataBase->Parameters->AddWithValue("@DOB", this->textBox4->Text);
        cmdDataBase->Parameters->AddWithValue("Phone", this->textBox5->Text);
        cmdDataBase->Parameters->AddWithValue("Email", this->textBox6->Text);



        //regex

        String^ emailPattern = "^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.com$";
        if (!Regex::IsMatch(this->textBox6->Text, emailPattern))
        {
            MessageBox::Show("Invalid email");
            return;
        }

        String^ numbercheck = "^[0-9]{10}$";
        if (!Regex::IsMatch(this->textBox5->Text, numbercheck))
        {
            MessageBox::Show("Invalid Number");
            return;
        }

       

       


        //to handle exceptions
        try {
            conDatabase->Open();
            cmdDataBase->ExecuteNonQuery();
            MessageBox::Show("Data Inserted Successfully");
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message); //displays error message like in case of connection issues data type input issues etc etc
        }
        finally {
            conDatabase->Close(); //guranteed to close no matter what
        }
    }

    private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox3_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox4_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateTimePicker1_ValueChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
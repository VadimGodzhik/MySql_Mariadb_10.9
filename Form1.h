#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient; // manuel hinzugefügt

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ tb_Nachname;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ idTitel;
	private: System::Windows::Forms::Label^ txtID;
	private: System::Windows::Forms::Label^ nachnameTitel;
	private: System::Windows::Forms::TextBox^ txtNachname;
	private: System::Windows::Forms::Label^ vornameTitel;
	private: System::Windows::Forms::TextBox^ txtVorname;
	private: System::Windows::Forms::Button^ btLinks;
	private: System::Windows::Forms::Button^ btRechts;
	private: System::Windows::Forms::TextBox^ txtDatensatz;
	private: System::Windows::Forms::Label^ trennenLb;
	private: System::Windows::Forms::TextBox^ txtMaxDat;
	private: System::Windows::Forms::Button^ btAuslesen;
	private: System::Windows::Forms::Button^ btAendern;
	private: System::Windows::Forms::Button^ btNeu;
	private: System::Windows::Forms::Button^ btLoeschen;

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
			this->tb_Nachname = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->idTitel = (gcnew System::Windows::Forms::Label());
			this->txtID = (gcnew System::Windows::Forms::Label());
			this->nachnameTitel = (gcnew System::Windows::Forms::Label());
			this->txtNachname = (gcnew System::Windows::Forms::TextBox());
			this->vornameTitel = (gcnew System::Windows::Forms::Label());
			this->txtVorname = (gcnew System::Windows::Forms::TextBox());
			this->btLinks = (gcnew System::Windows::Forms::Button());
			this->btRechts = (gcnew System::Windows::Forms::Button());
			this->txtDatensatz = (gcnew System::Windows::Forms::TextBox());
			this->trennenLb = (gcnew System::Windows::Forms::Label());
			this->txtMaxDat = (gcnew System::Windows::Forms::TextBox());
			this->btAuslesen = (gcnew System::Windows::Forms::Button());
			this->btAendern = (gcnew System::Windows::Forms::Button());
			this->btNeu = (gcnew System::Windows::Forms::Button());
			this->btLoeschen = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tb_Nachname
			// 
			this->tb_Nachname->Location = System::Drawing::Point(50, 34);
			this->tb_Nachname->Multiline = true;
			this->tb_Nachname->Name = L"tb_Nachname";
			this->tb_Nachname->Size = System::Drawing::Size(260, 150);
			this->tb_Nachname->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(68, 220);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(242, 56);
			this->button1->TabIndex = 2;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// idTitel
			// 
			this->idTitel->AutoSize = true;
			this->idTitel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idTitel->Location = System::Drawing::Point(460, 37);
			this->idTitel->Name = L"idTitel";
			this->idTitel->Size = System::Drawing::Size(21, 17);
			this->idTitel->TabIndex = 3;
			this->idTitel->Text = L"ID";
			this->idTitel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// txtID
			// 
			this->txtID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtID->Location = System::Drawing::Point(546, 37);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(165, 23);
			this->txtID->TabIndex = 4;
			this->txtID->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// nachnameTitel
			// 
			this->nachnameTitel->AutoSize = true;
			this->nachnameTitel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nachnameTitel->Location = System::Drawing::Point(460, 84);
			this->nachnameTitel->Name = L"nachnameTitel";
			this->nachnameTitel->Size = System::Drawing::Size(76, 17);
			this->nachnameTitel->TabIndex = 3;
			this->nachnameTitel->Text = L"Nachname";
			this->nachnameTitel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// txtNachname
			// 
			this->txtNachname->Location = System::Drawing::Point(546, 77);
			this->txtNachname->Multiline = true;
			this->txtNachname->Name = L"txtNachname";
			this->txtNachname->Size = System::Drawing::Size(165, 26);
			this->txtNachname->TabIndex = 5;
			// 
			// vornameTitel
			// 
			this->vornameTitel->AutoSize = true;
			this->vornameTitel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vornameTitel->Location = System::Drawing::Point(460, 124);
			this->vornameTitel->Name = L"vornameTitel";
			this->vornameTitel->Size = System::Drawing::Size(65, 17);
			this->vornameTitel->TabIndex = 3;
			this->vornameTitel->Text = L"Vorname";
			this->vornameTitel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// txtVorname
			// 
			this->txtVorname->Location = System::Drawing::Point(546, 124);
			this->txtVorname->Multiline = true;
			this->txtVorname->Name = L"txtVorname";
			this->txtVorname->Size = System::Drawing::Size(165, 26);
			this->txtVorname->TabIndex = 5;
			// 
			// btLinks
			// 
			this->btLinks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btLinks->Location = System::Drawing::Point(463, 164);
			this->btLinks->Name = L"btLinks";
			this->btLinks->Size = System::Drawing::Size(48, 38);
			this->btLinks->TabIndex = 6;
			this->btLinks->Text = L"<";
			this->btLinks->UseVisualStyleBackColor = true;
			this->btLinks->Click += gcnew System::EventHandler(this, &Form1::btLinks_Click);
			// 
			// btRechts
			// 
			this->btRechts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btRechts->Location = System::Drawing::Point(747, 164);
			this->btRechts->Name = L"btRechts";
			this->btRechts->Size = System::Drawing::Size(48, 38);
			this->btRechts->TabIndex = 6;
			this->btRechts->Text = L">";
			this->btRechts->UseVisualStyleBackColor = true;
			this->btRechts->Click += gcnew System::EventHandler(this, &Form1::btRechts_Click);
			// 
			// txtDatensatz
			// 
			this->txtDatensatz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDatensatz->Location = System::Drawing::Point(546, 172);
			this->txtDatensatz->Multiline = true;
			this->txtDatensatz->Name = L"txtDatensatz";
			this->txtDatensatz->Size = System::Drawing::Size(66, 30);
			this->txtDatensatz->TabIndex = 7;
			this->txtDatensatz->Text = L"1";
			this->txtDatensatz->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// trennenLb
			// 
			this->trennenLb->AutoSize = true;
			this->trennenLb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->trennenLb->Location = System::Drawing::Point(621, 177);
			this->trennenLb->Name = L"trennenLb";
			this->trennenLb->Size = System::Drawing::Size(18, 25);
			this->trennenLb->TabIndex = 3;
			this->trennenLb->Text = L"/";
			this->trennenLb->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// txtMaxDat
			// 
			this->txtMaxDat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMaxDat->Location = System::Drawing::Point(645, 172);
			this->txtMaxDat->Multiline = true;
			this->txtMaxDat->Name = L"txtMaxDat";
			this->txtMaxDat->Size = System::Drawing::Size(66, 30);
			this->txtMaxDat->TabIndex = 7;
			this->txtMaxDat->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btAuslesen
			// 
			this->btAuslesen->Location = System::Drawing::Point(349, 229);
			this->btAuslesen->Name = L"btAuslesen";
			this->btAuslesen->Size = System::Drawing::Size(113, 29);
			this->btAuslesen->TabIndex = 8;
			this->btAuslesen->Text = L"auslesen";
			this->btAuslesen->UseVisualStyleBackColor = true;
			this->btAuslesen->Click += gcnew System::EventHandler(this, &Form1::btAuslesen_Click);
			// 
			// btAendern
			// 
			this->btAendern->Location = System::Drawing::Point(499, 229);
			this->btAendern->Name = L"btAendern";
			this->btAendern->Size = System::Drawing::Size(113, 29);
			this->btAendern->TabIndex = 8;
			this->btAendern->Text = L"ändern";
			this->btAendern->UseVisualStyleBackColor = true;
			this->btAendern->Click += gcnew System::EventHandler(this, &Form1::btAendern_Click);
			// 
			// btNeu
			// 
			this->btNeu->Location = System::Drawing::Point(645, 229);
			this->btNeu->Name = L"btNeu";
			this->btNeu->Size = System::Drawing::Size(113, 29);
			this->btNeu->TabIndex = 8;
			this->btNeu->Text = L"neu";
			this->btNeu->UseVisualStyleBackColor = true;
			this->btNeu->Click += gcnew System::EventHandler(this, &Form1::btNeu_Click);
			// 
			// btLoeschen
			// 
			this->btLoeschen->Location = System::Drawing::Point(790, 229);
			this->btLoeschen->Name = L"btLoeschen";
			this->btLoeschen->Size = System::Drawing::Size(113, 29);
			this->btLoeschen->TabIndex = 8;
			this->btLoeschen->Text = L"löschen";
			this->btLoeschen->UseVisualStyleBackColor = true;
			this->btLoeschen->Click += gcnew System::EventHandler(this, &Form1::btLoeschen_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(909, 417);
			this->Controls->Add(this->btLoeschen);
			this->Controls->Add(this->btNeu);
			this->Controls->Add(this->btAendern);
			this->Controls->Add(this->btAuslesen);
			this->Controls->Add(this->txtMaxDat);
			this->Controls->Add(this->txtDatensatz);
			this->Controls->Add(this->btRechts);
			this->Controls->Add(this->btLinks);
			this->Controls->Add(this->txtVorname);
			this->Controls->Add(this->txtNachname);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->vornameTitel);
			this->Controls->Add(this->nachnameTitel);
			this->Controls->Add(this->trennenLb);
			this->Controls->Add(this->idTitel);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tb_Nachname);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Activated += gcnew System::EventHandler(this, &Form1::Form1_Activated);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void Datensatz_auslesen() {

		int datensatz = 0;
		int anzahlAngezeigtenDatensetze = 1;
		try {
			datensatz = int::Parse(this->txtDatensatz->Text);
		} catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		

		String^ constring = L"datasource=localhost;port=3306;username=root;password=DAA"; // "L"arge character, requires 16-bits
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		//MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from sql_database_test.tbl_test where ID=" + datensatz + ";", conDataBase);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from sql_database_test.tbl_test order by ID LIMIT " + (datensatz-1) + ", " + anzahlAngezeigtenDatensetze + ";", conDataBase);
		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
	
			myReader = cmdDataBase->ExecuteReader();
			//int count = 0;
			
			while (myReader->Read()) {
				this->txtID->Text = myReader->GetInt32(0).ToString();
				this->txtNachname->Text = myReader->GetString(1);
				this->txtVorname->Text = myReader->GetString(2);
			}
			
			/*if (this->txtID->Text != this->txtDatensatz->Text) {
				this->txtID->Text = this->txtDatensatz->Text;
				this->txtNachname->Text = "";
				this->txtVorname->Text = "";
			}*/
			conDataBase->Close();

		} catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}

	private: System::Void Form1_Activated(System::Object^ sender, System::EventArgs^ e) {

		String^ constring = L"datasource=localhost;port=3306;username=root;password=DAA"; // "L"arge character, requires 16-bits 
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select count(ID) from sql_database_test.tbl_test;", conDataBase);
		MySqlDataReader^ myReader;

		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();

			while (myReader->Read()) {
				this->txtMaxDat->Text = myReader->GetInt32(0).ToString();
			}

			conDataBase->Close();

		} catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=DAA"; //"L"arge character, requires 16-bits
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from sql_database_test.tbl_test;", conDataBase);
		MySqlDataReader^ myReader;

		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			int count = 0;
			while (myReader->Read()) {
				this->tb_Nachname->Text += (myReader->GetInt32(0) + ". " + myReader->GetString(1) + " " + myReader->GetString(2) + "\r\n");
			}

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}

	private: System::Void btAuslesen_Click(System::Object^ sender, System::EventArgs^ e) {
		Datensatz_auslesen();
	}
	
	private: System::Void btLinks_Click(System::Object^ sender, System::EventArgs^ e) {
		int temp = 0;
		try {
			
			if (int::TryParse(this->txtDatensatz->Text, temp)) {

				if (int::Parse(this->txtDatensatz->Text) > 1) {
					temp = int::Parse(this->txtDatensatz->Text) - 1;
					this->txtDatensatz->Text = String::Join("", temp);
					Datensatz_auslesen();
				} else {
					MessageBox::Show("Die Datensätze (Zahl) sollen mehr als 0 sein!", "Editormeldung", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}

			} else {
				MessageBox::Show("Tragen Sie bitte nur die ganze Zahlen ein!", "Editormeldung", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}

	private: System::Void btRechts_Click(System::Object^ sender, System::EventArgs^ e) {
		int temp = 0;
		int intMaxdat = int::Parse(this->txtMaxDat->Text);

		try {
			if (int::TryParse(this->txtDatensatz->Text, temp)) {

				if (int::Parse(this->txtDatensatz->Text) < intMaxdat) {
					temp = int::Parse(this->txtDatensatz->Text) + 1;
					this->txtDatensatz->Text = String::Join("", temp);
					Datensatz_auslesen();
				} else {
					MessageBox::Show("Die Max Datensatz (Zahl) ist " + this->txtMaxDat->Text, "Editormeldung", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}

			} else {
				MessageBox::Show("Tragen Sie bitte nur die ganze Zahlen ein!", "Editormeldung", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		} catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}

	private: System::Void btAendern_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=DAA"; //"L"arge character, requires 16-bits
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		
		int idIntFromDataBase = int::Parse(this->txtID->Text);
		String^ nachname = this->txtNachname->Text;
		String^ vorname = this->txtVorname->Text;

		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("update sql_database_test.tbl_test set Nachname = '" + nachname + "', Vorname = '" + vorname + "' where id = " + idIntFromDataBase + "; ", conDataBase);
		MySqlDataReader^ myReader;

		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("Daten geändert!", "Editormeldung", MessageBoxButtons::OK, MessageBoxIcon::Information);
			conDataBase->Close();

		} catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}

	private: System::Void btNeu_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=DAA"; //"L"arge character, requires 16-bits
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlDataReader^ myReader;

		//INSERT INTO tbl_test(Nachname, Vorname) VALUES('Kugel', 'Alfonso');
		String^ neuNachname = this->txtNachname->Text;
		String^ neuVorname = this->txtVorname->Text;
		this->txtDatensatz->Text = this->txtMaxDat->Text; // 
		Datensatz_auslesen();
		int NueIntMaxDat = int::Parse(this->txtID->Text) + 1;
		
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into sql_database_test.tbl_test (Nachname, Vorname, ID) values ('" + neuNachname + "', '" + neuVorname + "', " + NueIntMaxDat + ");", conDataBase);
		
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("Neu Datei hinzugefügt!", "Editormeldung", MessageBoxButtons::OK, MessageBoxIcon::Information);
			conDataBase->Close();
			this->txtDatensatz->Text = this->txtMaxDat->Text;
			Datensatz_auslesen();

		} catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}
	
	private: System::Void btLoeschen_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=DAA"; //"L"arge character, requires 16-bits
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		
		int idIntFromDataBase = 0;
		idIntFromDataBase = int::Parse(this->txtID->Text);

		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("delete from sql_database_test.tbl_test where id =" + idIntFromDataBase + ";", conDataBase);
		MySqlDataReader^ myReader;

		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			this->txtDatensatz->Text = "1";
			Datensatz_auslesen();
			MessageBox::Show("Die Zeile Nr." + String::Join(" ", idIntFromDataBase) + " wurde erfolgrech gelöscht!", "Editormeldung", MessageBoxButtons::OK, MessageBoxIcon::Information);
			conDataBase->Close();
		} catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}
};
}

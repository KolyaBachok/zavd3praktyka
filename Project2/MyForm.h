#pragma once

namespace Project2 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            txtFunc->Text = "exp(-3*x) * ln(2*x + 3)";
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::TextBox^ txtA;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::TextBox^ txtB;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::TextBox^ txtN;
        System::Windows::Forms::Button^ btnCalc;
        System::Windows::Forms::Label^ lblResult;
        System::Windows::Forms::Label^ lblTask;
        System::Windows::Forms::Button^ btnClear;
        System::Windows::Forms::Label^ label4;
        System::Windows::Forms::Label^ label5;
        System::Windows::Forms::TextBox^ txtFunc;
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->txtA = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->txtB = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->txtN = (gcnew System::Windows::Forms::TextBox());
            this->btnCalc = (gcnew System::Windows::Forms::Button());
            this->lblResult = (gcnew System::Windows::Forms::Label());
            this->lblTask = (gcnew System::Windows::Forms::Label());
            this->btnClear = (gcnew System::Windows::Forms::Button());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->txtFunc = (gcnew System::Windows::Forms::TextBox());
            this->SuspendLayout();

            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(40, 114);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(18, 16);
            this->label1->TabIndex = 0;
            this->label1->Text = L"a:";

            this->txtA->Location = System::Drawing::Point(80, 110);
            this->txtA->Name = L"txtA";
            this->txtA->Size = System::Drawing::Size(132, 22);
            this->txtA->TabIndex = 1;
            this->txtA->Text = L"0";

            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(40, 163);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(18, 16);
            this->label2->TabIndex = 2;
            this->label2->Text = L"b:";

            this->txtB->Location = System::Drawing::Point(80, 159);
            this->txtB->Name = L"txtB";
            this->txtB->Size = System::Drawing::Size(132, 22);
            this->txtB->TabIndex = 3;
            this->txtB->Text = L"1";

            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(40, 212);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(17, 16);
            this->label3->TabIndex = 4;
            this->label3->Text = L"n:";

            this->txtN->Location = System::Drawing::Point(80, 209);
            this->txtN->Name = L"txtN";
            this->txtN->Size = System::Drawing::Size(132, 22);
            this->txtN->TabIndex = 5;
            this->txtN->Text = L"100";

            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(40, 70);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(40, 16);
            this->label5->TabIndex = 12;
            this->label5->Text = L"f(x) =";

            this->txtFunc->Location = System::Drawing::Point(100, 67);
            this->txtFunc->Name = L"txtFunc";
            this->txtFunc->Size = System::Drawing::Size(350, 22);
            this->txtFunc->TabIndex = 13;

            this->btnCalc->Location = System::Drawing::Point(267, 110);
            this->btnCalc->Name = L"btnCalc";
            this->btnCalc->Size = System::Drawing::Size(160, 49);
            this->btnCalc->TabIndex = 6;
            this->btnCalc->Text = L"Обчислити";
            this->btnCalc->UseVisualStyleBackColor = true;
            this->btnCalc->Click += gcnew System::EventHandler(this, &MyForm::btnCalc_Click);

            this->lblResult->AutoSize = true;
            this->lblResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->lblResult->Location = System::Drawing::Point(40, 280);
            this->lblResult->Name = L"lblResult";
            this->lblResult->Size = System::Drawing::Size(133, 25);
            this->lblResult->TabIndex = 7;
            this->lblResult->Text = L"Результат: ";

            this->lblTask->AutoSize = true;
            this->lblTask->Location = System::Drawing::Point(180, 30);
            this->lblTask->Name = L"lblTask";
            this->lblTask->Size = System::Drawing::Size(250, 16);
            this->lblTask->TabIndex = 9;
            this->lblTask->Text = L"Чисельне інтегрування (Метод прямокутників)";

            this->btnClear->Location = System::Drawing::Point(267, 188);
            this->btnClear->Name = L"btnClear";
            this->btnClear->Size = System::Drawing::Size(160, 49);
            this->btnClear->TabIndex = 10;
            this->btnClear->Text = L"Очистити";
            this->btnClear->UseVisualStyleBackColor = true;
            this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);

            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(377, 344);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(277, 16);
            this->label4->TabIndex = 11;
            this->label4->Text = L"Виконав студент групи 4М Бачок Микола";

            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(667, 400);
            this->Controls->Add(this->txtFunc);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->btnClear);
            this->Controls->Add(this->lblTask);
            this->Controls->Add(this->lblResult);
            this->Controls->Add(this->btnCalc);
            this->Controls->Add(this->txtN);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->txtB);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->txtA);
            this->Controls->Add(this->label1);
            this->Name = L"MyForm";
            this->Text = L"Чисельне інтегрування";
            this->ResumeLayout(false);
            this->PerformLayout();
        }
#pragma endregion

        // =========================================================
        //  МАТЕМАТИЧНИЙ ПАРСЕР (ОСТАТОЧНА ВЕРСІЯ)
        // =========================================================

        String^ input;
        int pos;

        double ParseExpression() {
            double result = ParseTerm();
            while (pos < input->Length) {
                wchar_t c = input[pos];
                if (c == '+') { pos++; result += ParseTerm(); }
                else if (c == '-') { pos++; result -= ParseTerm(); }
                else break;
            }
            return result;
        }

        double ParseTerm() {
            double result = ParseFactor();
            while (pos < input->Length) {
                wchar_t c = input[pos];
                if (c == '*') { pos++; result *= ParseFactor(); }
                else if (c == '/') { pos++; result /= ParseFactor(); }
                else break;
            }
            return result;
        }

        double ParseFactor() {
            if (pos >= input->Length) return 0;

            wchar_t c = input[pos];

            if (c == '+') { pos++; return ParseFactor(); }
            if (c == '-') { pos++; return -ParseFactor(); }

            if (c == '(') {
                pos++;
                double result = ParseExpression();
                if (pos < input->Length && input[pos] == ')') pos++;
                return result;
            }

            if (Char::IsDigit(c) || c == '.') {
                String^ numStr = "";
                while (pos < input->Length && (Char::IsDigit(input[pos]) || input[pos] == '.')) {
                    numStr += input[pos];
                    pos++;
                }
                return Double::Parse(numStr, System::Globalization::CultureInfo::InvariantCulture);
            }

            if (Char::IsLetter(c)) {
                String^ funcName = "";
                while (pos < input->Length && Char::IsLetter(input[pos])) {
                    funcName += input[pos];
                    pos++;
                }

                if (funcName == "pi") return Math::PI;
                if (funcName == "e") return Math::E;

                while (pos < input->Length && input[pos] == ' ') pos++;

                if (pos < input->Length && input[pos] == '(') {
                    pos++;
                    // ВАЖЛИВО: Викликаємо ParseExpression, яка обробляє ВЕСЬ вираз всередині дужок
                    double arg = ParseExpression();
                    if (pos < input->Length && input[pos] == ')') pos++;

                    if (funcName == "sin") return Math::Sin(arg);
                    if (funcName == "cos") return Math::Cos(arg);
                    if (funcName == "tan") return Math::Tan(arg);
                    if (funcName == "exp") return Math::Exp(arg);
                    if (funcName == "ln")  return Math::Log(arg);
                    if (funcName == "log") return Math::Log10(arg);
                    if (funcName == "sqrt") return Math::Sqrt(arg);
                    if (funcName == "abs") return Math::Abs(arg);
                }
                else {
                    throw gcnew Exception("Функція '" + funcName + "' вимагає дужок!");
                }
                return 0;
            }
            return 0;
        }

        // =========================================================
        //  ГОЛОВНА ФУНКЦІЯ ОБЧИСЛЕННЯ
        // =========================================================
        double Function(double x)
        {
            input = txtFunc->Text->ToLower();
            input = input->Replace(",", ".");

            input = input->Replace("exp", "EXPMARKER");
            input = input->Replace("ln", "LNMARKER");
            input = input->Replace("log", "LOGMARKER");
            input = input->Replace("sin", "SINMARKER");
            input = input->Replace("cos", "COSMARKER");
            input = input->Replace("tan", "TANMARKER");
            input = input->Replace("sqrt", "SQRTMARKER");
            input = input->Replace("abs", "ABSMARKER");
            input = input->Replace("pi", "PIMARKER");
            input = input->Replace("e", "EMARKER");

            String^ xStr = x.ToString(System::Globalization::CultureInfo::InvariantCulture);
            input = input->Replace("x", xStr);

            input = input->Replace("EXPMARKER", "exp");
            input = input->Replace("LNMARKER", "ln");
            input = input->Replace("LOGMARKER", "log");
            input = input->Replace("SINMARKER", "sin");
            input = input->Replace("COSMARKER", "cos");
            input = input->Replace("TANMARKER", "tan");
            input = input->Replace("SQRTMARKER", "sqrt");
            input = input->Replace("ABSMARKER", "abs");
            input = input->Replace("PIMARKER", "pi");
            input = input->Replace("EMARKER", "e");

            pos = 0;
            return ParseExpression();
        }

        double RectangleMethod(double a, double b, int n)
        {
            double h = (b - a) / n;
            double sum = 0.0;

            for (int i = 0; i < n; i++)
            {
                double x_mid = a + i * h + h / 2.0;
                sum += Function(x_mid);
            }

            return sum * h;
        }

    private: System::Void btnCalc_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            double a = Convert::ToDouble(txtA->Text);
            double b = Convert::ToDouble(txtB->Text);
            int n = Convert::ToInt32(txtN->Text);

            if (n <= 0) {
                MessageBox::Show("Кількість розбиттів n повинна бути більшою за 0!");
                return;
            }

            double result = RectangleMethod(a, b, n);

            lblResult->Text = "Результат: " + result.ToString("F6");
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message, "Помилка");
        }
    }

    private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
        txtA->Text = "";
        txtB->Text = "";
        txtN->Text = "";
        txtFunc->Text = "";
        lblResult->Text = "Результат: ";
    }
    };
}
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace projekt1
{
    public partial class Form1 : Form
    {
        double buf1 = 0;
        double buf2 = 0;
        double wynik = 0;
        string opcja;
        bool rownasieUzyte = false;
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
        private void button0_Click(object sender, EventArgs e)
        {
            //po wykonanej operacji wpisanie liczby spowoduje wykasowanie danych i możliwość wykonania kolejnego działania
            // bez konieczności klikania przycisku Clear
            if (rownasieUzyte == true)
            {
                buttonClear_Click(sender, e);
            }
            //gdy w polu wpisane jest tylko 0, zostanie ono wykasowane, żeby nie zaśmiecać pola
            if (txtWynik.Text == "0")
            {
                txtWynik.Clear();
            }
            txtWynik.Text = txtWynik.Text + button0.Text;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (rownasieUzyte == true)
            {
                buttonClear_Click(sender, e);
            }
            if (txtWynik.Text == "0")
            {
                txtWynik.Clear();
            }
            txtWynik.Text = txtWynik.Text + button1.Text;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (rownasieUzyte == true)
            {
                buttonClear_Click(sender, e);
            }
            if (txtWynik.Text == "0")
            {
                txtWynik.Clear();
            }
            txtWynik.Text = txtWynik.Text + button2.Text;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (rownasieUzyte == true)
            {
                buttonClear_Click(sender, e);
            }
            if (txtWynik.Text == "0")
            {
                txtWynik.Clear();
            }
            txtWynik.Text = txtWynik.Text + button3.Text;
        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (rownasieUzyte == true)
            {
                buttonClear_Click(sender, e);
            }
            if (txtWynik.Text == "0")
            {
                txtWynik.Clear();
            }
            txtWynik.Text = txtWynik.Text + button4.Text;
        }

        private void button5_Click(object sender, EventArgs e)
        {
            if (rownasieUzyte == true)
            {
                buttonClear_Click(sender, e);
            }
            if (txtWynik.Text == "0")
            {
                txtWynik.Clear();
            }
            txtWynik.Text = txtWynik.Text + button5.Text;
        }

        private void button6_Click(object sender, EventArgs e)
        {
            if (rownasieUzyte == true)
            {
                buttonClear_Click(sender, e);
            }
            if (txtWynik.Text == "0")
            {
                txtWynik.Clear();
            }
            txtWynik.Text = txtWynik.Text + button6.Text;
        }

        private void button7_Click(object sender, EventArgs e)
        {
            if (rownasieUzyte == true)
            {
                buttonClear_Click(sender, e);
            }
            if (txtWynik.Text == "0")
            {
                txtWynik.Clear();
            }
            txtWynik.Text = txtWynik.Text + button7.Text;
        }

        private void button8_Click(object sender, EventArgs e)
        {
            if (rownasieUzyte == true)
            {
                buttonClear_Click(sender, e);
            }
            if (txtWynik.Text == "0")
            {
                txtWynik.Clear();
            }
            txtWynik.Text = txtWynik.Text + button8.Text;
        }

        private void button9_Click(object sender, EventArgs e)
        {
            if (rownasieUzyte == true)
            {
                buttonClear_Click(sender, e);
            }
            if (txtWynik.Text == "0")
            {
                txtWynik.Clear();
            }
            txtWynik.Text = txtWynik.Text + button9.Text;
        }
        private void buttonPrz_Click(object sender, EventArgs e)
        {
            if (rownasieUzyte == true)
            {
                buttonClear_Click(sender, e);
            }
            txtWynik.Text = txtWynik.Text + buttonPrz.Text;
        }
        private void buttonPlus_Click(object sender, EventArgs e)
        {
            opcja = "plus";
            //gdy próbujemy wykonać operację bez uprzedniego wpisania liczby, to domyślnie przyjmuje ona wartość 0
            try
            {
                buf1 = double.Parse(txtWynik.Text);
            }
            catch (System.FormatException)
            {
                buf1 = 0;
            }

            txtWynik.Clear();
            rownasieUzyte = false;
        }
        private void buttonMinus_Click(object sender, EventArgs e)
        {
            opcja = "minus";
            try
            {
                buf1 = double.Parse(txtWynik.Text);
            }
            catch (System.FormatException)
            {
                buf1 = 0;
            }
            txtWynik.Clear();
            rownasieUzyte = false;
        }
        private void buttonMn_Click(object sender, EventArgs e)
        {
            
            try
            {
                buf1 = double.Parse(txtWynik.Text);
            }
            catch (System.FormatException)
            {
                buf1 = 0;
            }
            txtWynik.Clear();
            opcja = "mnozenie";
            rownasieUzyte = false;
        }
        private void buttonDz_Click(object sender, EventArgs e)
        {
            opcja = "dzielenie";
            try
            {
                buf1 = double.Parse(txtWynik.Text);
            }
            catch (System.FormatException)
            {
                buf1 = 0;
            }
            txtWynik.Clear();
            rownasieUzyte = false;
        }

        private void buttonSqrt_Click(object sender, EventArgs e)
        {
            opcja = "sqrt";
            try
            {
                buf1 = double.Parse(txtWynik.Text);
            }
            catch (System.FormatException)
            {
                buf1 = 0;
            }
            txtWynik.Clear();
            if (buf1 >= 0)
            {
                wynik = Math.Sqrt(buf1);
                this.txtWynik.Text = wynik.ToString();
            }
            else
            {
                MessageBox.Show("Liczba jest ujemna!");
                txtWynik.Clear();
            }
            rownasieUzyte = true;

        }

        private void buttonKw_Click(object sender, EventArgs e)
        {
            opcja = "kwadrat";
            try
            {
                buf1 = double.Parse(txtWynik.Text);
            }
            catch (System.FormatException)
            {
                buf1 = 0;
            }
            txtWynik.Clear();
            wynik = buf1 * buf1;
            this.txtWynik.Text = wynik.ToString();
        }

        private void buttonClear_Click(object sender, EventArgs e)
        {
            buf1 = 0;
            buf2 = 0;
            wynik = 0;
            opcja = null;
            rownasieUzyte = false;
            txtWynik.Clear();

        }

        private void buttonEq_Click(object sender, EventArgs e)
        {
            //sprawdzenie operacji, gdy pole jest puste to operacja wykonuje sie na tej samej liczbie
            //np dla dodawania x+x itp
            try
            {
                if(rownasieUzyte==false)
                buf2 = double.Parse(txtWynik.Text);
            }
            catch (System.FormatException)
            {
                buf2 = buf1;
            }
            
            //if (rownasieUzyte == false)
                switch (opcja)
                {
                    case "plus":
                        wynik = buf1 + buf2;

                        break;
                    case "minus":
                        wynik = buf1 - buf2;
                        break;
                    case "mnozenie":
                        wynik = buf1 * buf2;
                        break;
                    case "dzielenie":
                        if (buf2 != 0)
                        {
                            wynik = buf1 / buf2;
                        }
                        else
                        {
                            MessageBox.Show("Nie można dzielić przez 0!");
                            txtWynik.Clear();
                        }
                        break;
                    case "sqrt":
                        if (buf1 >= 0)
                        {
                            wynik = Math.Sqrt(buf2);
                        }
                        else
                        {
                            MessageBox.Show("Liczba jest ujemna!");
                            txtWynik.Clear();
                        }

                        break;
                    case "kwadrat":
                        wynik = buf2 * buf2;
                        break;
                    default:
                        break;
                }
                rownasieUzyte = true;
            buf1 = wynik;

            this.txtWynik.Text= wynik.ToString();
        }

        
    }
}


namespace projekt1
{
    partial class Form1
    {
        /// <summary>
        /// Wymagana zmienna projektanta.
        

        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Wyczyść wszystkie używane zasoby.
        /// </summary>
        /// <param name="disposing">prawda, jeżeli zarządzane zasoby powinny zostać zlikwidowane; Fałsz w przeciwnym wypadku.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Kod generowany przez Projektanta formularzy systemu Windows

        /// <summary>
        /// Metoda wymagana do obsługi projektanta — nie należy modyfikować
        /// jej zawartości w edytorze kodu.
        /// </summary>
        private void InitializeComponent()
        {
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.opcjeToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.wybierzTloToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.kolor1ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.kolor2ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.wczytajWlasneToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.zegarToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.analogowyToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.cyfrowyToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.button1 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.button3 = new System.Windows.Forms.Button();
            this.button4 = new System.Windows.Forms.Button();
            this.button5 = new System.Windows.Forms.Button();
            this.button6 = new System.Windows.Forms.Button();
            this.button7 = new System.Windows.Forms.Button();
            this.button8 = new System.Windows.Forms.Button();
            this.button9 = new System.Windows.Forms.Button();
            this.button0 = new System.Windows.Forms.Button();
            this.buttonPrz = new System.Windows.Forms.Button();
            this.buttonEq = new System.Windows.Forms.Button();
            this.buttonDz = new System.Windows.Forms.Button();
            this.buttonMn = new System.Windows.Forms.Button();
            this.buttonMinus = new System.Windows.Forms.Button();
            this.buttonPlus = new System.Windows.Forms.Button();
            this.buttonSqrt = new System.Windows.Forms.Button();
            this.buttonKw = new System.Windows.Forms.Button();
            this.buttonClear = new System.Windows.Forms.Button();
            this.txtWynik = new System.Windows.Forms.TextBox();
            this.openFileDialog1 = new System.Windows.Forms.OpenFileDialog();
            this.menuStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // menuStrip1
            // 
            this.menuStrip1.ImageScalingSize = new System.Drawing.Size(20, 20);
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.opcjeToolStripMenuItem});
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Size = new System.Drawing.Size(800, 28);
            this.menuStrip1.TabIndex = 0;
            this.menuStrip1.Text = "menuStrip1";
            // 
            // opcjeToolStripMenuItem
            // 
            this.opcjeToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.wybierzTloToolStripMenuItem,
            this.zegarToolStripMenuItem});
            this.opcjeToolStripMenuItem.Name = "opcjeToolStripMenuItem";
            this.opcjeToolStripMenuItem.Size = new System.Drawing.Size(62, 24);
            this.opcjeToolStripMenuItem.Text = "Opcje";
            // 
            // wybierzTloToolStripMenuItem
            // 
            this.wybierzTloToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.kolor1ToolStripMenuItem,
            this.kolor2ToolStripMenuItem,
            this.wczytajWlasneToolStripMenuItem});
            this.wybierzTloToolStripMenuItem.Name = "wybierzTloToolStripMenuItem";
            this.wybierzTloToolStripMenuItem.Size = new System.Drawing.Size(224, 26);
            this.wybierzTloToolStripMenuItem.Text = "Wybierz tlo";
            // 
            // kolor1ToolStripMenuItem
            // 
            this.kolor1ToolStripMenuItem.Name = "kolor1ToolStripMenuItem";
            this.kolor1ToolStripMenuItem.Size = new System.Drawing.Size(224, 26);
            this.kolor1ToolStripMenuItem.Text = "Podstawowy";
            this.kolor1ToolStripMenuItem.Click += new System.EventHandler(this.kolor1ToolStripMenuItem_Click);
            // 
            // kolor2ToolStripMenuItem
            // 
            this.kolor2ToolStripMenuItem.Name = "kolor2ToolStripMenuItem";
            this.kolor2ToolStripMenuItem.Size = new System.Drawing.Size(224, 26);
            this.kolor2ToolStripMenuItem.Text = "Zielony";
            this.kolor2ToolStripMenuItem.Click += new System.EventHandler(this.kolor2ToolStripMenuItem_Click);
            // 
            // wczytajWlasneToolStripMenuItem
            // 
            this.wczytajWlasneToolStripMenuItem.Name = "wczytajWlasneToolStripMenuItem";
            this.wczytajWlasneToolStripMenuItem.Size = new System.Drawing.Size(224, 26);
            this.wczytajWlasneToolStripMenuItem.Text = "Wczytaj wlasne";
            this.wczytajWlasneToolStripMenuItem.Click += new System.EventHandler(this.wczytajWlasneToolStripMenuItem_Click);
            // 
            // zegarToolStripMenuItem
            // 
            this.zegarToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.analogowyToolStripMenuItem,
            this.cyfrowyToolStripMenuItem});
            this.zegarToolStripMenuItem.Name = "zegarToolStripMenuItem";
            this.zegarToolStripMenuItem.Size = new System.Drawing.Size(224, 26);
            this.zegarToolStripMenuItem.Text = "Zegar";
            // 
            // analogowyToolStripMenuItem
            // 
            this.analogowyToolStripMenuItem.Name = "analogowyToolStripMenuItem";
            this.analogowyToolStripMenuItem.Size = new System.Drawing.Size(167, 26);
            this.analogowyToolStripMenuItem.Text = "Analogowy";
            // 
            // cyfrowyToolStripMenuItem
            // 
            this.cyfrowyToolStripMenuItem.Name = "cyfrowyToolStripMenuItem";
            this.cyfrowyToolStripMenuItem.Size = new System.Drawing.Size(167, 26);
            this.cyfrowyToolStripMenuItem.Text = "Cyfrowy";
            // 
            // button1
            // 
            this.button1.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.button1.Location = new System.Drawing.Point(98, 279);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(70, 70);
            this.button1.TabIndex = 1;
            this.button1.Text = "1";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            this.button1.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.button7_KeyPress);
            // 
            // button2
            // 
            this.button2.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.button2.Location = new System.Drawing.Point(174, 279);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(70, 70);
            this.button2.TabIndex = 2;
            this.button2.Text = "2";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            this.button2.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.button7_KeyPress);
            // 
            // button3
            // 
            this.button3.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.button3.Location = new System.Drawing.Point(250, 279);
            this.button3.Name = "button3";
            this.button3.Size = new System.Drawing.Size(70, 70);
            this.button3.TabIndex = 3;
            this.button3.Text = "3";
            this.button3.UseVisualStyleBackColor = true;
            this.button3.Click += new System.EventHandler(this.button3_Click);
            this.button3.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.button7_KeyPress);
            // 
            // button4
            // 
            this.button4.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.button4.Location = new System.Drawing.Point(98, 203);
            this.button4.Name = "button4";
            this.button4.Size = new System.Drawing.Size(70, 70);
            this.button4.TabIndex = 4;
            this.button4.Text = "4";
            this.button4.UseVisualStyleBackColor = true;
            this.button4.Click += new System.EventHandler(this.button4_Click);
            this.button4.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.button7_KeyPress);
            // 
            // button5
            // 
            this.button5.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.button5.Location = new System.Drawing.Point(174, 203);
            this.button5.Name = "button5";
            this.button5.Size = new System.Drawing.Size(70, 70);
            this.button5.TabIndex = 5;
            this.button5.Text = "5";
            this.button5.UseVisualStyleBackColor = true;
            this.button5.Click += new System.EventHandler(this.button5_Click);
            // 
            // button6
            // 
            this.button6.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.button6.Location = new System.Drawing.Point(250, 203);
            this.button6.Name = "button6";
            this.button6.Size = new System.Drawing.Size(70, 70);
            this.button6.TabIndex = 6;
            this.button6.Text = "6";
            this.button6.UseVisualStyleBackColor = true;
            this.button6.Click += new System.EventHandler(this.button6_Click);
            this.button6.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.button7_KeyPress);
            // 
            // button7
            // 
            this.button7.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.button7.Location = new System.Drawing.Point(98, 127);
            this.button7.Name = "button7";
            this.button7.Size = new System.Drawing.Size(70, 70);
            this.button7.TabIndex = 7;
            this.button7.Text = "7";
            this.button7.UseVisualStyleBackColor = true;
            this.button7.Click += new System.EventHandler(this.button7_Click);
            this.button7.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.button7_KeyPress);
            // 
            // button8
            // 
            this.button8.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.button8.Location = new System.Drawing.Point(174, 127);
            this.button8.Name = "button8";
            this.button8.Size = new System.Drawing.Size(70, 70);
            this.button8.TabIndex = 8;
            this.button8.Text = "8";
            this.button8.UseVisualStyleBackColor = true;
            this.button8.Click += new System.EventHandler(this.button8_Click);
            this.button8.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.button7_KeyPress);
            // 
            // button9
            // 
            this.button9.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.button9.Location = new System.Drawing.Point(250, 127);
            this.button9.Name = "button9";
            this.button9.Size = new System.Drawing.Size(70, 70);
            this.button9.TabIndex = 9;
            this.button9.Text = "9";
            this.button9.UseVisualStyleBackColor = true;
            this.button9.Click += new System.EventHandler(this.button9_Click);
            this.button9.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.button7_KeyPress);
            // 
            // button0
            // 
            this.button0.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.button0.Location = new System.Drawing.Point(98, 355);
            this.button0.Name = "button0";
            this.button0.Size = new System.Drawing.Size(70, 70);
            this.button0.TabIndex = 10;
            this.button0.Text = "0";
            this.button0.UseVisualStyleBackColor = true;
            this.button0.Click += new System.EventHandler(this.button0_Click);
            this.button0.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.button7_KeyPress);
            // 
            // buttonPrz
            // 
            this.buttonPrz.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.buttonPrz.Location = new System.Drawing.Point(174, 355);
            this.buttonPrz.Name = "buttonPrz";
            this.buttonPrz.Size = new System.Drawing.Size(70, 70);
            this.buttonPrz.TabIndex = 11;
            this.buttonPrz.Text = ",";
            this.buttonPrz.UseVisualStyleBackColor = true;
            this.buttonPrz.Click += new System.EventHandler(this.buttonPrz_Click);
            this.buttonPrz.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.button7_KeyPress);
            // 
            // buttonEq
            // 
            this.buttonEq.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.buttonEq.Location = new System.Drawing.Point(250, 355);
            this.buttonEq.Name = "buttonEq";
            this.buttonEq.Size = new System.Drawing.Size(70, 70);
            this.buttonEq.TabIndex = 12;
            this.buttonEq.Text = "=";
            this.buttonEq.UseVisualStyleBackColor = true;
            this.buttonEq.Click += new System.EventHandler(this.buttonEq_Click);
            this.buttonEq.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.button7_KeyPress);
            // 
            // buttonDz
            // 
            this.buttonDz.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.buttonDz.Location = new System.Drawing.Point(326, 127);
            this.buttonDz.Name = "buttonDz";
            this.buttonDz.Size = new System.Drawing.Size(70, 70);
            this.buttonDz.TabIndex = 13;
            this.buttonDz.Text = "/";
            this.buttonDz.UseVisualStyleBackColor = true;
            this.buttonDz.Click += new System.EventHandler(this.buttonDz_Click);
            this.buttonDz.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.button7_KeyPress);
            // 
            // buttonMn
            // 
            this.buttonMn.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.buttonMn.Location = new System.Drawing.Point(326, 203);
            this.buttonMn.Name = "buttonMn";
            this.buttonMn.Size = new System.Drawing.Size(70, 70);
            this.buttonMn.TabIndex = 14;
            this.buttonMn.Text = "*";
            this.buttonMn.UseVisualStyleBackColor = true;
            this.buttonMn.Click += new System.EventHandler(this.buttonMn_Click);
            this.buttonMn.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.button7_KeyPress);
            // 
            // buttonMinus
            // 
            this.buttonMinus.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.buttonMinus.Location = new System.Drawing.Point(326, 279);
            this.buttonMinus.Name = "buttonMinus";
            this.buttonMinus.Size = new System.Drawing.Size(70, 70);
            this.buttonMinus.TabIndex = 15;
            this.buttonMinus.Text = "-";
            this.buttonMinus.UseVisualStyleBackColor = true;
            this.buttonMinus.Click += new System.EventHandler(this.buttonMinus_Click);
            this.buttonMinus.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.button7_KeyPress);
            // 
            // buttonPlus
            // 
            this.buttonPlus.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.buttonPlus.Location = new System.Drawing.Point(326, 355);
            this.buttonPlus.Name = "buttonPlus";
            this.buttonPlus.Size = new System.Drawing.Size(70, 70);
            this.buttonPlus.TabIndex = 16;
            this.buttonPlus.Text = "+";
            this.buttonPlus.UseVisualStyleBackColor = true;
            this.buttonPlus.Click += new System.EventHandler(this.buttonPlus_Click);
            this.buttonPlus.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.button7_KeyPress);
            // 
            // buttonSqrt
            // 
            this.buttonSqrt.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.buttonSqrt.Location = new System.Drawing.Point(22, 127);
            this.buttonSqrt.Name = "buttonSqrt";
            this.buttonSqrt.Size = new System.Drawing.Size(70, 70);
            this.buttonSqrt.TabIndex = 17;
            this.buttonSqrt.Text = "√";
            this.buttonSqrt.UseVisualStyleBackColor = true;
            this.buttonSqrt.Click += new System.EventHandler(this.buttonSqrt_Click);
            this.buttonSqrt.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.button7_KeyPress);
            // 
            // buttonKw
            // 
            this.buttonKw.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.buttonKw.Location = new System.Drawing.Point(22, 203);
            this.buttonKw.Name = "buttonKw";
            this.buttonKw.Size = new System.Drawing.Size(70, 70);
            this.buttonKw.TabIndex = 18;
            this.buttonKw.Text = "()²";
            this.buttonKw.UseVisualStyleBackColor = true;
            this.buttonKw.Click += new System.EventHandler(this.buttonKw_Click);
            this.buttonKw.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.button7_KeyPress);
            // 
            // buttonClear
            // 
            this.buttonClear.Font = new System.Drawing.Font("Microsoft Sans Serif", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.buttonClear.Location = new System.Drawing.Point(22, 279);
            this.buttonClear.Name = "buttonClear";
            this.buttonClear.Size = new System.Drawing.Size(70, 146);
            this.buttonClear.TabIndex = 19;
            this.buttonClear.Text = "C";
            this.buttonClear.UseVisualStyleBackColor = true;
            this.buttonClear.Click += new System.EventHandler(this.buttonClear_Click);
            this.buttonClear.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.button7_KeyPress);
            // 
            // txtWynik
            // 
            this.txtWynik.Font = new System.Drawing.Font("Microsoft Sans Serif", 28.2F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.txtWynik.Location = new System.Drawing.Point(22, 51);
            this.txtWynik.Multiline = true;
            this.txtWynik.Name = "txtWynik";
            this.txtWynik.Size = new System.Drawing.Size(374, 70);
            this.txtWynik.TabIndex = 20;
            this.txtWynik.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            // 
            // openFileDialog1
            // 
            this.openFileDialog1.FileName = "openFileDialog1";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.txtWynik);
            this.Controls.Add(this.buttonClear);
            this.Controls.Add(this.buttonKw);
            this.Controls.Add(this.buttonSqrt);
            this.Controls.Add(this.buttonPlus);
            this.Controls.Add(this.buttonMinus);
            this.Controls.Add(this.buttonMn);
            this.Controls.Add(this.buttonDz);
            this.Controls.Add(this.buttonEq);
            this.Controls.Add(this.buttonPrz);
            this.Controls.Add(this.button0);
            this.Controls.Add(this.button9);
            this.Controls.Add(this.button8);
            this.Controls.Add(this.button7);
            this.Controls.Add(this.button6);
            this.Controls.Add(this.button5);
            this.Controls.Add(this.button4);
            this.Controls.Add(this.button3);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.menuStrip1);
            this.MainMenuStrip = this.menuStrip1;
            this.Name = "Form1";
            this.Text = "Kalkulator";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem opcjeToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem wybierzTloToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem kolor1ToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem kolor2ToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem wczytajWlasneToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem zegarToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem analogowyToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem cyfrowyToolStripMenuItem;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Button button3;
        private System.Windows.Forms.Button button4;
        private System.Windows.Forms.Button button5;
        private System.Windows.Forms.Button button6;
        private System.Windows.Forms.Button button7;
        private System.Windows.Forms.Button button8;
        private System.Windows.Forms.Button button9;
        private System.Windows.Forms.Button button0;
        private System.Windows.Forms.Button buttonPrz;
        private System.Windows.Forms.Button buttonEq;
        private System.Windows.Forms.Button buttonDz;
        private System.Windows.Forms.Button buttonMn;
        private System.Windows.Forms.Button buttonMinus;
        private System.Windows.Forms.Button buttonPlus;
        private System.Windows.Forms.Button buttonSqrt;
        private System.Windows.Forms.Button buttonKw;
        private System.Windows.Forms.Button buttonClear;
        private System.Windows.Forms.TextBox txtWynik;
        private System.Windows.Forms.OpenFileDialog openFileDialog1;
    }
}


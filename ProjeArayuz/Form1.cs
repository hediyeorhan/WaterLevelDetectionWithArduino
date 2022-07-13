using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO.Ports;

namespace _18010011087_ProjeArayuz
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        private String data;
        private bool buton = false;

        // Birden fazla baglanilabilecek port olması durumunda port secimi yapabilmemizi sagliyor.
        private void Form1_Load(object sender, EventArgs e)
        {
            string[] ports = SerialPort.GetPortNames();
            foreach (string port in ports)
            {
                comboBox1.Items.Add(port);
            }
            serialPort1.DataReceived += new SerialDataReceivedEventHandler(SerialPort_DataReceived);
        }

        // Baglanilan port üzerindeki Serial fonksiyonundan gelen degerleri okuyor.
        private void SerialPort_DataReceived(object sender, SerialDataReceivedEventArgs e)
        {
            data = serialPort1.ReadExisting();
            this.Invoke(new EventHandler(displaydata));
        }

        // Okudugumuz degerleri / karakterine gore bolerek integer degere cevirdik.
        private void displaydata(object sender, EventArgs e)
        {
            string[] value = data.Split('/');

            // Progressbar gelen degere gore bir cubuktan dolum miktarini gozlemlemeyi sagliyor.
            progressBar2.Value = Convert.ToInt32(value[0]);
  
            label2.Text = value[0];
        }

        // Baglanti butonuna tiklandiginda secilen port ile baglanti yapmayi sagliyor. Buton1 aktif hale getiriliyor.
        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                serialPort1.PortName = comboBox1.Text;
                serialPort1.Open();
                button1.Enabled = false;
                button2.Enabled = true;
                label4.Text = "Bağlantı sağlandı";
                label4.ForeColor = Color.Green;
            }
            catch (Exception ex)
            {

                MessageBox.Show(ex.Message, "ERROR");
            }
        }

        // Baglantiyi kes butonu ile port ile arayuz arasindaki baglanti kesiliyor. Buton2 aktif hale getiriliyor.
        private void button2_Click(object sender, EventArgs e)
        {
            try
            {
                serialPort1.Close();
                button1.Enabled = true;
                button2.Enabled = false;
                label4.Text = "Bağlantı Kesildi";
                label4.ForeColor = Color.Red;
            }
            catch (Exception ex)
            {

                MessageBox.Show(ex.Message, "ERROR");
            }
        }

        private void Form1_FormClosed(object sender, FormClosedEventArgs e)
        {
            if (serialPort1.IsOpen)
                serialPort1.Close();
        }
    }
}

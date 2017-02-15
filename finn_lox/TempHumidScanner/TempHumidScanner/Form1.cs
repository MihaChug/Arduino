using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.IO.Ports;
using System.Windows.Forms;


namespace TempHumidScanner
{
    public partial class Form1 : Form
    {
        
        
        public Form1()
        {
            InitializeComponent();            
        }

        bool power = false;
        
        private void Form1_Load(object sender, EventArgs e)
        {

        }


        private void button13_Click(object sender, EventArgs e)
        {
            power = true;
            if (textBox1.Text == "")
            {
                MessageBox.Show("Alarm! No defined COM!");
            }
            try
            {
                serialPort1.PortName = "COM" + textBox1.Text;
                serialPort1.BaudRate = 9600;
                serialPort1.Open();
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.ToString());
                return;
            }
            List<Button> btn_lst = new List<Button>() { button1, button2, button3,
                button4, button5, button6, button7, button8, button9, button10,
            button11, button12};
            int tick_counter = 0;

            while (power)
            {
                label1.Text = "Tick: " + tick_counter.ToString();
                //string data = serialPort1.ReadLine();
                Task.Delay(2000);
                tick_counter++;
            }
           
        }

        private void stop_Click(object sender, EventArgs e)
        {
            power = false;
        }

        private void krasit_knopki(List<Button> btn_lst, List<string> data_f)
        {
            Color enabled_color = Color.Green;
            Color disabled_colot = Color.Red;
            for(int i = 0; i <= btn_lst.Count; i++)
            {
                btn_lst[i].BackColor = enabled_color;
                btn_lst[i].Text = data_f[i];
       
            }



        }

        private List<string> parse_com_data(string data)
        {
            List<string> parsed_data = new List<string>();
            

            return parsed_data;
        }
    }
}

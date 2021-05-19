using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
namespace WMPNetWendor
{
    public class Class1
    {
        public WMPLib.WindowsMediaPlayer wplayer = new WMPLib.WindowsMediaPlayer();

        public void Play()
        {
            
           
            wplayer.controls.play();

        }
        public void Stop()
        {
            wplayer.controls.pause();
        }

        public void searsh(String i)
        {
            wplayer.URL = Directory.GetFiles(".\\Music").First(fileName => fileName == $".\\Music\\{i}");
        }

        public int lenght2()
        {
            int k = Directory.GetFiles(".\\Music").Length;
            return k;
        }
        public string list1(int j, string k)
        {
            string[] i = Directory.GetFiles(k).Select(Path.GetFileName).ToArray();
       
            return i[j];
        }

        public void txt(string i, string b)
        {
            //FileStream s2 = new FileStream(i, FileMode.OpenOrCreate);
            //s2.Close();
            string writePath = $".\\profile\\{i}";
            StreamWriter sw = new StreamWriter(writePath, true);
            sw.WriteLine(b+"\n");
            sw.Close();
        }

        public string read(string i)
        {
            string writePath = $".\\profile\\{i}.txt";
            StreamReader sw = new StreamReader(writePath, true);
            string s = sw.ReadToEnd();
            sw.Close();
            return s;
        }



    }

}

using System;

namespace ConsoleApp2
{
    class Teacher : Human
    {
        private string fio;
        private string adress;
        private string born;
        public new string Fio { get => fio; set => fio = value; }
        public new string Born { get => born; set => born = value; }
        public new string Adress { get => adress; set => adress = value; }
        public override void Method()
        {
            Console.WriteLine("Enter SNP: ");
            fio = Console.ReadLine();
            Console.WriteLine("Enter adress: ");
            adress = Console.ReadLine();
            Console.WriteLine("Enter your date of birth: ");
            born = Console.ReadLine();
        }
        public void Out2()
        {
            Console.WriteLine(fio + "\n" + adress + " " + born + "\n");
        }
    };
}
using System;

namespace ConsoleApp2
{
    class Human
    {
        private string fio;
        private string adress;
        private string born;
        public string Fio { get => fio; set => fio = value; }
        public string Born { get => born; set => born = value; }
        public string Adress { get => adress; set => adress = value; }

        public virtual void Method()
        {
            Console.WriteLine("Enter SNP: ");
            fio = Console.ReadLine();
            Console.WriteLine("Enter adress: ");
            adress = Console.ReadLine();
            Console.WriteLine("Enter your date of birth: ");
            born = Console.ReadLine();
        }
    }
}

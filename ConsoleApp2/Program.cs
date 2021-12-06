using System;

namespace ConsoleApp2
{
    class Program
    {
        private static void Main(string[] args)
        {

            
            int k;
            Console.WriteLine("Enter the number of people: ");
            k = Convert.ToInt32(Console.ReadLine());
            Students[] s = new Students[k];
            Teacher[] t = new Teacher[k];
            Zav[] z = new Zav[k];

            for (int i = 0; i < k; i++)
            {
                Console.Clear();
                Console.WriteLine("Select a position : ");
                Console.WriteLine("1-Student ");
                Console.WriteLine("2-Teacher ");
                Console.WriteLine("3-Zav of chair ");
                int v = Convert.ToInt32(Console.ReadLine());

                switch (v)
                {
                    case 1:
                        Console.WriteLine("Student ");
                        s[i] = new Students();
                        s[i].Method();
                        break;
                    case 2:
                        Console.WriteLine("Teacher");
                        t[i] = new Teacher();
                        t[i].Method();
                        break;
                    case 3:
                        Console.WriteLine("Zav of chair");
                        z[i] = new Zav();
                        z[i].Method();
                        break;
                }
            }
            
            
            Console.ReadLine();
            Console.Clear();
            Console.WriteLine("Output of results :");
            
            
            for (int f = 0; f < k; f++)
            {
                s[f].Out();
                t[f].Out2();
                z[f].Out3();
            }
            Console.ReadLine();
        }
    }
}
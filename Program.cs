using Momentum.Pm.PortalApi.Client.Interfaces.Types;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace grid
{
    class Human
    {
        public string name;
        public string surname;
        public int age;
        public int id;
        public string img;
        private Adress adress;

        public string Name { set { name = value; } get { return name; } }
        public string Surname { set { surname = value; } get { return surname; } }
        public int Age { set { age = value; } get { return age; } }
        public int ID { set { id = value; } get { return id; } }
        public string IMG { set { img = value; } get { return img; } }

        public Adress Adress { get { return adress; } set { adress = value; } }

        public Human() { }
        public Human(string Name, string Surname, int Age, int ID, Adress Adress, string IMG)
        {
            name = Name;
            surname = Surname;
            age = Age;
            id = ID;
            adress = Adress;
            img = IMG;
        }
    }
}

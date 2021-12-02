using Momentum.Pm.PortalApi.Client.Interfaces.Types;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace grid
{
    class Student : Human
    {
        private string bob;
        public string Bob { set { bob = value; } get { return bob; } }

        public Student() { }
        public Student(string Name, string Surname, int Age, int ID, string bob, Adress adress, string IMG) :
            base(Name, Surname, Age, ID, adress, IMG)
        {
            bob = Bob;
        }
    }
}
using Momentum.Pm.PortalApi.Client.Interfaces.Types;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace grid
{
    class Teacher : Human
    {
        private int limit;
        private List<Student> stdList = new List<Student>();

        public int Limit { get { return limit; } set { limit = value; } }
        public List<Student> STDList { get { return stdList; } set { } }
        public void stdAdd(Student std)
        {
            if (stdList.Count <= limit)
                stdList.Add(std);
        }
        public Teacher() { }

        public Teacher(string Name, string Surname, int Age, int ID, Adress adress, string IMG) :
            base(Name, Surname, Age, ID, adress, IMG)
        {
            limit = Limit;
        }
        public List<Student> getStdList()
        {
            return this.stdList;
        }

        public void removeStd(int i)
        {
            stdList.RemoveAt(i);
        }
    }
}
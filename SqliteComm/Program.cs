using System.Data.SQLite;
using System.Data;
namespace SqliteComm
{
    internal class Program
    {
        void test()
        {
            SqliteHelper db = new SqliteHelper("database.db");

            SQLiteParameter[] parameters = new SQLiteParameter[] {
    new SQLiteParameter("@Name", "New Value")
};
            //"CREATE TABLE IF NOT EXISTS MyTable (Id INTEGER PRIMARY KEY, Name TEXT)"

            int con = db.ExecuteNonQuery("INSERT INTO MyTable (Name) VALUES (@Name)", parameters);

            DataTable table = db.DataTable("SELECT * FROM MyTable WHERE Name=@Name", parameters);

            Console.WriteLine(table);
        }
    }
}

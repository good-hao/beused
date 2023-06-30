using System.Data;
using System.Data.SQLite;

namespace SqliteComm
{
    public class SqliteHelper
    {
        private readonly string connectionString;

        public SqliteHelper(string databasePath)
        {
            connectionString = $"Data Source={databasePath};";
        }

        public int ExecuteNonQuery(string query, params SQLiteParameter[] parameters)
        {
            int count = 0;
            using (var connection = new SQLiteConnection(connectionString))
            {
                connection.Open();

                using (var command = new SQLiteCommand(query, connection))
                {
                    // 添加参数
                    command.Parameters.AddRange(parameters);

                    // 执行查询
                    count = command.ExecuteNonQuery();
                }
            }
            return count;
        }


        public DataTable DataTable(string query, params SQLiteParameter[] parameters)
        {
            var dataTable = new DataTable();

            using (var connection = new SQLiteConnection(connectionString))
            {
                connection.Open();

                using (var command = new SQLiteCommand(query, connection))
                {
                    // 添加参数
                    command.Parameters.AddRange(parameters);

                    // 执行查询并填充到DataTable中
                    using (var reader = command.ExecuteReader())
                    {
                        dataTable.Load(reader);
                    }
                }
            }

            return dataTable;
        }

    }
}





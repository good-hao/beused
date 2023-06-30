import pymysql
 
# 打开数据库连接
mydb = pymysql.connect(host='localhost',
                     user='root',
                     password='123456',
                     database="test")
# print(mydb)

mycursor = mydb.cursor()


# mycursor.execute("CREATE TABLE customers (name VARCHAR(255), address VARCHAR(255))")
# mycursor.execute("ALTER TABLE customers ADD COLUMN id INT AUTO_INCREMENT PRIMARY KEY")
# mycursor.execute("ALTER TABLE customers ADD COLUMN age INT")

 
# mycursor.execute("SHOW TABLES")

# for x in mycursor:
  # print(x)  
 
# sql = "INSERT INTO customers (name, address, {}) VALUES (%s, %s, %s)"
# sql = sql.format("age")
# val = ("John", "Highway 21", 12)
# try:
    # mycursor.execute(sql,val)
    # mydb.commit()
    # mycursor.close()
    # mydb.close()
    # print(mycursor.rowcount, "record inserted.")
# except:
    # print("cw")
    # mydb.close()


# sql = "INSERT INTO customers (name, address) VALUES (%s, %s)"
# val = [
  # ('Peter', 'Lowstreet 4'),
  # ('Amy', 'Apple st 652'),
  # ('Hannah', 'Mountain 21'),
  # ('Michael', 'Valley 345'),
  # ('Sandy', 'Ocean blvd 2'),
  # ('Betty', 'Green Grass 1'),
  # ('Richard', 'Sky st 331'),
  # ('Susan', 'One way 98'),
  # ('Vicky', 'Yellow Garden 2'),
  # ('Ben', 'Park Lane 38'),
  # ('William', 'Central st 954'),
  # ('Chuck', 'Main Road 989'),
  # ('Viola', 'Sideway 1633')
# ]
# mycursor.executemany(sql, val)
# mydb.commit()
# print(mycursor.rowcount, "was inserted.")

try:
    mycursor.execute("SELECT * FROM customers")
    myresult = mycursor.fetchall()
    mydb.commit
    print(myresult[2][1])
    print("-----------------------------------")
    for x in myresult:
      print(x)
except:
    print("error")
finally:
    mycursor.close()
    mydb.close()

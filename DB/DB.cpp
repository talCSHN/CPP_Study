//#include <iostream>
//#include <mysql/jdbc.h>
//
//using namespace std;
//using namespace sql;
//
//int main()
//{
//	const string server = "tcp://127.0.0.1:3306";
//	const string username = "root";
//	const string password = "12345";
//	const string database = "testDB";
//
//	try {
//		mysql::MySQL_Driver* driver = mysql::get_mysql_driver_instance();
//		unique_ptr<Connection> conn(driver->connect(server, username, password));
//
//		conn->setSchema(database);
//		cout << "MySQL connection success" << endl;
//	}
//	catch (SQLException& e) {
//		cout << "MySQL connection failed" << e.what() << endl;
//	}
//
//
//	return 0;
//}
#include <iostream>
#include <mysql/jdbc.h>

using namespace std;
using namespace sql;

#define SERVER_IP	"127.0.0.1:3306"
#define USERNAME	"root"
#define PASSWORD	"12345"
#define DATABASE	"testDB"

class MySQLConnector {
private:
	string server;
	string username;
	string password;
	string database;
	unique_ptr<Connection> conn;
public:
	MySQLConnector(const string& serv, const string& user, const string& passwd, const string& db)
		: server(serv), username(user), password(passwd), database(db) {
		try {
			mysql::MySQL_Driver* driver = mysql::get_mysql_driver_instance();
			conn = unique_ptr<Connection>(driver->connect(server, username, password));
			conn->setSchema(database);
			cout << "MySQL Connection success" << endl;
		}
		catch (SQLException& e) {
			cerr << "MySQL Connection failed" << e.what() << endl;
		}
	}
	~MySQLConnector() {
		cout << "MySQL Disconnect" << endl;
	}
};

int main() {
	MySQLConnector db(SERVER_IP, USERNAME, PASSWORD, DATABASE);

	return 0;
}
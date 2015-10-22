#Q1)
A class is a definition of a user-defined type. A class declaration specifies how data is
to be stored, and it specifies the methods (class member functions) that can be used
to access and manipulate that data.

#Q2)
A class represents the operations you can perform on a class object with a public
interface of class methods; this is abstraction.The class can use private visibility (the
default) for data members, meaning that the data can be accessed only through the
member functions; this is data hiding. Details of the implementation, such as data
representation and method code, are hidden; this is encapsulation.

#Q3)
A class defines a type, including how it can be used.An object is a variable or
another data object, such as that produced by new, which is created and used
according to the class definition.The relationship between a class and an object is
the same as that between a standard type and a variable of that type.

#Q4)
If you create several objects of a given class, each object comes with storage for its
own set of data. But all the objects use the one set of member functions. (Typically,
methods are public and data members are private, but that’s a matter of policy, not
of class requirements.

#Q5)
This example use char arrays to hold the character data, but you could use string
class objects instead.

// #include < cstring >

// class definition

class BankAccount

{

private:

char name[40]; // or std::string name;

char acctnum[25]; // or std::string acctnum;

double balance;

public:

BankAccount(const char * client, const char * num, double bal = 0.0);

//or BankAccount(const std::string & client,

// const std::string & num, double bal = 0.0);

void show(void) const;

void deposit(double cash);

void withdraw(double cash);

};

#Q6)
A class constructor is called when you create an object of that class or when you
explicitly call the constructor. A class destructor is called when the object expires.

#Q7) 
These are two possible solutions (note that you must include cstring or string.h
in order to use strncpy() or else you must include string to use the string

class):

BankAccount::BankAccount(const char * client, const char * num, double bal)

{
strncpy(name, client, 39);

name[39] = '\0';

strncpy(acctnum, num, 24);

acctnum[24] = '\0';

balance = bal;

}

or

BankAccount::BankAccount(const std::string & client,

const std::string & num, double bal)

{

name = client;

acctnum = num;

balance = bal;
}
Keep in mind that default arguments go in the prototype, not in the function definition.

#Q8) 
A default constructor either has no arguments or has defaults for all the arguments.
Having a default constructor enables you to declare objects without initializing
them, even if you’ve already defined an initializing constructor. It also allows you to
declare arrays.

#Q9) 

// stock30.h

// #ifndef STOCK30_H_

// #define STOCK30_H_

class Stock

{

private:

std::string company;

long shares;

double share_val;

double total_val;

void set_tot() { total_val = shares * share_val; }

public:

Stock(); // default constructor

Stock(const std::string & co, long n, double pr);

~Stock() {} // do-nothing destructor

void buy(long num, double price);

void sell(long num, double price);

void update(double price);

void show() const;

const Stock & topval(const Stock & s) const;

int numshares() const { return shares; }

double shareval() const { return share_val; }

double totalval() const { return total_val; }

const string & co_name() const { return company; }

};

#Q10)
The this pointer is available to class methods. It points to the object used to
invoke the method.Thus, this is the address of the object, and *this represents the
object itself.

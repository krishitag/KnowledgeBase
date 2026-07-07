## What is MySQL?

MySQL, the most popular Open Source SQL database management system, is developed, distributed, and supported by Oracle Corporation.

### 1. **MySQL as a DBMS **

* **MySQL is a Database Management System (DBMS).**
* A **database** is a structured collection of data.
* MySQL is used to **store, access, update, and manage** data.
* It efficiently handles **small and large databases**.

> **Key Point:** MySQL is a DBMS that helps organize and manage data efficiently.


### 2. **MySQL Databases are Relational **

* **MySQL** is a **Relational Database Management System (RDBMS)**.
* A **relational database** stores data in **multiple tables** instead of one large storage.
* Data is organized using **databases, tables, rows, columns, and views**.
* Relationships between tables can be defined, such as:
  - One-to-One
  - One-to-Many
  - Unique
  - Required/Optional
* These relationships help maintain **data integrity** by preventing:
  - Duplicate data
  - Inconsistent data
  - Missing or orphan records

* **SQL** stands for **Structured Query Language**.
* SQL is the **standard language** used to create, retrieve, update, and manage data in databases.
* SQL can be:
  - Written directly
  - Embedded in programming languages
  - Accessed through APIs

* SQL follows the **ANSI/ISO SQL Standard**.
* Major SQL standards include:
  - **SQL-92** (1992)
  - **SQL:1999**
  - **SQL:2003** (introduced newer features)

> **Key Point:** MySQL stores data in related tables, while SQL is the standardized language used to interact with those databases.

### 3. **MySQL is Open Source **

* **MySQL is open-source software**, meaning anyone can **download, use, and modify** it.
* It is **free to use** and its **source code is publicly available**.
* Developers can **customize MySQL** according to their requirements.
* MySQL is distributed under the **GNU General Public License (GPL)**.
* For **commercial applications** that do not comply with the GPL, a **commercial license** can be purchased.

> **Key Point:** MySQL is free, customizable, and open source under the GPL, with commercial licensing available when needed.

### 4. **Features of MySQL Server **

* **Fast, reliable, scalable, and easy to use.**
* Can run on **desktops, laptops, or dedicated servers**.
* Supports **large databases** and **high-performance applications**.
* Can **scale to clusters** of multiple machines.
* Offers **high speed, strong security, and good connectivity**.
* Widely used for **Internet and web-based database applications**.

> **Key Point:** MySQL Server is fast, secure, scalable, and suitable for both small and large applications.

### 5. **MySQL Server Architecture **

* MySQL works in **Client/Server** and **Embedded** systems.
* It uses a **multithreaded SQL server** to handle multiple requests efficiently.
* Includes **client programs, libraries, administrative tools, and APIs**.
* Can also be used as an **embedded library** within applications for a **smaller and faster standalone solution**.

> **Key Point:** MySQL supports both client/server architecture and embedded applications, making it flexible for different use cases.

### 6. **Additional Features of MySQL **

* Many **applications and programming languages** support MySQL.
* **MySQL HeatWave** is a **fully managed cloud database service** with built-in analytics and machine learning.
* It is available on **OCI, AWS, and Azure**.

> **Key Point:** MySQL has broad software support, offers the cloud-based MySQL HeatWave service **



# Class notes

* For Creation of table *
> Create table <tn> (a1 dt1, a2 dt2, a3 dt3);
> Create table <tn> ('&dno', '&ccity', '&cst');
eg- Create table customer (cn char(20), cst varchar(20))

For insertion
Before inserting use 
> desc <tablename>; ---??
Proceed w insertion

> INSERT INTO <tablename> VALUES(
    'Karthik',
    'Main-road',
    'MDU',
    100
);

* use '/' for repeating an operation a certain number of times

For deletion
> DELETE table customer;

Delete a single col
> DELETE table customer where cn = "B" ;

For alteration
> ALTER table customer add dno number(5);
// adds a new col for dno
> ALTER table customer drop col colno; 
-- if no tuples then no issues else null val

For updating
> UPDATE cn = 'A';
         cst = "A1";--??


# DOMAIN CONSTRAINTS
not null
unique -- can be null
check
default
primary key -- nut null and unique
references
On delete cascade; --only used w foreign keys 


eg
CREATE table account(
    ano varchar(5),
    bn varchar(10),
    amt number(0,2)
);

unique and not null('&1','&2','&3','&4')
check bn in('SBI','IND')

> delete table account drop primary key     --removes all primary keys

# TASK FOR TN
LEARN ABT TRIGGERS
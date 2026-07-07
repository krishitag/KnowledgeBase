### **1.2.2 Main Features of MySQL **

#### **1. Internals & Performance**

- Written in **C and C++**.
- Works on **multiple operating systems**.
- **Multithreaded** and supports **multiple CPUs**.
- Supports **transactional (InnoDB)** and **non-transactional (MyISAM)** storage engines.
- Fast query execution using **B-tree indexes**, optimized joins, and in-memory hash tables.
- Uses a **client/server architecture**.

#### **2. Data Types**

* Supports many data types:

  - Numeric (`INT`, `FLOAT`, `DOUBLE`)
  - String (`CHAR`, `VARCHAR`, `TEXT`, `BLOB`)
  - Date & Time (`DATE`, `TIME`, `DATETIME`, `TIMESTAMP`, `YEAR`)
  - Others (`ENUM`, `SET`, Spatial types)


#### **3. SQL Features**

* Supports standard SQL commands:

  - `SELECT`, `INSERT`, `UPDATE`, `DELETE`, `REPLACE`
  - `GROUP BY`, `ORDER BY`
  - `JOIN` (LEFT & RIGHT OUTER JOIN)

* Supports aggregate functions:

  - `COUNT()`, `SUM()`, `AVG()`, `MAX()`, `MIN()
  `
* Includes:

  - `SHOW` statements
  - `EXPLAIN` for query optimization
  - Cross-database queries


#### **4. Security**

- Secure **user privileges and password system**.
- Supports **encrypted password transmission**.

#### **5. Scalability**

- Can handle **very large databases** (billions of rows).
- Supports up to **64 indexes per table**.

#### **6. Connectivity**

* Supports connections using:
  - **TCP/IP**
  - **Unix sockets**
  - **Windows named pipes/shared memory**

* APIs/connectors available for:
  - **C, C++, Java, Python, PHP, Perl, Ruby, .NET**, etc.
* Supports **ODBC** and **JDBC**.

#### **7. Localization**

- Supports **multiple languages** and **character sets (Unicode)**.
- Allows different **collations** and **time zones**.

#### **8. Clients & Tools**

* Includes utilities like:
  - `mysql`
  - `mysqldump`
  - `mysqladmin`

**MySQL Workbench**
- Provides tools to **check, optimize, repair, and back up** databases.

> **Key Point:** MySQL is a **fast, secure, scalable, and portable RDBMS** with rich SQL support, multiple data types, strong security, wide language connectivity, multilingual support, and powerful administration tools.

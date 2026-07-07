# 5.3.1 Creating and Selecting a Database

## What is a Database?

A **database** is an organized collection of related data.

Think of it like a **cupboard**.

- Cupboard = Database
- Drawers = Tables
- Files inside drawers = Rows (Records)
- Information in each file = Columns (Fields)


# Step 1: Create a Database

```sql
> CREATE DATABASE <database_name>;
```

## Important Notes

- A database is created **only once**.
- Creating a database does **NOT** automatically start using it.
- After creating it, you must select it using the `USE` command.


# Step 2: Select (Use) a Database

Once a database exists, MySQL needs to know which database you want to work with.

```sql
> USE database_name;
```
eg: 
```sql
> USE menagerie;
```

Output:

```
Database changed
```

Now every SQL command will be executed inside the **menagerie** database.


# Why is USE Required?

Imagine you have multiple databases:

```
School
Hospital
Library
Company
```

When you type

```sql
CREATE TABLE Student (...);
```

MySQL doesn't know **where** to create the table.

So you first tell MySQL:

```sql
USE School;
```

Now MySQL knows to create the table inside the **School** database.


# Checking the Current Database

If you forget which database you're using, run:

```sql
SELECT DATABASE();
```

Example Output

```
+------------+
| DATABASE() |
+------------+
| menagerie  |
+------------+
```

If no database is selected:

```
NULL
```

This means no database is currently active.

---

# Creating and Selecting in One Go

Instead of writing:

```sql
CREATE DATABASE menagerie;

USE menagerie;
```

You can also start MySQL directly with the database selected:

```bash
mysql -u username -p menagerie
```

After entering your password, the **menagerie** database becomes active automatically.

---

# Database Naming Rules

### On Linux / Unix

Database names are **case-sensitive**.

These are considered different:

```text
menagerie
Menagerie
MENAGERIE
```

Always use the exact same spelling.

---

### On Windows

Database names are generally **not case-sensitive**.

Still, it is recommended to always use the same letter case.

Example:

If you created

```text
StudentDB
```

Always write

```text
StudentDB
```

instead of

```text
studentdb
```

---

# Common Error

### Error

```
ERROR 1044 (42000)

Access denied
```

### Reason

Your account doesn't have permission to create a database.

Only users with the required privileges can create databases.

---

# Example Workflow

### Step 1

Create a database

```sql
CREATE DATABASE College;
```

---

### Step 2

Select it

```sql
USE College;
```

---

### Step 3

Verify

```sql
SELECT DATABASE();
```

Output

```
College
```

---

# Quick Revision

### Create Database

```sql
CREATE DATABASE College;
```

Creates a new database.

---

### Select Database

```sql
USE College;
```

Makes the database active.

---

### Check Current Database

```sql
SELECT DATABASE();
```

Shows the currently selected database.

---

# Exam Points ⭐

- `CREATE DATABASE` creates a new database.
- `USE` selects the database for the current session.
- A database must be selected before creating tables.
- `SELECT DATABASE();` shows the active database.
- Database names are case-sensitive on Linux/Unix.
- If you get **Access Denied**, your user lacks the required privileges.

---

# Memory Trick 🧠

Think of it like opening a notebook.

```
CREATE DATABASE
↓
Buy a new notebook.

USE
↓
Open that notebook.

CREATE TABLE
↓
Start writing inside the notebook.
```

---

# Summary

| Command | Purpose |
|---------|---------|
| `CREATE DATABASE db_name;` | Creates a new database |
| `USE db_name;` | Selects the database |
| `SELECT DATABASE();` | Shows the current database |
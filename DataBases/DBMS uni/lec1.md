
# Class notes

* For Creation of table *
> Create table <tn> (a1 dt1, a2 dt2, a3 dt3);
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


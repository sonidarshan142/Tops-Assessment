use assessment;
create table customer
(customer_id int,
customer_name text,
city text,
grade int,
salesman_id int);

insert into customer values
('3002',"Nick Rimando","New york","100","5001"),
('3007',"Brad Davis","New york","200","5001"),
('3005',"graham Zusi","California","200","5002"),
('3008',"Julian Green","London","300","5002"),
('3004',"Fabian Johnson","Paris","300","5006"),
('3009',"Geoff Cameron","Berlin","100","5003"),
('3003',"Jozy Altidor","Moscow","200","5007"),
('3001',"Brad Guzan","London",null, "5005");
 select * from customer;
 
 create table salesman
 (salesman_id int,
 name text,
 city text,
 commission float);
 
 insert into salesman values
 ('5001',"James Hoog","New York","0.15"),
 ('5002',"Nali Knite","Paris","0.13"),
  ('5005',"Pit Alex","London","0.11"),
 ('5006',"Mc Lyon","Paris","0.14"),
 ('5007',"Paul Adam","Rome","0.13"),
 ('5003',"Lauson Hen","San Jose","0.12");
 
 Select a.customer_name as "Customer Name", a.city, b.name as "Salesman", b.commission
from customer a
inner join salesman b on a.salesman_id = b.salesman_id;




 

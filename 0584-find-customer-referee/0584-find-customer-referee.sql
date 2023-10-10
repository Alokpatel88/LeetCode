# Write your MySQL query statement below
select name
 from customer
 where  referee_id is null or referee_id != 2 ;
# where id < 6;
# where referee_id is null OR referee_id  != 2;
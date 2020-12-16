CREATE DEFINER=`s2018303116`@`%` PROCEDURE `stuBorrow`(in bid char(20), in sid char(15), in bdate datetime, out returnCode int)
BEGIN
 set @state = (select max(state) from book where bookid = bid);
    if (@state = 0 or @state = 2) then
  insert into rborrow values(bid, sid, bdate);
        update book set state = @state + 1 where bookid = bid;
  set returnCode = 0; -- 成功
 else
  set returnCode = 1; -- 已被预订
 end if;
END

CREATE DEFINER=`s2018303116`@`%` PROCEDURE `stuRenew`(in bid char(20), in sid char(15), in rndate datetime, out returnCode int)
BEGIN
 set @state = (select max(state) from book where bookid = bid);
    set @sid = (select sid from borrow where bookid = bid and brdate = 
  (select max(brdate) from borrow where bookid = bid));
    if (@state = 1 or @state = 3) then
  set returnCode = 1; -- 已被其他人预订
 else if (isnull(@sid) or @sid != sid) then
  set returnCode = 2; -- 该学生未预订过此书
 else
  insert into rrenew values(bid, sid, rndate);
  update book set state = @state + 1 where bookid = bid;
        set returnCode = 0; -- 成功
    end if; end if;
END

CREATE DEFINER=`s2018303116`@`%` PROCEDURE `stuReturn`(in bid char(20), in sid char(15), in rtdate datetime, out returnCode int)
BEGIN
 set @state = (select max(state) from book where bookid = bid);
 set @sid = (select sid from borrow where bookid = bid and brdate = 
  (select max(brdate) from borrow where bookid = bid));
    if (isnull(@sid) or @sid != sid) then
  set returnCode = 2; -- 该学生未借过此书
 else
  insert into rreturn values(bid, sid, rtdate);
        set returnCode = 0; -- 成功
 end if;
END

CREATE DEFINER=`s2018303116`@`%` PROCEDURE `libBorrow`(in bid char(20), in sid char(15), in brd datetime, out returnCode int)
BEGIN
 set @state = (select max(state) from book where bookid = bid);
    if (@state = 0 or @state = 2) then
  set returnCode = 3; -- 没有人借这本书
 else if (@state = 3) then
  set returnCode = 6; -- 书未归还，需继续等待
 else
  update book set state = 2 where bookid = bid;
        insert into borrow values(bid, sid, brd);
        delete from rborrow where bookid = bid;
        set returnCode = 0; -- 成功
 end if; end if;
END

CREATE DEFINER=`s2018303116`@`%` PROCEDURE `libRenew`(in bid char(20), in sid char(15), in rnd datetime, out returnCode int)
BEGIN
 set @state = (select max(state) from book where bookid = bid);
    if (@state = 0 or @state = 1) then
  set returnCode = 4; -- 错误，图书未借出
 else
  insert into renew values(bid, sid, rnd);
        delete from rrenew where bookid = bid;
        set returnCode = 0; -- 成功
 end if;
END

CREATE DEFINER=`s2018303116`@`%` PROCEDURE `libReturn`(in bid char(20), in sid char(15), in rtd datetime, out returnCode int)
BEGIN
 set @state = (select max(state) from book where bookid = bid);
    if (@state = 0 or @state = 1) then
  set returnCode = 5; -- 图书已在图书馆内，无法归还
 else
  update book set state = state - 2 where bookid = bid;
        insert into `return` values(bid, sid, rtd);
        delete from rreturn where bookid = bid;
        set returnCode = 0; -- 成功
 end if;
END

CREATE 
    ALGORITHM = UNDEFINED 
    DEFINER = `s2018303116`@`%` 
    SQL SECURITY DEFINER
VIEW `library_2018303116`.`stu_without_password` AS
    SELECT 
        `library_2018303116`.`student`.`StuID` AS `stuid`,
        `library_2018303116`.`student`.`StuName` AS `stuname`,
        `library_2018303116`.`student`.`Gender` AS `gender`,
        `library_2018303116`.`student`.`Dept` AS `dept`,
        `library_2018303116`.`student`.`Class` AS `class`
    FROM
        `library_2018303116`.`student`
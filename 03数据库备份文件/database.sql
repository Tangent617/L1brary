-- MySQL dump 10.13  Distrib 8.0.21, for Win64 (x86_64)
--
-- Host: 127.0.0.1    Database: library_2018303116
-- ------------------------------------------------------
-- Server version	8.0.21

use library_2018303116;

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `book`
--

DROP TABLE IF EXISTS `book`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `book` (
  `BookID` char(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `Title` char(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `Author` char(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `Publisher` char(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `Pyear` year DEFAULT NULL,
  `Category` char(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `State` int unsigned NOT NULL DEFAULT '0',
  PRIMARY KEY (`BookID`),
  CONSTRAINT `check_state` CHECK ((`State` in (0,1,2,3)))
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `book`
--

LOCK TABLES `book` WRITE;
/*!40000 ALTER TABLE `book` DISABLE KEYS */;
INSERT INTO `book` VALUES ('7-101-05203-7','万历十五年','黄仁宇','中华书局',2006,'历史',0),('7-208-06164-5','追风筝的人','卡勒德·胡赛尼','上海人民出版社',2006,'长篇小说',0),('978-7-02-004929-5','平凡的世界.第一部','路遥','人民文学出版社',2004,'长篇小说',0),('978-7-111-18777-6','算法导论','Thomas H. Cormen','机械工业出版社',2006,'计算机',0),('978-7-115-22626-6','鸟哥的Linux私房菜:基础学习篇','鸟哥','人民邮电出版社',2010,'计算机',0),('978-7-5086-4735-7','人类简史:从动物到上帝','尤瓦尔·赫拉利','中信出版社',2014,'社会学',0),('978-7-5442-7087-8','解忧杂货店','东野圭吾','南海出版公司',2014,'长篇小说',0),('9787530491409','尚济形意拳练法打法实践','马保国','北京科学技术出版社',2017,'武术',0);
/*!40000 ALTER TABLE `book` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `borrow`
--

DROP TABLE IF EXISTS `borrow`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `borrow` (
  `BookID` char(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `StuID` char(15) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `BrDate` datetime NOT NULL,
  PRIMARY KEY (`BookID`,`StuID`,`BrDate`),
  KEY `FK_br_sid` (`StuID`),
  CONSTRAINT `FK_br_bid` FOREIGN KEY (`BookID`) REFERENCES `book` (`BookID`),
  CONSTRAINT `FK_br_sid` FOREIGN KEY (`StuID`) REFERENCES `student` (`StuID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `borrow`
--

LOCK TABLES `borrow` WRITE;
/*!40000 ALTER TABLE `borrow` DISABLE KEYS */;
/*!40000 ALTER TABLE `borrow` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `librarian`
--

DROP TABLE IF EXISTS `librarian`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `librarian` (
  `LibID` char(15) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `LibName` char(10) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `Password` char(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL DEFAULT '123456',
  PRIMARY KEY (`LibID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `librarian`
--

LOCK TABLES `librarian` WRITE;
/*!40000 ALTER TABLE `librarian` DISABLE KEYS */;
INSERT INTO `librarian` VALUES ('2333','哈理员','23333333'),('6666','六理员','66666666');
/*!40000 ALTER TABLE `librarian` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `rborrow`
--

DROP TABLE IF EXISTS `rborrow`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `rborrow` (
  `BookID` char(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `StuID` char(15) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `BrDate` datetime NOT NULL,
  PRIMARY KEY (`BookID`,`StuID`,`BrDate`),
  KEY `FK_rbr_sid` (`StuID`),
  CONSTRAINT `FK_rbr_bid` FOREIGN KEY (`BookID`) REFERENCES `book` (`BookID`),
  CONSTRAINT `FK_rbr_sid` FOREIGN KEY (`StuID`) REFERENCES `student` (`StuID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `rborrow`
--

LOCK TABLES `rborrow` WRITE;
/*!40000 ALTER TABLE `rborrow` DISABLE KEYS */;
/*!40000 ALTER TABLE `rborrow` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `renew`
--

DROP TABLE IF EXISTS `renew`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `renew` (
  `BookID` char(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `StuID` char(15) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `RnDate` datetime NOT NULL,
  PRIMARY KEY (`BookID`,`StuID`,`RnDate`),
  KEY `FK_rn_sid` (`StuID`),
  CONSTRAINT `FK_rn_bid` FOREIGN KEY (`BookID`) REFERENCES `book` (`BookID`),
  CONSTRAINT `FK_rn_sid` FOREIGN KEY (`StuID`) REFERENCES `student` (`StuID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `renew`
--

LOCK TABLES `renew` WRITE;
/*!40000 ALTER TABLE `renew` DISABLE KEYS */;
/*!40000 ALTER TABLE `renew` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `return`
--

DROP TABLE IF EXISTS `return`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `return` (
  `BookID` char(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `StuID` char(15) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `RtDate` datetime NOT NULL,
  PRIMARY KEY (`BookID`,`StuID`,`RtDate`),
  KEY `FK_rt_sid` (`StuID`),
  CONSTRAINT `FK_rt_bid` FOREIGN KEY (`BookID`) REFERENCES `book` (`BookID`),
  CONSTRAINT `FK_rt_sid` FOREIGN KEY (`StuID`) REFERENCES `student` (`StuID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `return`
--

LOCK TABLES `return` WRITE;
/*!40000 ALTER TABLE `return` DISABLE KEYS */;
/*!40000 ALTER TABLE `return` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `rrenew`
--

DROP TABLE IF EXISTS `rrenew`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `rrenew` (
  `BookID` char(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `StuID` char(15) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `RnDate` datetime NOT NULL,
  PRIMARY KEY (`BookID`,`StuID`,`RnDate`),
  KEY `FK_rrn_sid` (`StuID`),
  CONSTRAINT `FK_rrn_bid` FOREIGN KEY (`BookID`) REFERENCES `book` (`BookID`),
  CONSTRAINT `FK_rrn_sid` FOREIGN KEY (`StuID`) REFERENCES `student` (`StuID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `rrenew`
--

LOCK TABLES `rrenew` WRITE;
/*!40000 ALTER TABLE `rrenew` DISABLE KEYS */;
/*!40000 ALTER TABLE `rrenew` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `rreturn`
--

DROP TABLE IF EXISTS `rreturn`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `rreturn` (
  `BookID` char(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `StuID` char(15) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `RtDate` datetime NOT NULL,
  PRIMARY KEY (`BookID`,`StuID`,`RtDate`),
  KEY `FK_rrt_sid` (`StuID`),
  CONSTRAINT `FK_rrt_bid` FOREIGN KEY (`BookID`) REFERENCES `book` (`BookID`),
  CONSTRAINT `FK_rrt_sid` FOREIGN KEY (`StuID`) REFERENCES `student` (`StuID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `rreturn`
--

LOCK TABLES `rreturn` WRITE;
/*!40000 ALTER TABLE `rreturn` DISABLE KEYS */;
/*!40000 ALTER TABLE `rreturn` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Temporary view structure for view `stu_without_password`
--

DROP TABLE IF EXISTS `stu_without_password`;
/*!50001 DROP VIEW IF EXISTS `stu_without_password`*/;
SET @saved_cs_client     = @@character_set_client;
/*!50503 SET character_set_client = utf8mb4 */;
/*!50001 CREATE VIEW `stu_without_password` AS SELECT 
 1 AS `stuid`,
 1 AS `stuname`,
 1 AS `gender`,
 1 AS `dept`,
 1 AS `class`*/;
SET character_set_client = @saved_cs_client;

--
-- Table structure for table `student`
--

DROP TABLE IF EXISTS `student`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `student` (
  `StuID` char(15) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `StuName` char(10) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL,
  `Gender` char(5) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `Dept` char(15) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `Class` char(15) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci DEFAULT NULL,
  `Password` char(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci NOT NULL DEFAULT '123456',
  PRIMARY KEY (`StuID`),
  CONSTRAINT `check_gender` CHECK ((`gender` in (_utf8mb4'男',_utf8mb4'女')))
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `student`
--

LOCK TABLES `student` WRITE;
/*!40000 ALTER TABLE `student` DISABLE KEYS */;
INSERT INTO `student` VALUES ('2018301111','小明','男','航天','11111111','123456'),('2018302222','小红','女','材料','22222222','123456'),('2018303333','小圆','女','动能','33333333','123456'),('2018304444','小黑','男','自动化','44444444','123456'),('2018305555','阿强','男','电信','55555555','123456'),('2018306666','郭郭','女','计算机','66666666','123456'),('2018307777','小可爱','女','软件','77777777','123456'),('2018308888','娟娟','女','软件','88888888','123456');
/*!40000 ALTER TABLE `student` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Dumping events for database 'library_2018303116'
--

--
-- Dumping routines for database 'library_2018303116'
--

--
-- Final view structure for view `stu_without_password`
--

/*!50001 DROP VIEW IF EXISTS `stu_without_password`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8mb4 */;
/*!50001 SET character_set_results     = utf8mb4 */;
/*!50001 SET collation_connection      = utf8mb4_0900_ai_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `stu_without_password` AS select `student`.`StuID` AS `stuid`,`student`.`StuName` AS `stuname`,`student`.`Gender` AS `gender`,`student`.`Dept` AS `dept`,`student`.`Class` AS `class` from `student` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2021-06-12  9:38:51


DELIMITER ;;

CREATE PROCEDURE `stuBorrow`(in bid char(20), in sid char(15), in bdate datetime, out returnCode int)
BEGIN
 set @state = (select max(state) from book where bookid = bid);
    if (@state = 0 or @state = 2) then
  insert into rborrow values(bid, sid, bdate);
        update book set state = @state + 1 where bookid = bid;
  set returnCode = 0; -- 成功
 else
  set returnCode = 1; -- 已被预订
 end if;
END;;

DELIMITER ;;

CREATE PROCEDURE `stuRenew`(in bid char(20), in sid char(15), in rndate datetime, out returnCode int)
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
END;;

DELIMITER ;;

CREATE PROCEDURE `stuReturn`(in bid char(20), in sid char(15), in rtdate datetime, out returnCode int)
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
END;;

DELIMITER ;;

CREATE PROCEDURE `libBorrow`(in bid char(20), in sid char(15), in brd datetime, out returnCode int)
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
END;;

DELIMITER ;;

CREATE PROCEDURE `libRenew`(in bid char(20), in sid char(15), in rnd datetime, out returnCode int)
BEGIN
 set @state = (select max(state) from book where bookid = bid);
    if (@state = 0 or @state = 1) then
  set returnCode = 4; -- 错误，图书未借出
 else
  insert into renew values(bid, sid, rnd);
        delete from rrenew where bookid = bid;
        set returnCode = 0; -- 成功
 end if;
END;;

DELIMITER ;;

CREATE PROCEDURE `libReturn`(in bid char(20), in sid char(15), in rtd datetime, out returnCode int)
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
END;;
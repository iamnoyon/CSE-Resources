# Host: localhost  (Version: 5.6.20)
# Date: 2022-03-15 07:05:37
# Generator: MySQL-Front 5.3  (Build 1.18)

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE */;
/*!40101 SET SQL_MODE='NO_ENGINE_SUBSTITUTION' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES */;
/*!40103 SET SQL_NOTES='ON' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS */;
/*!40014 SET FOREIGN_KEY_CHECKS=0 */;

#
# Source for table "admin"
#

DROP TABLE IF EXISTS `admin`;
CREATE TABLE `admin` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `FullName` varchar(100) DEFAULT NULL,
  `AdminEmail` varchar(120) DEFAULT NULL,
  `UserName` varchar(100) NOT NULL,
  `Password` varchar(100) NOT NULL,
  `updationDate` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00' ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=latin1;

#
# Data for table "admin"
#

INSERT INTO `admin` VALUES (1,'Kumar Pandule','kumarpandule@gmail.com','admin','e6e061838856bf47e1de730719fb2609','2021-06-28 22:06:08');

#
# Source for table "tblauthors"
#

DROP TABLE IF EXISTS `tblauthors`;
CREATE TABLE `tblauthors` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `AuthorName` varchar(159) DEFAULT NULL,
  `creationDate` timestamp NULL DEFAULT CURRENT_TIMESTAMP,
  `UpdationDate` timestamp NULL DEFAULT NULL ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=11 DEFAULT CHARSET=latin1;

#
# Data for table "tblauthors"
#

INSERT INTO `tblauthors` VALUES (1,'Kumar Pandule','2017-07-08 18:49:09','2021-06-28 22:03:28'),(2,'Kumar','2017-07-08 20:30:23','2021-06-28 22:03:35'),(3,'Rahul','2017-07-08 20:35:08','2021-06-28 22:03:43'),(4,'HC Verma','2017-07-08 20:35:21',NULL),(5,'R.D. Sharma ','2017-07-08 20:35:36',NULL),(9,'fwdfrwer','2017-07-08 21:22:03',NULL),(10,'shopnil','2022-03-15 06:52:10',NULL);

#
# Source for table "tblbooks"
#

DROP TABLE IF EXISTS `tblbooks`;
CREATE TABLE `tblbooks` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `BookName` varchar(255) DEFAULT NULL,
  `CatId` int(11) DEFAULT NULL,
  `AuthorId` int(11) DEFAULT NULL,
  `ISBNNumber` int(11) DEFAULT NULL,
  `BookPrice` int(11) DEFAULT NULL,
  `RegDate` timestamp NULL DEFAULT CURRENT_TIMESTAMP,
  `UpdationDate` timestamp NULL DEFAULT NULL ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=latin1;

#
# Data for table "tblbooks"
#

INSERT INTO `tblbooks` VALUES (1,'PHP And MySql programming',5,1,222333,20,'2017-07-09 02:04:55','2017-07-15 11:54:41'),(3,'physics',6,4,1111,15,'2017-07-09 02:17:31','2017-07-15 12:13:17'),(4,'web test',5,3,12345,100,'2022-03-15 06:51:56',NULL);

#
# Source for table "tblcategory"
#

DROP TABLE IF EXISTS `tblcategory`;
CREATE TABLE `tblcategory` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `CategoryName` varchar(150) DEFAULT NULL,
  `Status` int(1) DEFAULT NULL,
  `CreationDate` timestamp NULL DEFAULT CURRENT_TIMESTAMP,
  `UpdationDate` timestamp NULL DEFAULT '0000-00-00 00:00:00' ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=9 DEFAULT CHARSET=latin1;

#
# Data for table "tblcategory"
#

INSERT INTO `tblcategory` VALUES (4,'Romantic',1,'2017-07-05 00:35:25','2017-07-06 22:00:42'),(5,'Technology',1,'2017-07-05 00:35:39','2017-07-08 23:13:03'),(6,'Science',1,'2017-07-05 00:35:55','0000-00-00 00:00:00'),(7,'Management',0,'2017-07-05 00:36:16','0000-00-00 00:00:00'),(8,'web',1,'2022-03-15 06:52:33','0000-00-00 00:00:00');

#
# Source for table "tblissuedbookdetails"
#

DROP TABLE IF EXISTS `tblissuedbookdetails`;
CREATE TABLE `tblissuedbookdetails` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `BookId` int(11) DEFAULT NULL,
  `StudentID` varchar(150) DEFAULT NULL,
  `IssuesDate` timestamp NULL DEFAULT CURRENT_TIMESTAMP,
  `ReturnDate` timestamp NULL DEFAULT NULL ON UPDATE CURRENT_TIMESTAMP,
  `RetrunStatus` int(1) DEFAULT NULL,
  `fine` int(11) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=latin1;

#
# Data for table "tblissuedbookdetails"
#

INSERT INTO `tblissuedbookdetails` VALUES (1,1,'SID002','2017-07-15 12:09:47','2017-07-15 17:15:20',1,0),(2,1,'SID002','2017-07-15 12:12:27','2017-07-15 17:15:23',1,5),(3,3,'SID002','2017-07-15 12:13:40',NULL,0,NULL),(4,3,'SID002','2017-07-15 12:23:23','2017-07-15 17:22:29',1,2),(5,1,'SID009','2017-07-15 16:59:26',NULL,0,NULL),(6,3,'SID011','2017-07-16 00:02:55',NULL,0,NULL),(7,4,'SID012','2022-03-15 06:54:54',NULL,NULL,NULL);

#
# Source for table "tblstudents"
#

DROP TABLE IF EXISTS `tblstudents`;
CREATE TABLE `tblstudents` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `StudentId` varchar(100) DEFAULT NULL,
  `FullName` varchar(120) DEFAULT NULL,
  `EmailId` varchar(120) DEFAULT NULL,
  `MobileNumber` char(11) DEFAULT NULL,
  `Password` varchar(120) DEFAULT NULL,
  `Status` int(1) DEFAULT NULL,
  `RegDate` timestamp NULL DEFAULT CURRENT_TIMESTAMP,
  `UpdationDate` timestamp NULL DEFAULT NULL ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`),
  UNIQUE KEY `StudentId` (`StudentId`)
) ENGINE=InnoDB AUTO_INCREMENT=12 DEFAULT CHARSET=latin1;

#
# Data for table "tblstudents"
#

INSERT INTO `tblstudents` VALUES (1,'SID002','Anuj kumar','anuj.lpu1@gmail.com','9865472555','f925916e2754e5e03f75dd58a5733251',1,'2017-07-11 21:37:05','2017-07-16 00:26:21'),(4,'SID005','sdfsd','csfsd@dfsfks.com','8569710025','92228410fc8b872914e023160cf4ae8f',0,'2017-07-11 21:41:27','2017-07-15 23:43:03'),(8,'SID009','test','test@gmail.com','2359874527','f925916e2754e5e03f75dd58a5733251',1,'2017-07-11 21:58:28','2017-07-15 19:42:44'),(9,'SID010','Amit','amit@gmail.com','8585856224','f925916e2754e5e03f75dd58a5733251',1,'2017-07-15 19:40:30',NULL),(10,'SID011','Sarita Pandey','sarita@gmail.com','4672423754','f925916e2754e5e03f75dd58a5733251',1,'2017-07-16 00:00:59',NULL),(11,'SID012','shopnil','shopnil@gmail.com','0173198971','827ccb0eea8a706c4c34a16891f84e7b',1,'2022-03-15 06:44:11',NULL);

/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;
/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;

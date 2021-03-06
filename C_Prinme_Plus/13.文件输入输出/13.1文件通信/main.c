/*
文件，通常是磁盘或固态硬盘上的一段已命名的存储区。C把文件看作是一系列连续的字节，每个字节都能被单独读取。
为了规范文本文件的处理，C提供两种访问文件的途径：二进制模式和文本模式。
 在二进制模式中，程序可以访问文件的每个字节。
 在文本模式中，程序所见的内容和文件的实际内容不同。
 在旧式的Macintosh中，读取文件时，把文件的\r转换成\n；写入文件时，把\n转换\r。
 在MS-DOS平台读取文件，把\r\n转换成\n；写入文件，把\n转换\r\n。

*/
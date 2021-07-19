# 力扣刷完，大厂坐穿
# 记力扣
之前Python做了大部分的题，慢慢补吧；

________________________________
# 2021/7/18(跟女朋友吃火锅去了。。)
关于删除头结点
________________________________
## 2021/7/19 
今天做了一个MFC的小液压软件，学会了如何将数组转存成txt.

[fstream说明](https://github.com/mayingbo/CPP-/blob/main/%E6%AF%8F%E6%97%A5CPP/C++%20%E8%AF%BB%E5%86%99%E5%88%9B%E5%BB%BATXT%E6%96%87%E4%BB%B6.md)

[一维数组举例](https://github.com/mayingbo/CPP-/blob/main/%E6%AF%8F%E6%97%A5CPP/%E8%BD%AC%E5%AD%98%E4%B8%BE%E4%BE%8B/%E8%BD%AC%E5%AD%98%E6%95%B0%E7%BB%84%E4%B8%BE%E4%BE%8B.cpp)
```Cpp
void Spool::Saveas(const double A[], const double x1[],int num)
{
	std::ofstream dataFile;
	dataFile.open("dataFile2.txt", std::ofstream::trunc);
	dataFile <<  "半径" << "\t"
		<< "XX" << std::endl;
	for (int i=1;i<num;i++)
		dataFile << x1[i] << "\t"
		<< A[i] << std::endl;

	
	dataFile.close();
	return;
}
```

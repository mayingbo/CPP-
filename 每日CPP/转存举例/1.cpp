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

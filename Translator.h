#include <string>
#include <vector>


class Translator{
	std::string mRNA;

	std::vector<std::string> codonStrand;
	std::vector<std::string> aminoStrand;

	private:
		void trimmRNA(); //Removes spaces and stuff that is ugly..
		void partitionRNA();

	
	public:
		void loadmRNA(std::string str);
		void loadmRNAFromFile(std::string filename);

		void translate();
		void printmRNA();
		void printCodonStrand();
		void printAminoStrand();

};
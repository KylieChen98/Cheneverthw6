#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(int argc, char* argv[])
{
  if(argc!=3)
  {
    cout << "Invalid amount of Arguments." << endl;
    cout << "Proper Usage is ./myCopier read_file write_file" << endl;
    return 2;
  }

  string read_file(argv[1]);
  string write_file(argv[2]);

  cout << "Beginning to copy file." << endl;
  cout << "File to be read is: " << read_file << "." << endl;
  cout << "File to be written is: " << write_file << "." << endl;

  fstream fsr;
  fstream fsw;
  string line;
  fsr.open((read_file).c_str(), fstream::in);
  fsw.open((write_file).c_str(), fstream::out);

  while(getline(fsr,line))
  {
    fsw << line << endl;
  }

  fsr.close();
  fsw.close();

  cout << read_file << " successfully written to " << write_file << "." << endl;
}

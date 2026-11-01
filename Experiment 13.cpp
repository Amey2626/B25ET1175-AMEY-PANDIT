#include <iostream>
#include <fstream>
using namespace std;
int main()
{
ifstream fs;
ofstream ft;
string str;
char sourcefile[50], destinationfile[50];
cout << "Enter Source File with Extension: ";
cin.getline(sourcefile, 100);
fs.open(sourcefile);
if (!fs)
{
cout << "Error in Opening Source File...!!!";
exit(1);
}
cout << "Enter Destination File with Extension: ";
cin.getline(destinationfile, 100);

ft.open(destinationfile);
if (!ft)
{
cout << "Error in Opening Destination File...!!!";
fs.close();
exit(2);
}
if (fs && ft)
{
while (getline(fs, str))
{
ft << str << "\n";
}
cout << "\n\n Source File Date Successfully Copied to Destination File...!!!";
}
else
{
cout << "File Cannot Open...!!!";
}
cout << "\n\n Open Destination File and Check!!!\n";
fs.close();
ft.close();
}

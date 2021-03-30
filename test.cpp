#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // Create a text string, which is used to output the text file
    string myText;

    // Read from the text file
    ifstream MyReadFile("stories.txt");

    // Use a while loop together with the getline() function to read the file line by line
    int i = 0;
    while (1)
    {
        getline(MyReadFile, myText);
        if (MyReadFile.eof())
            break;

        cout << i << " " << myText << endl;
        // cin.ignore();
        i++;
    }

    // Close the file
    MyReadFile.close();
    return 0;
}
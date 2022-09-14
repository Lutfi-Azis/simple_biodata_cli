#include <iostream>
#include <string>

using namespace std;

struct DataEntry
{
    string name;
    string content;
};

int main()
{

    cout << "[BIODATA]\n" << endl;

         /**
         * Array yang mengandung biodata.
         */
         DataEntry biodataEntries[4] =
    {
        {"Nama","Lutfi"},
        {"Tempat Lahir", "Pati"},
        {"Tanggal Lahir", "27-03-2004"},
        {"Universitas", "UDINUS"}
    };

    // Jumlah anggota dalam array
    int biodataEntriesLength = sizeof(biodataEntries) / sizeof(DataEntry);

    for (int i=0; i<biodataEntriesLength; i++)
    {
        cout << biodataEntries[i].name + ": " + biodataEntries[i].content << endl;
    }
    return 0;
}

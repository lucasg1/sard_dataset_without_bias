using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<short> dataVector);
void FUN1()
{
    short data;
    vector<short> dataVector;
    data = 0;
    data = 100-1;
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<short> dataVector)
{
    short data = dataVector[2];
    {
        char source[100];
        char dest[100] = "";
        memset(source, 'A', 100-1);
        source[100-1] = '\0';
        if (data < 100)
        {
            memcpy(dest, source, data);
            dest[data] = '\0'; 
        }
        printLine(dest);
    }
}
} 

using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<char *> dataVector);
void FUN1()
{
    char * data;
    vector<char *> dataVector;
    data = NULL;
    data = new char[50];
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<char *> dataVector)
{
    char * data = dataVector[2];
    {
        size_t i, destLen;
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
        destLen = strlen(dest);
        for (i = 0; i < destLen; i++)
        {
<START>
            dest[i] = data[i];
<END>
        }
        dest[100-1] = '\0';
        printLine(dest);
        delete [] data;
    }
}
} 

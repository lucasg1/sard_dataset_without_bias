using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<char *> dataVector);
void FUN1()
{
    char * data;
    vector<char *> dataVector;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    data = dataBuffer;
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
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
        char dest[50] = "";
<START>
        memmove(dest, data, strlen(data)*sizeof(char));
<END>
        dest[50-1] = '\0'; 
        printLine(data);
    }
}
} 

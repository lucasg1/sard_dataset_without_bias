using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<char *> dataVector)
{
    char * data = dataVector[2];
    {
        size_t sourceLen;
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        sourceLen = strlen(source);
        strncat(data, source, sourceLen);
        printLine(data);
    }
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<char *> dataVector);
void FUN2()
{
    char * data;
    vector<char *> dataVector;
    char dataBuffer[100];
    data = dataBuffer;
<START>
<END>
    ; 
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
} 

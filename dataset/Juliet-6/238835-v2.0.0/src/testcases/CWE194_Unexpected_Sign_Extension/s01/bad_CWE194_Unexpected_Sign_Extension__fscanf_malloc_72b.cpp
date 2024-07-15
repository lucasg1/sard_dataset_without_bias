using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<short> dataVector);
void FUN1()
{
    short data;
    vector<short> dataVector;
    data = 0;
    fscanf (stdin, "%hd", &data);
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
    if (data < 100)
    {
<START>
        char * dataBuffer = (char *)malloc(data);
<END>
        if (dataBuffer == NULL) {exit(-1);}
        memset(dataBuffer, 'A', data-1);
        dataBuffer[data-1] = '\0';
        printLine(dataBuffer);
        free(dataBuffer);
    }
}
} 

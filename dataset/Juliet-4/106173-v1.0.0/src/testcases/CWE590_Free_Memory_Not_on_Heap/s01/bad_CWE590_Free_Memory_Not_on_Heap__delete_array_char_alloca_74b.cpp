using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, char *> dataMap);
void FUN1()
{
    char * data;
    map<int, char *> dataMap;
    data = NULL; 
    {
        char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
        memset(dataBuffer, 'A', 100-1); 
        dataBuffer[100-1] = '\0'; 
        data = dataBuffer;
    }
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, char *> dataMap)
{
    char * data = dataMap[2];
    printLine(data);
<START>
    delete [] data;
<END>
}
} 

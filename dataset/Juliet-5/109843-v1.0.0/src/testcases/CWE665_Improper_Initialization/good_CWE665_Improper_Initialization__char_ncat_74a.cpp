using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, char *> dataMap)
{
    char * data = dataMap[2];
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
void FUN0(map<int, char *> dataMap);
void FUN2()
{
    char * data;
    map<int, char *> dataMap;
    char dataBuffer[100];
    data = dataBuffer;
    data[0] = '\0'; 
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
} 

using namespace std;
namespace NAMESPACE0
{
void FUN0(list<char *> dataList)
{
    char * data = dataList.back();
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
void FUN0(list<char *> dataList);
void FUN2()
{
    char * data;
    list<char *> dataList;
    char dataBuffer[100];
    data = dataBuffer;
    data[0] = '\0'; 
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 

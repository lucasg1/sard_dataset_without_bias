using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, char *> dataMap);
void FUN1()
{
    char * data;
    map<int, char *> dataMap;
    data = (char *)malloc(100*sizeof(char));
    data[0] = '\0';
    strcpy(data, BAD_SOURCE_FIXED_STRING);
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
<START>
    for (; *data != '\0'; data++)
<END>
    {
        if (*data == SEARCH_CHAR)
        {
            printLine("We have a match!");
            break;
        }
    }
    free(data);
}
} 

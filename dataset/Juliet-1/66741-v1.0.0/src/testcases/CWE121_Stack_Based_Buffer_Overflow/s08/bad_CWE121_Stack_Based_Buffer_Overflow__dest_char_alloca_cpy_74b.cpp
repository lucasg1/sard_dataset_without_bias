using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, char *> dataMap);
void FUN1()
{
    char * data;
    map<int, char *> dataMap;
    char * VAR1 = (char *)ALLOCA(50*sizeof(char));
    char * VAR2 = (char *)ALLOCA(100*sizeof(char));
    data = VAR1;
    data[0] = '\0'; 
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
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
<START>
        strcpy(data, source);
<END>
        printLine(data);
    }
}
} 

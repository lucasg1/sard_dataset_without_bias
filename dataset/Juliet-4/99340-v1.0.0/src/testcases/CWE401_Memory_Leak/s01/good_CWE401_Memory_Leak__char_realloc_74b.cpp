using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, char *> dataMap);
void FUN1()
{
    char * data;
    map<int, char *> dataMap;
    data = NULL;
    data = (char *)ALLOCA(100*sizeof(char));
    strcpy(data, "A String");
    printLine(data);
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
void FUN2(map<int, char *> dataMap);
void FUN3()
{
    char * data;
    map<int, char *> dataMap;
    data = NULL;
    data = (char *)realloc(data, 100*sizeof(char));
    strcpy(data, "A String");
    printLine(data);
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN2(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, char *> dataMap)
{
    char * data = dataMap[2];
    ; 
}
void FUN2(map<int, char *> dataMap)
{
    char * data = dataMap[2];
    free(data);
}
} 

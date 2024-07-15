using namespace std;
namespace NAMESPACE0
{
void FUN0(list<char *> dataList);
void FUN1()
{
    char * data;
    list<char *> dataList;
    data = NULL;
    data = (char *)ALLOCA(100*sizeof(char));
    strcpy(data, "A String");
    printLine(data);
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
void FUN2(list<char *> dataList);
void FUN3()
{
    char * data;
    list<char *> dataList;
    data = NULL;
    data = (char *)realloc(data, 100*sizeof(char));
    strcpy(data, "A String");
    printLine(data);
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN2(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<char *> dataList)
{
    char * data = dataList.back();
    ; 
}
void FUN2(list<char *> dataList)
{
    char * data = dataList.back();
    free(data);
}
} 

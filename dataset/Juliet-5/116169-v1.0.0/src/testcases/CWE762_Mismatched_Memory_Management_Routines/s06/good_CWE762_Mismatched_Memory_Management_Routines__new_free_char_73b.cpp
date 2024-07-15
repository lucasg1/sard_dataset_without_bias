using namespace std;
namespace NAMESPACE0
{
void FUN0(list<char *> dataList);
void FUN1()
{
    char * data;
    list<char *> dataList;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
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
    data = new char;
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
    free(data);
}
void FUN2(list<char *> dataList)
{
    char * data = dataList.back();
    delete data;
}
} 

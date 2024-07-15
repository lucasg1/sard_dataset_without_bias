using namespace std;
namespace NAMESPACE0
{
void FUN0(list<FILE *> dataList);
void FUN1()
{
    FILE * data;
    list<FILE *> dataList;
    data = NULL; 
    data = fopen("GoodSource_fopen.txt", "w+");
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
void FUN2(list<FILE *> dataList);
void FUN3()
{
    FILE * data;
    list<FILE *> dataList;
    data = NULL; 
    data = freopen("BadSource_freopen.txt","w+",stdin);
    fclose(data);
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN2(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<FILE *> dataList)
{
    FILE * data = dataList.back();
    fclose(data);
}
void FUN2(list<FILE *> dataList)
{
    FILE * data = dataList.back();
    ; 
}
} 

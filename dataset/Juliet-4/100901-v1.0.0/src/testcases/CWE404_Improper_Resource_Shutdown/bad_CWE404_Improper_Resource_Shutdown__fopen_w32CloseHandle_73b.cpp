using namespace std;
namespace NAMESPACE0
{
void FUN0(list<FILE *> dataList);
void FUN1()
{
    FILE * data;
    list<FILE *> dataList;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<FILE *> dataList)
{
    FILE * data = dataList.back();
    if (data != NULL)
    {
<START>
        CloseHandle((HANDLE)data);
<END>
    }
}
} 

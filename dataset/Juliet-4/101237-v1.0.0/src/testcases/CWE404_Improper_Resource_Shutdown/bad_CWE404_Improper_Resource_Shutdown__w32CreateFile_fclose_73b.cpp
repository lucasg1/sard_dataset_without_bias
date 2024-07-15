using namespace std;
namespace NAMESPACE0
{
void FUN0(list<HANDLE> dataList);
void FUN1()
{
    HANDLE data;
    list<HANDLE> dataList;
    data = INVALID_HANDLE_VALUE;
    data = CreateFile("BadSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<HANDLE> dataList)
{
    HANDLE data = dataList.back();
    if (data != INVALID_HANDLE_VALUE)
    {
<START>
        fclose((FILE *)data);
<END>
    }
}
} 

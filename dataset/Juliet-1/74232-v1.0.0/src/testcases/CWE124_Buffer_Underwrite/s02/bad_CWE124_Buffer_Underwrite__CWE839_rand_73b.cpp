using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int> dataList);
void FUN1()
{
    int data;
    list<int> dataList;
    data = -1;
    data = RAND32();
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<int> dataList)
{
    int data = dataList.back();
    {
        int i;
        int buffer[10] = { 0 };
        if (data < 10)
        {
<START>
            buffer[data] = 1;
<END>
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is negative.");
        }
    }
}
} 

using namespace std;
namespace NAMESPACE0
{
void FUN0(list<unsigned int> dataList);
void FUN1()
{
    unsigned int data;
    list<unsigned int> dataList;
    data = 0;
    fscanf (stdin, "%u", &data);
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<unsigned int> dataList)
{
    unsigned int data = dataList.back();
    {
<START>
        unsigned int result = data * data;
<END>
        printUnsignedLine(result);
    }
}
} 

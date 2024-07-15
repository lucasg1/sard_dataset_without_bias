using namespace std;
namespace NAMESPACE0
{
void FUN0(list<float> dataList);
void FUN1()
{
    float data;
    list<float> dataList;
    data = 0.0F;
    fscanf (stdin, "%f", &data);
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<float> dataList)
{
    float data = dataList.back();
    {
<START>
        int result = (int)(100.0 / data);
<END>
        printIntLine(result);
    }
}
} 

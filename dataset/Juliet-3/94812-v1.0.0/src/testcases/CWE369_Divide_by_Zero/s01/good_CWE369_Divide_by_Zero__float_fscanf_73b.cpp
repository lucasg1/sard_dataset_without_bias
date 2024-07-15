using namespace std;
namespace NAMESPACE0
{
void FUN0(list<float> dataList);
void FUN1()
{
    float data;
    list<float> dataList;
    data = 0.0F;
    data = 2.0F;
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
void FUN2(list<float> dataList);
void FUN3()
{
    float data;
    list<float> dataList;
    data = 0.0F;
    fscanf (stdin, "%f", &data);
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN2(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<float> dataList)
{
    float data = dataList.back();
    {
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
}
void FUN2(list<float> dataList)
{
    float data = dataList.back();
    if(fabs(data) > 0.000001)
    {
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
    else
    {
        printLine("This would result in a divide by zero");
    }
}
} 

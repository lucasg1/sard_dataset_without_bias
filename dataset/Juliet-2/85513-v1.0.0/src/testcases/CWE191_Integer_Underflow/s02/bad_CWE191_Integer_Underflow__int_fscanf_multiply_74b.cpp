using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int> dataMap);
void FUN1()
{
    int data;
    map<int, int> dataMap;
    data = 0;
    fscanf(stdin, "%d", &data);
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, int> dataMap)
{
    int data = dataMap[2];
    if(data < 0) 
    {
<START>
        int result = data * 2;
<END>
        printIntLine(result);
    }
}
} 

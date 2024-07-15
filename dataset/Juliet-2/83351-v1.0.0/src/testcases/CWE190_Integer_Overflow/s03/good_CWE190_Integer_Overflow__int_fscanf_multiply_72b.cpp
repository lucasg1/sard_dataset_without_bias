using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int> dataVector);
void FUN1()
{
    int data;
    vector<int> dataVector;
    data = 0;
    data = 2;
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
void FUN2(vector<int> dataVector);
void FUN3()
{
    int data;
    vector<int> dataVector;
    data = 0;
    fscanf(stdin, "%d", &data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN2(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<int> dataVector)
{
    int data = dataVector[2];
    if(data > 0) 
    {
        int result = data * 2;
        printIntLine(result);
    }
}
void FUN2(vector<int> dataVector)
{
    int data = dataVector[2];
    if(data > 0) 
    {
        if (data < (INT_MAX/2))
        {
            int result = data * 2;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
} 

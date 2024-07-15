using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<short> dataVector);
void FUN1()
{
    short data;
    vector<short> dataVector;
    data = 0;
    data = 2;
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
void FUN2(vector<short> dataVector);
void FUN3()
{
    short data;
    vector<short> dataVector;
    data = 0;
    fscanf (stdin, "%hd", &data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN2(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<short> dataVector)
{
    short data = dataVector[2];
    {
        short result = data + 1;
        printIntLine(result);
    }
}
void FUN2(vector<short> dataVector)
{
    short data = dataVector[2];
    if (data < SHRT_MAX)
    {
        short result = data + 1;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
} 

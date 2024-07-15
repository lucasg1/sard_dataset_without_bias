using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<float> dataVector);
void FUN1()
{
    float data;
    vector<float> dataVector;
    data = 0.0F;
    data = 2.0F;
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
void FUN2(vector<float> dataVector);
void FUN3()
{
    float data;
    vector<float> dataVector;
    data = 0.0F;
    fscanf (stdin, "%f", &data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN2(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<float> dataVector)
{
    float data = dataVector[2];
    {
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
}
void FUN2(vector<float> dataVector)
{
    float data = dataVector[2];
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

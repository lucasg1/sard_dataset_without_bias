using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<float> dataVector);
void FUN1()
{
    float data;
    vector<float> dataVector;
    data = 0.0F;
    {
        char inputBuffer[CHAR_ARRAY_SIZE];
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            data = (float)atof(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<float> dataVector)
{
    float data = dataVector[2];
    {
<START>
        int result = (int)(100.0 / data);
<END>
        printIntLine(result);
    }
}
} 

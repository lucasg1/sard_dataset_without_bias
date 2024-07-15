using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<size_t> dataVector);
void FUN1()
{
    size_t data;
    vector<size_t> dataVector;
    data = 0;
    data = 20;
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN0(dataVector);
}
void FUN2(vector<size_t> dataVector);
void FUN3()
{
    size_t data;
    vector<size_t> dataVector;
    data = 0;
    data = rand();
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    dataVector.insert(dataVector.end(), 1, data);
    FUN2(dataVector);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(vector<size_t> dataVector)
{
    size_t data = dataVector[2];
    {
        char * myString;
        if (data > strlen(HELLO_STRING))
        {
            myString = (char *)malloc(data*sizeof(char));
            if (myString == NULL) {exit(-1);}
            strcpy(myString, HELLO_STRING);
            printLine(myString);
            free(myString);
        }
        else
        {
            printLine("Input is less than the length of the source string");
        }
    }
}
void FUN2(vector<size_t> dataVector)
{
    size_t data = dataVector[2];
    {
        char * myString;
        if (data > strlen(HELLO_STRING) && data < 100)
        {
            myString = (char *)malloc(data*sizeof(char));
            if (myString == NULL) {exit(-1);}
            strcpy(myString, HELLO_STRING);
            printLine(myString);
            free(myString);
        }
        else
        {
            printLine("Input is less than the length of the source string or too large");
        }
    }
}
} 

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
    fscanf(stdin, "%zu", &data);
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
        wchar_t * myString;
        if (data > wcslen(HELLO_STRING))
        {
            myString = (wchar_t *)malloc(data*sizeof(wchar_t));
            if (myString == NULL) {exit(-1);}
            wcscpy(myString, HELLO_STRING);
            printWLine(myString);
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
        wchar_t * myString;
        if (data > wcslen(HELLO_STRING) && data < 100)
        {
            myString = (wchar_t *)malloc(data*sizeof(wchar_t));
            if (myString == NULL) {exit(-1);}
            wcscpy(myString, HELLO_STRING);
            printWLine(myString);
            free(myString);
        }
        else
        {
            printLine("Input is less than the length of the source string or too large");
        }
    }
}
} 

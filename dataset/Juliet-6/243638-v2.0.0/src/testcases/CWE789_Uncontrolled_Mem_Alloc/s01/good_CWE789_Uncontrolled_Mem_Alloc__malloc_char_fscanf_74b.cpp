using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, size_t> dataMap);
void FUN1()
{
    size_t data;
    map<int, size_t> dataMap;
    data = 0;
    data = 20;
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN0(dataMap);
}
void FUN2(map<int, size_t> dataMap);
void FUN3()
{
    size_t data;
    map<int, size_t> dataMap;
    data = 0;
    fscanf(stdin, "%zu", &data);
    dataMap[0] = data;
    dataMap[1] = data;
    dataMap[2] = data;
    FUN2(dataMap);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(map<int, size_t> dataMap)
{
    size_t data = dataMap[2];
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
void FUN2(map<int, size_t> dataMap)
{
    size_t data = dataMap[2];
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

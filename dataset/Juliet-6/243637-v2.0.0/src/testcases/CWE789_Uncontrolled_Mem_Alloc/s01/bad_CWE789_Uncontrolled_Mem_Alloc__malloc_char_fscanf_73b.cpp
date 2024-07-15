using namespace std;
namespace NAMESPACE0
{
void FUN0(list<size_t> dataList);
void FUN1()
{
    size_t data;
    list<size_t> dataList;
    data = 0;
    fscanf(stdin, "%zu", &data);
    dataList.push_back(data);
    dataList.push_back(data);
    dataList.push_back(data);
    FUN0(dataList);
}
} 
using namespace std;
namespace NAMESPACE0
{
void FUN0(list<size_t> dataList)
{
    size_t data = dataList.back();
    {
        char * myString;
        if (data > strlen(HELLO_STRING))
        {
<START>
            myString = (char *)malloc(data*sizeof(char));
<END>
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
} 

namespace NAMESPACE0
{
void FUN0(size_t dataArray[]);
void FUN1()
{
    size_t data;
    size_t dataArray[5];
    data = 0;
    data = rand();
    dataArray[2] = data;
    FUN0(dataArray);
}
} 
namespace NAMESPACE0
{
void FUN0(size_t dataArray[])
{
    size_t data = dataArray[2];
    {
        char * myString;
        if (data > strlen(HELLO_STRING))
        {
<START>
            myString = new char[data];
<END>
            strcpy(myString, HELLO_STRING);
            printLine(myString);
            delete [] myString;
        }
        else
        {
            printLine("Input is less than the length of the source string");
        }
    }
}
} 

namespace NAMESPACE0
{
void FUN0(size_t * dataPtr);
void FUN1()
{
    size_t data;
    data = 0;
    fscanf(stdin, "%ud", &data);
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(size_t * dataPtr)
{
    size_t data = *dataPtr;
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

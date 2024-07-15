namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr);
void FUN1()
{
    size_t data;
    data = 0;
    data = 20;
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
{
    size_t data;
    data = 0;
    fscanf(stdin, "%ud", &data);
    FUN2(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr)
{
    size_t * dataPtr = (size_t *)dataVoidPtr;
    size_t data = (*dataPtr);
    {
        char * myString;
        if (data > strlen(HELLO_STRING))
        {
            myString = new char[data];
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
void FUN2(void * dataVoidPtr)
{
    size_t * dataPtr = (size_t *)dataVoidPtr;
    size_t data = (*dataPtr);
    {
        char * myString;
        if (data > strlen(HELLO_STRING) && data < 100)
        {
            myString = new char[data];
            strcpy(myString, HELLO_STRING);
            printLine(myString);
            delete [] myString;
        }
        else
        {
            printLine("Input is less than the length of the source string or too large");
        }
    }
}
} 

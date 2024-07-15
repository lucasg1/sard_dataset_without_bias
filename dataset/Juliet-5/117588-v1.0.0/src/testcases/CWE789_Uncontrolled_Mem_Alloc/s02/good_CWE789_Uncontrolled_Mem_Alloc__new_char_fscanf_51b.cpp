namespace NAMESPACE0
{
void FUN0(size_t data);
void FUN1(size_t data);
void FUN2()
{
    size_t data;
    data = 0;
    data = 20;
    FUN0(data);
}
void FUN3()
{
    size_t data;
    data = 0;
    fscanf(stdin, "%ud", &data);
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN0(size_t data)
{
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
void FUN1(size_t data)
{
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

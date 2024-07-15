namespace NAMESPACE0
{
void FUN0(size_t data);
void FUN1(size_t data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN1(size_t data);
void FUN3(size_t data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN3(size_t data);
void FUN5()
{
    size_t data;
    data = 0;
    fscanf(stdin, "%ud", &data);
    FUN3(data);
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

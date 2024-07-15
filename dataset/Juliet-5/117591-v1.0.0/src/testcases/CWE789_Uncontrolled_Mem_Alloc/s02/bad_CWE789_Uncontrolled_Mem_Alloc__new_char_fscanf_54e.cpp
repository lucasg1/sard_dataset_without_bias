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
void FUN4(size_t data);
void FUN0(size_t data)
{
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN6(size_t data);
void FUN4(size_t data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN6(size_t data)
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

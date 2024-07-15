namespace NAMESPACE0
{
size_t VAR1;
size_t VAR2;
size_t VAR3;
void FUN0();
void FUN1()
{
    size_t data;
    data = 0;
    data = rand();
    VAR1 = data;
    FUN0();
}
} 
namespace NAMESPACE0
{
extern size_t VAR1;
extern size_t VAR2;
extern size_t VAR3;
void FUN0()
{
    size_t data = VAR1;
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

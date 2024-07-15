namespace NAMESPACE0
{
int VAR1 = 0;
void FUN0(size_t data);
void FUN1()
{
    size_t data;
    data = 0;
    data = rand();
    VAR1 = 1; 
    FUN0(data);
}
} 
namespace NAMESPACE0
{
extern int VAR1;
void FUN0(size_t data)
{
    if(VAR1)
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
} 

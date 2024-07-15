static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    size_t data;
    data = 0;
    if(staticFive==5)
    {
        fscanf(stdin, "%zu", &data);
    }
    if(staticFive==5)
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

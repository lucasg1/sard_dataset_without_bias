namespace NAMESPACE0
{
void FUN0()
{
    size_t data;
    data = 0;
    data = rand();
    {
        size_t dataCopy = data;
        size_t data = dataCopy;
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

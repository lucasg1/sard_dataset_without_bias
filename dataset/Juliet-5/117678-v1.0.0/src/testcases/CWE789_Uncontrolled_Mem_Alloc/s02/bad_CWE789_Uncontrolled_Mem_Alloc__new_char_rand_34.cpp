namespace NAMESPACE0
{
typedef union
{
    size_t unionFirst;
    size_t unionSecond;
} unionType;
void FUN0()
{
    size_t data;
    unionType myUnion;
    data = 0;
    data = rand();
    myUnion.unionFirst = data;
    {
        size_t data = myUnion.unionSecond;
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

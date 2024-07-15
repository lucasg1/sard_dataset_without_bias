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
    data = 20;
    myUnion.unionFirst = data;
    {
        size_t data = myUnion.unionSecond;
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
}
void FUN1()
{
    size_t data;
    unionType myUnion;
    data = 0;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            data = strtoul(inputBuffer, NULL, 0);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    myUnion.unionFirst = data;
    {
        size_t data = myUnion.unionSecond;
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
} 

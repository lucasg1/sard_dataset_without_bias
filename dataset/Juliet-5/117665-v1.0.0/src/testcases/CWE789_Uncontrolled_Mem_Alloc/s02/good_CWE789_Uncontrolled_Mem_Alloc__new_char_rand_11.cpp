namespace NAMESPACE0
{
void FUN0()
{
    size_t data;
    data = 0;
    if(globalReturnsTrue())
    {
        data = rand();
    }
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
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
void FUN1()
{
    size_t data;
    data = 0;
    if(globalReturnsTrue())
    {
        data = rand();
    }
    if(globalReturnsTrue())
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
void FUN2()
{
    size_t data;
    data = 0;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 20;
    }
    if(globalReturnsTrue())
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
}
void FUN3()
{
    size_t data;
    data = 0;
    if(globalReturnsTrue())
    {
        data = 20;
    }
    if(globalReturnsTrue())
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
}
} 

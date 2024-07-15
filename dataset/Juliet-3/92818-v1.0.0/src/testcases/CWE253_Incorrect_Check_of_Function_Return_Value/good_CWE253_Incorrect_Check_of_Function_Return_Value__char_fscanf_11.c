void FUN0()
{
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            if (fscanf(stdin, "%99s\0", data) == EOF)
            {
                printLine("fscanf failed!");
            }
        }
    }
}
void FUN1()
{
    if(globalReturnsTrue())
    {
        {
            char dataBuffer[100] = "";
            char * data = dataBuffer;
            if (fscanf(stdin, "%99s\0", data) == EOF)
            {
                printLine("fscanf failed!");
            }
        }
    }
}

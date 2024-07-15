void FUN0()
{
    char * data;
    data = "Good";
    {
        char * dataCopy = data;
        char * data = dataCopy;
        printHexCharLine(data[0]);
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    {
        char * dataCopy = data;
        char * data = dataCopy;
        if (data != NULL)
        {
            printHexCharLine(data[0]);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}

void FUN0()
{
    char * data;
    data = "Good";
    printHexCharLine(data[0]);
}
void FUN1()
{
    char * data;
    data = NULL;
    if (data != NULL)
    {
        printHexCharLine(data[0]);
    }
    else
    {
        printLine("data is NULL");
    }
}

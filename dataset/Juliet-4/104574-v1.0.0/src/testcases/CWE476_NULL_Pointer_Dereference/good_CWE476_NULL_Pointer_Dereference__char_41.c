void FUN0(char * data)
{
    printHexCharLine(data[0]);
}
void FUN1()
{
    char * data;
    data = "Good";
    FUN0(data);
}
void FUN2(char * data)
{
    if (data != NULL)
    {
        printHexCharLine(data[0]);
    }
    else
    {
        printLine("data is NULL");
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    FUN2(data);
}

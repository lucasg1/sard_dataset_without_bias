void FUN0()
{
    char * data;
    goto source;
source:
    data = NULL;
    goto sink;
sink:
    if (data != NULL)
    {
        printHexCharLine(data[0]);
    }
    else
    {
        printLine("data is NULL");
    }
}
void FUN1()
{
    char * data;
    goto source;
source:
    data = "Good";
    goto sink;
sink:
    printHexCharLine(data[0]);
}

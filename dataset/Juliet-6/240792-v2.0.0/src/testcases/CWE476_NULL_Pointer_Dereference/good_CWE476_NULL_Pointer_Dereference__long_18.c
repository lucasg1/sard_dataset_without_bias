void FUN0()
{
    long * data;
    goto source;
source:
    data = NULL;
    goto sink;
sink:
    if (data != NULL)
    {
        printLongLine(*data);
    }
    else
    {
        printLine("data is NULL");
    }
}
void FUN1()
{
    long * data;
    long tmpData = 5L;
    goto source;
source:
    {
        data = &tmpData;
    }
    goto sink;
sink:
    printLongLine(*data);
}

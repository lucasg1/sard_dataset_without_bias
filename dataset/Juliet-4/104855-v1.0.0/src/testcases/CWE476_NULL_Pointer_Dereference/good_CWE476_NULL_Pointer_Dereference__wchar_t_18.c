void FUN0()
{
    wchar_t * data;
    goto source;
source:
    data = NULL;
    goto sink;
sink:
    if (data != NULL)
    {
        printWcharLine(data[0]);
    }
    else
    {
        printLine("data is NULL");
    }
}
void FUN1()
{
    wchar_t * data;
    goto source;
source:
    data = L"Good";
    goto sink;
sink:
    printWcharLine(data[0]);
}

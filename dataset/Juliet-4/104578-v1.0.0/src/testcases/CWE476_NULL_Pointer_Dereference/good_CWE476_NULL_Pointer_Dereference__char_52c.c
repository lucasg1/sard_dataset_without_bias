void FUN0(char * data);
void FUN1()
{
    char * data;
    data = "Good";
    FUN0(data);
}
void FUN2(char * data);
void FUN3()
{
    char * data;
    data = NULL;
    FUN2(data);
}
void FUN5(char * data);
void FUN0(char * data)
{
    FUN5(data);
}
void FUN7(char * data);
void FUN2(char * data)
{
    FUN7(data);
}
void FUN5(char * data)
{
    printHexCharLine(data[0]);
}
void FUN7(char * data)
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

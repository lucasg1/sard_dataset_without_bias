void FUN0(char * data);
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    data = "Good";
    funcPtr(data);
}
void FUN2(char * data);
void FUN3()
{
    char * data;
    void (*funcPtr) (char *) = FUN2;
    data = NULL;
    funcPtr(data);
}
void FUN0(char * data)
{
    printHexCharLine(data[0]);
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

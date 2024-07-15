void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN2(char * data);
void FUN3(char * data)
{
    FUN2(data);
}
void FUN1(char * data);
void FUN5(char * data)
{
    FUN1(data);
}
void FUN3(char * data);
void FUN7(char * data)
{
    FUN3(data);
}
void FUN5(char * data);
void FUN9(char * data)
{
    FUN5(data);
}
void FUN7(char * data);
void FUN11(char * data)
{
    FUN7(data);
}
void FUN9(char * data);
void FUN13()
{
    char * data;
    data = "Good";
    FUN9(data);
}
void FUN11(char * data);
void FUN15()
{
    char * data;
    data = NULL;
    FUN11(data);
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

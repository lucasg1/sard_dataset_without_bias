void FUN0(char * * data);
void FUN1()
{
    char * data;
    data = "string";
    FUN0(&data);
}
void FUN2(char * * data);
void FUN3()
{
    char * data;
    ; 
    FUN2(&data);
}
void FUN0(char * * dataPtr)
{
    char * data = *dataPtr;
    printLine(data);
}
void FUN2(char * * dataPtr)
{
    *dataPtr = "string";
    char * data = *dataPtr;
    printLine(data);
}

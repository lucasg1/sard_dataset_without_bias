void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN2(char * data);
void FUN0(char * data)
{
    FUN2(data);
}
void FUN4(char * data);
void FUN5()
{
    char * data;
    data = NULL; 
    data = (char *)malloc(20*sizeof(char));
    FUN4(data);
}
void FUN1(char * data);
void FUN4(char * data)
{
    FUN1(data);
}
void FUN2(char * data)
{
    if (data != NULL)
    {
        strcpy(data, "Initialize");
        printLine(data);
        free(data);
    }
}

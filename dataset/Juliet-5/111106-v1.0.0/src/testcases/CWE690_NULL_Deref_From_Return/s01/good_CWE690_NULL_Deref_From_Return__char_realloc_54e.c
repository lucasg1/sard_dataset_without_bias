void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN2(char * data);
void FUN3()
{
    char * data;
    data = NULL; 
    data = (char *)realloc(data, 20*sizeof(char));
    FUN2(data);
}
void FUN1(char * data);
void FUN6(char * data)
{
    FUN1(data);
}
void FUN6(char * data);
void FUN2(char * data)
{
    FUN6(data);
}
void FUN0(char * data)
{
    if (data != NULL)
    {
        strcpy(data, "Initialize");
        printLine(data);
        free(data);
    }
}

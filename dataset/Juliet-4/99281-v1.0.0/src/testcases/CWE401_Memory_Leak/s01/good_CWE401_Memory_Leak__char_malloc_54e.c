void FUN0(char * data);
void FUN1()
{
    char * data;
    data = NULL;
    data = (char *)ALLOCA(100*sizeof(char));
    strcpy(data, "A String");
    printLine(data);
    FUN0(data);
}
void FUN2(char * data);
void FUN3()
{
    char * data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    strcpy(data, "A String");
    printLine(data);
    FUN2(data);
}
void FUN5(char * data);
void FUN6(char * data)
{
    FUN5(data);
}
void FUN7(char * data);
void FUN8(char * data)
{
    FUN7(data);
}
void FUN6(char * data);
void FUN0(char * data)
{
    FUN6(data);
}
void FUN8(char * data);
void FUN2(char * data)
{
    FUN8(data);
}
void FUN13(char * data);
void FUN5(char * data)
{
    FUN13(data);
}
void FUN15(char * data);
void FUN7(char * data)
{
    FUN15(data);
}
void FUN13(char * data)
{
    ; 
}
void FUN15(char * data)
{
    free(data);
}

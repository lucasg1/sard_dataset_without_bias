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
void FUN4(char * data);
void FUN5()
{
    char * data;
    data = NULL;
    data = (char *)ALLOCA(100*sizeof(char));
    strcpy(data, "A String");
    printLine(data);
    FUN4(data);
}
void FUN6(char * data);
void FUN7()
{
    char * data;
    data = NULL;
    data = (char *)realloc(data, 100*sizeof(char));
    strcpy(data, "A String");
    printLine(data);
    FUN6(data);
}
void FUN1(char * data);
void FUN10(char * data)
{
    FUN1(data);
}
void FUN3(char * data);
void FUN12(char * data)
{
    FUN3(data);
}
void FUN10(char * data);
void FUN4(char * data)
{
    FUN10(data);
}
void FUN12(char * data);
void FUN6(char * data)
{
    FUN12(data);
}
void FUN0(char * data)
{
    ; 
}
void FUN2(char * data)
{
    free(data);
}

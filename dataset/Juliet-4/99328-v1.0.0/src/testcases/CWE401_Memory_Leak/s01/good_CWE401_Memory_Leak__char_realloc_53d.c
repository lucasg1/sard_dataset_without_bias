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
void FUN5()
{
    char * data;
    data = NULL;
    data = (char *)ALLOCA(100*sizeof(char));
    strcpy(data, "A String");
    printLine(data);
    FUN1(data);
}
void FUN3(char * data);
void FUN7()
{
    char * data;
    data = NULL;
    data = (char *)realloc(data, 100*sizeof(char));
    strcpy(data, "A String");
    printLine(data);
    FUN3(data);
}
void FUN9(char * data);
void FUN0(char * data)
{
    FUN9(data);
}
void FUN11(char * data);
void FUN2(char * data)
{
    FUN11(data);
}
void FUN9(char * data)
{
    ; 
}
void FUN11(char * data)
{
    free(data);
}

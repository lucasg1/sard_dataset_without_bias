int VAR0 = 0;
int VAR1 = 0;
int VAR2 = 0;
void FUN0(char * data);
void FUN1()
{
    char * data;
    data = NULL;
    {
        char myString[] = "myString";
        data = strdup(myString);
        printLine(data);
    }
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(char * data);
void FUN3()
{
    char * data;
    data = NULL;
    {
        char myString[] = "myString";
        data = strdup(myString);
        printLine(data);
    }
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(char * data);
void FUN5()
{
    char * data;
    data = NULL;
    data = (char *)ALLOCA(100*sizeof(char));
    strcpy(data, "a string");
    printLine(data);
    VAR2 = 1; 
    FUN4(data);
}
extern int VAR0;
extern int VAR1;
extern int VAR2;
void FUN0(char * data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        free(data);
    }
}
void FUN2(char * data)
{
    if(VAR1)
    {
        free(data);
    }
}
void FUN4(char * data)
{
    if(VAR2)
    {
        ; 
    }
}

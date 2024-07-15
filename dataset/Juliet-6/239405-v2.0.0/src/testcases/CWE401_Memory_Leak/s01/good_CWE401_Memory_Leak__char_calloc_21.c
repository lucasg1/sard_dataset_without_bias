static int VAR0 = 0;
static int VAR1 = 0;
static int VAR2 = 0;
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
void FUN1()
{
    char * data;
    data = NULL;
    data = (char *)calloc(100, sizeof(char));
    if (data == NULL) {exit(-1);}
    strcpy(data, "A String");
    printLine(data);
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(char * data)
{
    if(VAR1)
    {
        free(data);
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    data = (char *)calloc(100, sizeof(char));
    if (data == NULL) {exit(-1);}
    strcpy(data, "A String");
    printLine(data);
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(char * data)
{
    if(VAR2)
    {
        ; 
    }
}
void FUN5()
{
    char * data;
    data = NULL;
    data = (char *)ALLOCA(100*sizeof(char));
    strcpy(data, "A String");
    printLine(data);
    VAR2 = 1; 
    FUN4(data);
}

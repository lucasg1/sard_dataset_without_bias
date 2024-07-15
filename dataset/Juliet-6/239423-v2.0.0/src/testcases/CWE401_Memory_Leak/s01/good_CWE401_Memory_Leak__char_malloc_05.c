static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    char * data;
    data = NULL;
    if(staticTrue)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        strcpy(data, "A String");
        printLine(data);
    }
    if(staticFalse)
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
    if(staticTrue)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        strcpy(data, "A String");
        printLine(data);
    }
    if(staticTrue)
    {
        free(data);
    }
}
void FUN2()
{
    char * data;
    data = NULL;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (char *)ALLOCA(100*sizeof(char));
        strcpy(data, "A String");
        printLine(data);
    }
    if(staticTrue)
    {
        ; 
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(staticTrue)
    {
        data = (char *)ALLOCA(100*sizeof(char));
        strcpy(data, "A String");
        printLine(data);
    }
    if(staticTrue)
    {
        ; 
    }
}

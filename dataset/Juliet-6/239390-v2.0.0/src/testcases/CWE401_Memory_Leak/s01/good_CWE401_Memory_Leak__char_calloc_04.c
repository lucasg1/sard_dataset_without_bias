static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = (char *)calloc(100, sizeof(char));
        if (data == NULL) {exit(-1);}
        strcpy(data, "A String");
        printLine(data);
    }
    if(STATIC_CONST_FALSE)
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
    if(STATIC_CONST_TRUE)
    {
        data = (char *)calloc(100, sizeof(char));
        if (data == NULL) {exit(-1);}
        strcpy(data, "A String");
        printLine(data);
    }
    if(STATIC_CONST_TRUE)
    {
        free(data);
    }
}
void FUN2()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (char *)ALLOCA(100*sizeof(char));
        strcpy(data, "A String");
        printLine(data);
    }
    if(STATIC_CONST_TRUE)
    {
        ; 
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = (char *)ALLOCA(100*sizeof(char));
        strcpy(data, "A String");
        printLine(data);
    }
    if(STATIC_CONST_TRUE)
    {
        ; 
    }
}

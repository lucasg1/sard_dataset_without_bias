void FUN0()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = (char *)realloc(data, 100*sizeof(char));
        if (data == NULL) {exit(-1);}
        strcpy(data, "A String");
        printLine(data);
    }
    if(GLOBAL_CONST_FIVE!=5)
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
    if(GLOBAL_CONST_FIVE==5)
    {
        data = (char *)realloc(data, 100*sizeof(char));
        if (data == NULL) {exit(-1);}
        strcpy(data, "A String");
        printLine(data);
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        free(data);
    }
}
void FUN2()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (char *)ALLOCA(100*sizeof(char));
        strcpy(data, "A String");
        printLine(data);
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        ; 
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = (char *)ALLOCA(100*sizeof(char));
        strcpy(data, "A String");
        printLine(data);
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        ; 
    }
}

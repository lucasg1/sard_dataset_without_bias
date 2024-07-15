void FUN0()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        free(data);
    }
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ; 
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        free(data);
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        ; 
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
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        free(data);
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        free(data);
    }
}

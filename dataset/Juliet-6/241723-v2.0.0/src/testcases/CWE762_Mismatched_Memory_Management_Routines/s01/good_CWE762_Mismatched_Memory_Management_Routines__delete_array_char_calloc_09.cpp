namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = (char *)calloc(100, sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        data = (char *)calloc(100, sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    if(GLOBAL_CONST_TRUE)
    {
        free(data);
    }
}
void FUN2()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char[100];
    }
    if(GLOBAL_CONST_TRUE)
    {
        delete [] data;
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new char[100];
    }
    if(GLOBAL_CONST_TRUE)
    {
        delete [] data;
    }
}
} 

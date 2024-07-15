namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (char *)calloc(100, sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    if(globalReturnsFalse())
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
    if(globalReturnsTrue())
    {
        data = (char *)calloc(100, sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    if(globalReturnsTrue())
    {
        free(data);
    }
}
void FUN2()
{
    char * data;
    data = NULL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char;
    }
    if(globalReturnsTrue())
    {
        delete data;
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new char;
    }
    if(globalReturnsTrue())
    {
        delete data;
    }
}
} 

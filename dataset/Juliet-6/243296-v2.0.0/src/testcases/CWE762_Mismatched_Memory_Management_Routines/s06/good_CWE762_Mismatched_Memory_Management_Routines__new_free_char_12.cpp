namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = new char;
    }
    else
    {
        data = new char;
    }
    if(globalReturnsTrueOrFalse())
    {
        delete data;
    }
    else
    {
        delete data;
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    else
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    if(globalReturnsTrueOrFalse())
    {
        free(data);
    }
    else
    {
        free(data);
    }
}
} 

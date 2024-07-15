namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(globalTrue)
    {
        data = new char[100];
    }
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete [] data;
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    if(globalTrue)
    {
        data = new char[100];
    }
    if(globalTrue)
    {
        delete [] data;
    }
}
void FUN2()
{
    char * data;
    data = NULL;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    if(globalTrue)
    {
        free(data);
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(globalTrue)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    if(globalTrue)
    {
        free(data);
    }
}
} 

namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    if(1)
    {
        data = new char[100];
    }
    if(0)
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
    if(1)
    {
        data = new char[100];
    }
    if(1)
    {
        delete [] data;
    }
}
void FUN2()
{
    char * data;
    data = NULL;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    if(1)
    {
        free(data);
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(1)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    if(1)
    {
        free(data);
    }
}
} 

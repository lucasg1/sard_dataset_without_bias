namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new TwoIntsClass[100];
    }
    if(GLOBAL_CONST_FALSE)
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
    TwoIntsClass * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new TwoIntsClass[100];
    }
    if(GLOBAL_CONST_TRUE)
    {
        delete [] data;
    }
}
void FUN2()
{
    TwoIntsClass * data;
    data = NULL;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
    }
    if(GLOBAL_CONST_TRUE)
    {
        free(data);
    }
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
    }
    if(GLOBAL_CONST_TRUE)
    {
        free(data);
    }
}
} 

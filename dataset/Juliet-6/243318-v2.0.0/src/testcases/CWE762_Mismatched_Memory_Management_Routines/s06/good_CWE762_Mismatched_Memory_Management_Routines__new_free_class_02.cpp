namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(1)
    {
        data = new TwoIntsClass;
    }
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete data;
    }
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    if(1)
    {
        data = new TwoIntsClass;
    }
    if(1)
    {
        delete data;
    }
}
void FUN2()
{
    TwoIntsClass * data;
    data = NULL;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
    }
    if(1)
    {
        free(data);
    }
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    if(1)
    {
        data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
    }
    if(1)
    {
        free(data);
    }
}
} 

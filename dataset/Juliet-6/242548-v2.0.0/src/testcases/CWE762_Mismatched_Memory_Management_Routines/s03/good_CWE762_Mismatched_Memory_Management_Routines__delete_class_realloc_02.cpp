namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(1)
    {
        data = NULL;
        data = (TwoIntsClass *)realloc(data, 100*sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
    }
    if(0)
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
    TwoIntsClass * data;
    data = NULL;
    if(1)
    {
        data = NULL;
        data = (TwoIntsClass *)realloc(data, 100*sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
    }
    if(1)
    {
        free(data);
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
        data = new TwoIntsClass;
    }
    if(1)
    {
        delete data;
    }
}
void FUN3()
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
} 

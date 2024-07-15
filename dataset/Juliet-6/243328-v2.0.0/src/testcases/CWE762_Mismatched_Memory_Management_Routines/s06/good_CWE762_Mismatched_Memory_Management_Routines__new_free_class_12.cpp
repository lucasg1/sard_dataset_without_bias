namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = new TwoIntsClass;
    }
    else
    {
        data = new TwoIntsClass;
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
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
    }
    else
    {
        data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
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

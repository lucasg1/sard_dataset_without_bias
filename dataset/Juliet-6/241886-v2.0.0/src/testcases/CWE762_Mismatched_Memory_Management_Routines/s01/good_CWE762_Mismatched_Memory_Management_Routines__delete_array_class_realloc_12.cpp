namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = NULL;
        data = (TwoIntsClass *)realloc(data, 100*sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
    }
    else
    {
        data = NULL;
        data = (TwoIntsClass *)realloc(data, 100*sizeof(TwoIntsClass));
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
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = new TwoIntsClass[100];
    }
    else
    {
        data = new TwoIntsClass[100];
    }
    if(globalReturnsTrueOrFalse())
    {
        delete [] data;
    }
    else
    {
        delete [] data;
    }
}
} 

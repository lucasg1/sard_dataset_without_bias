namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalTrue)
    {
        data = (TwoIntsClass *)calloc(100, sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
    }
    if(globalFalse)
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
    if(globalTrue)
    {
        data = (TwoIntsClass *)calloc(100, sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
    }
    if(globalTrue)
    {
        free(data);
    }
}
void FUN2()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new TwoIntsClass[100];
    }
    if(globalTrue)
    {
        delete [] data;
    }
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalTrue)
    {
        data = new TwoIntsClass[100];
    }
    if(globalTrue)
    {
        delete [] data;
    }
}
} 

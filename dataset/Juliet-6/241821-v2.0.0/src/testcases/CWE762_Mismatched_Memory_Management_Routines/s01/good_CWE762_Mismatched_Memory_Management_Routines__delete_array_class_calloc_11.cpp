namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (TwoIntsClass *)calloc(100, sizeof(TwoIntsClass));
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
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (TwoIntsClass *)calloc(100, sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
    }
    if(globalReturnsTrue())
    {
        free(data);
    }
}
void FUN2()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new TwoIntsClass[100];
    }
    if(globalReturnsTrue())
    {
        delete [] data;
    }
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new TwoIntsClass[100];
    }
    if(globalReturnsTrue())
    {
        delete [] data;
    }
}
} 

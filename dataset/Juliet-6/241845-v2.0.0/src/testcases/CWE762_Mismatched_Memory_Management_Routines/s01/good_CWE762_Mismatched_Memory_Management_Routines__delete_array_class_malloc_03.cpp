namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(5==5)
    {
        data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
    }
    if(5!=5)
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
    if(5==5)
    {
        data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
    }
    if(5==5)
    {
        free(data);
    }
}
void FUN2()
{
    TwoIntsClass * data;
    data = NULL;
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new TwoIntsClass[100];
    }
    if(5==5)
    {
        delete [] data;
    }
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    if(5==5)
    {
        data = new TwoIntsClass[100];
    }
    if(5==5)
    {
        delete [] data;
    }
}
} 

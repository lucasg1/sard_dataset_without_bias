namespace NAMESPACE0
{
static int VAR1 = 0;
static int VAR2 = 0;
static int VAR3 = 0;
void FUN0(TwoIntsClass * data)
{
    if(VAR1)
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
    data = new TwoIntsClass;
    VAR1 = 0; 
    FUN0(data);
}
void FUN2(TwoIntsClass * data)
{
    if(VAR2)
    {
        delete data;
    }
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass;
    VAR2 = 1; 
    FUN2(data);
}
void FUN4(TwoIntsClass * data)
{
    if(VAR3)
    {
        free(data);
    }
}
void FUN5()
{
    TwoIntsClass * data;
    data = NULL;
    data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
    if (data == NULL) {exit(-1);}
    VAR3 = 1; 
    FUN4(data);
}
} 

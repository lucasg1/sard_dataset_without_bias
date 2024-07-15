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
        ; 
    }
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass[100];
    delete [] data;
    VAR1 = 0; 
    FUN0(data);
}
void FUN2(TwoIntsClass * data)
{
    if(VAR2)
    {
        ; 
    }
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass[100];
    delete [] data;
    VAR2 = 1; 
    FUN2(data);
}
void FUN4(TwoIntsClass * data)
{
    if(VAR3)
    {
        delete [] data;
    }
}
void FUN5()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass[100];
    VAR3 = 1; 
    FUN4(data);
}
} 

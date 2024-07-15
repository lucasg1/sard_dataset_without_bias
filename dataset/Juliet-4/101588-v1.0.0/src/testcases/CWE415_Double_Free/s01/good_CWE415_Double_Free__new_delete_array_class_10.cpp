namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalTrue)
    {
        data = new TwoIntsClass[100];
        delete [] data;
    }
    if(globalFalse)
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
    if(globalTrue)
    {
        data = new TwoIntsClass[100];
        delete [] data;
    }
    if(globalTrue)
    {
        ; 
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

namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new twoIntsStruct;
        delete data;
    }
    if(globalReturnsFalse())
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
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new twoIntsStruct;
        delete data;
    }
    if(globalReturnsTrue())
    {
        ; 
    }
}
void FUN2()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new twoIntsStruct;
    }
    if(globalReturnsTrue())
    {
        delete data;
    }
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new twoIntsStruct;
    }
    if(globalReturnsTrue())
    {
        delete data;
    }
}
} 

namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(1)
    {
        data = new twoIntsStruct;
    }
    if(0)
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
    twoIntsStruct * data;
    data = NULL;
    if(1)
    {
        data = new twoIntsStruct;
    }
    if(1)
    {
        delete data;
    }
}
void FUN2()
{
    twoIntsStruct * data;
    data = NULL;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new twoIntsStruct[100];
    }
    if(1)
    {
        delete [] data;
    }
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    if(1)
    {
        data = new twoIntsStruct[100];
    }
    if(1)
    {
        delete [] data;
    }
}
} 

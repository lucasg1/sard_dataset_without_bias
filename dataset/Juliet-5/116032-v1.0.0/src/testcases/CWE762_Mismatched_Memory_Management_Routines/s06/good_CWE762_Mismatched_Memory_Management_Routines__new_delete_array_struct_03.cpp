namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(5==5)
    {
        data = new twoIntsStruct;
    }
    if(5!=5)
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
    if(5==5)
    {
        data = new twoIntsStruct;
    }
    if(5==5)
    {
        delete data;
    }
}
void FUN2()
{
    twoIntsStruct * data;
    data = NULL;
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new twoIntsStruct[100];
    }
    if(5==5)
    {
        delete [] data;
    }
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    if(5==5)
    {
        data = new twoIntsStruct[100];
    }
    if(5==5)
    {
        delete [] data;
    }
}
} 

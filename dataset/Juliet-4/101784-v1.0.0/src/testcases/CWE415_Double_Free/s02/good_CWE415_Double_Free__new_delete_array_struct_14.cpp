namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new twoIntsStruct[100];
        delete [] data;
    }
    if(globalFive!=5)
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
    if(globalFive==5)
    {
        data = new twoIntsStruct[100];
        delete [] data;
    }
    if(globalFive==5)
    {
        ; 
    }
}
void FUN2()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new twoIntsStruct[100];
    }
    if(globalFive==5)
    {
        delete [] data;
    }
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new twoIntsStruct[100];
    }
    if(globalFive==5)
    {
        delete [] data;
    }
}
} 

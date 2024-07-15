namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalTrue)
    {
        data = new twoIntsStruct[100];
    }
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete [] data;
    }
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalTrue)
    {
        data = new twoIntsStruct[100];
    }
    if(globalTrue)
    {
        delete [] data;
    }
}
void FUN2()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
    }
    if(globalTrue)
    {
        free(data);
    }
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalTrue)
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
    }
    if(globalTrue)
    {
        free(data);
    }
}
} 

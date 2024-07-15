namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = NULL;
        data = (twoIntsStruct *)realloc(data, 100*sizeof(twoIntsStruct));
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
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = NULL;
        data = (twoIntsStruct *)realloc(data, 100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
    }
    if(globalReturnsTrue())
    {
        free(data);
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
        data = new twoIntsStruct[100];
    }
    if(globalReturnsTrue())
    {
        delete [] data;
    }
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new twoIntsStruct[100];
    }
    if(globalReturnsTrue())
    {
        delete [] data;
    }
}
} 

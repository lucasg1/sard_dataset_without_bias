void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        free(data);
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
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        free(data);
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
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
    }
    if(globalReturnsTrue())
    {
        free(data);
    }
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
    }
    if(globalReturnsTrue())
    {
        free(data);
    }
}

namespace NAMESPACE0
{
void FUN0()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = new struct _twoIntsStruct[100];
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
    }
    else
    {
        data = new struct _twoIntsStruct[100];
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
    }
    if(globalReturnsTrueOrFalse())
    {
        delete[] data;
    }
    else
    {
        delete[] data;
    }
}
void FUN1()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        struct _twoIntsStruct VAR1[100];
        data = VAR1;
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
    }
    else
    {
        struct _twoIntsStruct VAR1[100];
        data = VAR1;
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
    }
    if(globalReturnsTrueOrFalse())
    {
        ; 
    }
    else
    {
        ; 
    }
}
} 

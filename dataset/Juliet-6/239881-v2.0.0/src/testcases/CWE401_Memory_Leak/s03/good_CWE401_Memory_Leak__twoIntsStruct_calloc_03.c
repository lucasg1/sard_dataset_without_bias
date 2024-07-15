void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(5==5)
    {
        data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine(&data[0]);
    }
    if(5!=5)
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
    if(5==5)
    {
        data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine(&data[0]);
    }
    if(5==5)
    {
        free(data);
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
        data = (twoIntsStruct *)ALLOCA(100*sizeof(twoIntsStruct));
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine(&data[0]);
    }
    if(5==5)
    {
        ; 
    }
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    if(5==5)
    {
        data = (twoIntsStruct *)ALLOCA(100*sizeof(twoIntsStruct));
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine(&data[0]);
    }
    if(5==5)
    {
        ; 
    }
}

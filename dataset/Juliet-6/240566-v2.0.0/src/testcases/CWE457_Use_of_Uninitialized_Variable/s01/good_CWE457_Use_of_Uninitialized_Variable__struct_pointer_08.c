static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    twoIntsStruct * data;
    if(FUN0())
    {
        ; 
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data->intOne = 5;
        data->intTwo = 6;
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
    }
}
void FUN3()
{
    twoIntsStruct * data;
    if(FUN0())
    {
        ; 
    }
    if(FUN0())
    {
        data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data->intOne = 5;
        data->intTwo = 6;
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
    }
}
void FUN4()
{
    twoIntsStruct * data;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data->intOne = 5;
        data->intTwo = 6;
    }
    if(FUN0())
    {
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
    }
}
void FUN5()
{
    twoIntsStruct * data;
    if(FUN0())
    {
        data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data->intOne = 5;
        data->intTwo = 6;
    }
    if(FUN0())
    {
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
    }
}

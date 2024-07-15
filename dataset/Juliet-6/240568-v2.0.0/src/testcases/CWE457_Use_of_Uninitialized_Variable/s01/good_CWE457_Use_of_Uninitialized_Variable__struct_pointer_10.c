void FUN0()
{
    twoIntsStruct * data;
    if(globalTrue)
    {
        ; 
    }
    if(globalFalse)
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
void FUN1()
{
    twoIntsStruct * data;
    if(globalTrue)
    {
        ; 
    }
    if(globalTrue)
    {
        data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data->intOne = 5;
        data->intTwo = 6;
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
    }
}
void FUN2()
{
    twoIntsStruct * data;
    if(globalFalse)
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
    if(globalTrue)
    {
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
    }
}
void FUN3()
{
    twoIntsStruct * data;
    if(globalTrue)
    {
        data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data->intOne = 5;
        data->intTwo = 6;
    }
    if(globalTrue)
    {
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
    }
}

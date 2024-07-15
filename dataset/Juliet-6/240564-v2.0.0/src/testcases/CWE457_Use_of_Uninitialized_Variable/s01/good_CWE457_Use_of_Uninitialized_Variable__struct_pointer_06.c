static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    twoIntsStruct * data;
    if(STATIC_CONST_FIVE==5)
    {
        ; 
    }
    if(STATIC_CONST_FIVE!=5)
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
    if(STATIC_CONST_FIVE==5)
    {
        ; 
    }
    if(STATIC_CONST_FIVE==5)
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
    if(STATIC_CONST_FIVE!=5)
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
    if(STATIC_CONST_FIVE==5)
    {
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
    }
}
void FUN3()
{
    twoIntsStruct * data;
    if(STATIC_CONST_FIVE==5)
    {
        data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data->intOne = 5;
        data->intTwo = 6;
    }
    if(STATIC_CONST_FIVE==5)
    {
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
    }
}

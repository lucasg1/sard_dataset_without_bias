void FUN0()
{
    twoIntsStruct data;
    if(GLOBAL_CONST_TRUE)
    {
        data.intOne = 0;
        data.intTwo = 0;
    }
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printStructLine(&data);
    }
}
void FUN1()
{
    twoIntsStruct data;
    if(GLOBAL_CONST_TRUE)
    {
        data.intOne = 0;
        data.intTwo = 0;
    }
    if(GLOBAL_CONST_TRUE)
    {
        printStructLine(&data);
    }
}
void FUN2()
{
    twoIntsStruct data;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data.intOne = 0;
        data.intTwo = 0;
        printStructLine(&data);
    }
    if(GLOBAL_CONST_TRUE)
    {
        data.intOne = 1;
        data.intTwo = 1;
        printStructLine(&data);
    }
}
void FUN3()
{
    twoIntsStruct data;
    if(GLOBAL_CONST_TRUE)
    {
        data.intOne = 0;
        data.intTwo = 0;
        printStructLine(&data);
    }
    if(GLOBAL_CONST_TRUE)
    {
        data.intOne = 1;
        data.intTwo = 1;
        printStructLine(&data);
    }
}

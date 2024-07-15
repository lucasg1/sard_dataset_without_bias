void FUN0()
{
    twoIntsStruct data;
    ; 
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
}
void FUN1()
{
    twoIntsStruct data;
    ; 
    if(GLOBAL_CONST_TRUE)
    {
        data.intOne = 0;
        data.intTwo = 0;
        printStructLine(&data);
    }
}

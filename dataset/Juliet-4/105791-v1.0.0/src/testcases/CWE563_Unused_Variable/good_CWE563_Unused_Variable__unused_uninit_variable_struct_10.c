void FUN0()
{
    twoIntsStruct data;
    ; 
    if(globalFalse)
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
    if(globalTrue)
    {
        data.intOne = 0;
        data.intTwo = 0;
        printStructLine(&data);
    }
}

static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    twoIntsStruct data;
    ; 
    if(staticFalse)
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
    if(staticTrue)
    {
        data.intOne = 0;
        data.intTwo = 0;
        printStructLine(&data);
    }
}

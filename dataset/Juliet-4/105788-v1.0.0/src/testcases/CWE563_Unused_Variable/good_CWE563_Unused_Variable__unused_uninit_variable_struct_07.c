static int staticFive = 5;
void FUN0()
{
    twoIntsStruct data;
    ; 
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        data.intOne = 0;
        data.intTwo = 0;
        printStructLine(&data);
    }
}

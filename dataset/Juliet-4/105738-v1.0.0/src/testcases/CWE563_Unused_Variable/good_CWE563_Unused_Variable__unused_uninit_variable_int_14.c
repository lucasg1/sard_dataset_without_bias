void FUN0()
{
    int data;
    ; 
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5;
        printIntLine(data);
    }
}
void FUN1()
{
    int data;
    ; 
    if(globalFive==5)
    {
        data = 5;
        printIntLine(data);
    }
}

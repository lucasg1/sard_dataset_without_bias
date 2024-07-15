namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass data;
    switch(6)
    {
    case 6:
        ; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(8)
    {
    case 7:
        printLine("Benign, fixed string");
        break;
    default:
        data.intOne = 1;
        data.intTwo = 2;
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
        break;
    }
}
void FUN1()
{
    TwoIntsClass data;
    switch(6)
    {
    case 6:
        ; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        data.intOne = 1;
        data.intTwo = 2;
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN2()
{
    TwoIntsClass data;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data.intOne = 1;
        data.intTwo = 2;
        break;
    }
    switch(7)
    {
    case 7:
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    TwoIntsClass data;
    switch(6)
    {
    case 6:
        data.intOne = 1;
        data.intTwo = 2;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 

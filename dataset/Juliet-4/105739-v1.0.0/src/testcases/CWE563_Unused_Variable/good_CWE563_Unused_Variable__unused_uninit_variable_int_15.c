void FUN0()
{
    int data;
    ; 
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = 5;
        printIntLine(data);
        break;
    }
}
void FUN1()
{
    int data;
    ; 
    switch(6)
    {
    case 6:
        data = 5;
        printIntLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}

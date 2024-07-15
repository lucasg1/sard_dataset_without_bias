void FUN0()
{
    twoIntsStruct data;
    ; 
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data.intOne = 0;
        data.intTwo = 0;
        printStructLine(&data);
        break;
    }
}
void FUN1()
{
    twoIntsStruct data;
    ; 
    switch(6)
    {
    case 6:
        data.intOne = 0;
        data.intTwo = 0;
        printStructLine(&data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}

static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    if(FUN0())
    {
        {
            int intArray[5] = { 1, 2, 3, 4, 5 };
            char *charPointer = (char *)intArray; 
<START>
            int toPrint = (int) (*(charPointer+2));
<END>
            printIntLine(toPrint);
        }
    }
}

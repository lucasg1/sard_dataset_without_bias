void FUN0() 
{
    int i = 0;
    do
    {
        if (i == 10) 
        { 
            break; 
        }
        printIntLine(i);
        i = (i + 1) % 256;
    } while (i >= 0);
}
void FUN1() 
{
    FUN0();
}

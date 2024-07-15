void FUN0() 
{
    int i = 0;
    while(i >= 0)
    {
        if (i == 10) 
        { 
            break; 
        }
        printIntLine(i);
        i = (i + 1) % 256;
    }
}
void FUN1() 
{
    FUN0();
}

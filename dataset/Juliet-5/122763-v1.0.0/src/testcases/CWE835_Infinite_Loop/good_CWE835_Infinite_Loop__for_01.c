void FUN0() 
{
    int i = 0;
    for (i = 0; i >= 0; i = (i + 1) % 256)
    {
        if (i == 10) 
        { 
            break; 
        }
        printIntLine(i);
    }
}
void FUN1() 
{
    int i = 0;
    for(i = 0; i < 11; i = (i + 1) % 256)
    {
        printIntLine(i);
    }
}
void FUN2() 
{
    FUN0();
    FUN1();
}

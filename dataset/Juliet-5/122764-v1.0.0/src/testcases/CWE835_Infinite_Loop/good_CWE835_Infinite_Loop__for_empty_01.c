void FUN0() 
{
    int i = 0;
    for(;;)
    {
        if (i == 10) 
        { 
            break; 
        }
        printIntLine(i);
        i++;
    }
}
void FUN1() 
{
    FUN0();
}

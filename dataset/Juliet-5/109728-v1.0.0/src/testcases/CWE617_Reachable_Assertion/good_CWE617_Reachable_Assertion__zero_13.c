void FUN0()
{
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        assert(1); 
    }
}
void FUN1()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        assert(1); 
    }
}

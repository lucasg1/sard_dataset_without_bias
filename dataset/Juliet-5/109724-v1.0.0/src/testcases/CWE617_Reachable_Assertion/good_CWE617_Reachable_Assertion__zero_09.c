void FUN0()
{
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        assert(1); 
    }
}

static int staticFive = 5;
void FUN0()
{
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        assert(1); 
    }
}

void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        assert(1); 
        break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
        assert(1); 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}

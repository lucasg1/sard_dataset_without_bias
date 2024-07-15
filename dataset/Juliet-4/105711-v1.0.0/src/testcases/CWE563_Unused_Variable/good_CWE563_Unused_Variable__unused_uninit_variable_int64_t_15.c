void FUN0()
{
    int64_t data;
    ; 
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = 5LL;
        printLongLongLine(data);
        break;
    }
}
void FUN1()
{
    int64_t data;
    ; 
    switch(6)
    {
    case 6:
        data = 5LL;
        printLongLongLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}

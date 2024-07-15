void FUN0()
{
    double data;
    switch(6)
    {
    case 6:
        ; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(8)
    {
    case 7:
        printLine("Benign, fixed string");
        break;
    default:
        data = 5.0;
        printDoubleLine(data);
        break;
    }
}
void FUN1()
{
    double data;
    switch(6)
    {
    case 6:
        ; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        data = 5.0;
        printDoubleLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN2()
{
    double data;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = 5.0;
        break;
    }
    switch(7)
    {
    case 7:
        printDoubleLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    double data;
    switch(6)
    {
    case 6:
        data = 5.0;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        printDoubleLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}

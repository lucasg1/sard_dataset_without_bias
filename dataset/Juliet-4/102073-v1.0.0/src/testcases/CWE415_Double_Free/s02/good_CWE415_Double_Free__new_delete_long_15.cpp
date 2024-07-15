namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = new long;
        delete data;
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
        ; 
        break;
    }
}
void FUN1()
{
    long * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = new long;
        delete data;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        ; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN2()
{
    long * data;
    data = NULL;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = new long;
        break;
    }
    switch(7)
    {
    case 7:
        delete data;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    long * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = new long;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        delete data;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 

namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = new int64_t;
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
        delete data;
        break;
    }
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = new int64_t;
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
void FUN2()
{
    int64_t * data;
    data = NULL;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = new int64_t[100];
        break;
    }
    switch(7)
    {
    case 7:
        delete [] data;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = new int64_t[100];
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        delete [] data;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 

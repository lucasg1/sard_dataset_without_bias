namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = new char;
        *data = 'A';
        printHexCharLine(*data);
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
    char * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = new char;
        *data = 'A';
        printHexCharLine(*data);
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
    char * data;
    data = NULL;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        char VAR1;
        data = &VAR1;
        *data = 'A';
        printHexCharLine(*data);
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
void FUN3()
{
    char * data;
    data = NULL;
    switch(6)
    {
    case 6:
        char VAR1;
        data = &VAR1;
        *data = 'A';
        printHexCharLine(*data);
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
} 

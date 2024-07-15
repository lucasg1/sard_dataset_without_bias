void FUN0()
{
    FILE * data;
    data = NULL; 
    switch(6)
    {
    case 6:
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
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
    FILE * data;
    data = NULL; 
    switch(6)
    {
    case 6:
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
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
    FILE * data;
    data = NULL; 
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = fopen("GoodSource_fopen.txt", "w+");
        break;
    }
    switch(7)
    {
    case 7:
        fclose(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    FILE * data;
    data = NULL; 
    switch(6)
    {
    case 6:
        data = fopen("GoodSource_fopen.txt", "w+");
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        fclose(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}

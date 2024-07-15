static int staticFive = 5;
void FUN0()
{
    char data;
    ; 
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 'C';
        printHexCharLine(data);
    }
}
void FUN1()
{
    char data;
    ; 
    if(staticFive==5)
    {
        data = 'C';
        printHexCharLine(data);
    }
}

void FUN0()
{
    wchar_t data;
    ; 
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = L'W';
        printWcharLine(data);
    }
}
void FUN1()
{
    wchar_t data;
    ; 
    if(globalFive==5)
    {
        data = L'W';
        printWcharLine(data);
    }
}
